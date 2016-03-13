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
//#include <ctype>
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

int is_lower(char x)
{
	if((x>='a')&&(x<='z'))
		return 1;
	else
		return 0;
}
int main()
{	

	string word;
	int t=0;;

	cin>>word;
	for(int i=0;i<word.length();i++)
	{
		if(is_lower(word[i]))
			t++;
			
	}
	int length;

	length=(word.length()/2)+(word.length()%2);

	for(int i=0;i<word.length();i++)
	{
		if(t>=(length))
		{
			if(!is_lower(word[i]))
				word[i]+=32;
		}
		else
		{
			if(is_lower(word[i]))
				word[i]-=32;
		}
	}

	cout<<word<<endl;
	
	return 0;

}
 


