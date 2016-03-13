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

	string guest,host,mix;
	int total[26];

	memset(total,0,26*sizeof(int));

	cin>>guest>>host>>mix;

	for(int i=0;i<guest.length();i++)
	{
		total[guest[i]-'A']++;
	}

	for(int i=0;i<host.length();i++)
	{
		total[host[i]-'A']++;
	}

	for(int i=0;i<mix.length();i++)
	{
		total[mix[i]-'A']--;
	}

	for(int i=0;i<26;i++)
	{
		if(total[i])
		{
			cout<<"NO\n";
			return 0;
		}
	}

	cout<<"YES\n";


	return 0;

}
 


