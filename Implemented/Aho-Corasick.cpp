#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <cstdlib>
#define MAXS 500
#define MAXC 26

using namespace std;

int go2[MAXS][MAXC];
int failure[MAXS];
int output[MAXS];


int buildmachine(const vector <string> &keywords, char lowestchar = 'a', char highestchar = 'z')
{
	//memset(sizeof(go2)/MAXS + go2,-1,sizeof(go2) - sizeof(go2)/MAXS);
	memset(go2, -1, sizeof(go2));
	memset(failure,0,sizeof failure);
	memset(output,0,sizeof output);

	int states = 1;
	int currentstate,nextstate;
	int i,c;
	for(c=0;c<=highestchar-lowestchar;c++)
	{
		go2[0][c] = 0;
	}
	for (i=0;i<keywords.size();i++)
	{
		const string &word = keywords[i];
		currentstate=0;
		for (int j=0;j<word.size();j++)
		{
			int c = word[j] - lowestchar;
			if(go2[currentstate][c] == -1)
				{
					currentstate = states++;
				}
			currentstate = go2[currentstate][c];
		}
		output[currentstate] |= (1<<i);
	}


	queue <int> q;
	for ( c=0;c <= highestchar - lowestchar; c++ )
	{
		if(go2[0][c] != 0 /*&& go2[0][c] != -1*/)
		{
			failure[go2[0][c]] = 0;
			q.push(go2[0][c]);
		}

	}

	while(q.size())
	{
		currentstate = q.front();
		q.pop();
		for (c=0;c<=highestchar-lowestchar ; c++)
		{
			nextstate = go2[currentstate][c];
			if(nextstate != -1)
			{
				int failstate = failure[currentstate];
				while (go2[failstate][c] == -1)
				{
					failstate = failure[failstate];
				}
				failure[nextstate] = go2[failstate][c]; 
				output[nextstate] |= output[failstate];
				q.push(nextstate);
			}
			
		}
	}
	return states;

}

int findnextstate(int state, char c, int lowestchar = 'a')
{
	int i = c - lowestchar;
	while(go2[state][i] == -1) state = failure[state];
	return go2[state][i];
}

int main()
{
	vector<string> keywords;
	   keywords.push_back("he");
    keywords.push_back("she");
    keywords.push_back("hers");
    keywords.push_back("his");
     string text = "ahishers";

     buildmachine(keywords);
     int currentstate = 0;
     for (int i=0;i<text.size();i++)
     {
     	currentstate = findnextstate(currentstate,text[i]);
     	if (output[currentstate] == 0) continue;
     	for (int j=0;j<keywords.size();j++)
     	{
     		if(output[currentstate] & (1<<j))
     			cout << "keyword " << keywords[j] << " Matched\n"  ;
     	}
     }

	return 0;

}
