/*
Name: 		Govind Gopakumar
Program:	
Date:		
*/
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <cstdio>
#include <stack>
#include <queue>
#include <utility>

//Inline Functions
#define max(a,b) a>b?a:b
#define min(a,b) a>b?b:a
#define sq(a) a*a

//Limits
#define maxdp 1E+37

//Data Types
#define lli long long int





using namespace std;

lli gcd(lli x,lli y)
{
	if(y==0)
		return x;
	else
		return gcd(y,x%y);
}


int main()
{	
	string word;
	char next;
	next='a';
	int k;
	int flags[26];

	memset(flags,0,26*sizeof(char));

	int  half;

	half=(word.length()/2)+(word.length()%2);
	
	for(int i=0;i<half;i++)
	{
		if(word[i]!=word[n-1-i])
		{
			if(alp(word[i]))
			{
				if(alp(word[n-1-i]))
				{
					cout<<"IMPOSSIBLE\n";
					return 0;
				}
				else
				{
					word[n-1-i]=
				}
			}
		}
	}
	return 0;

}
 


