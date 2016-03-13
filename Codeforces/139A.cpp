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
#define maxdp 100008

//Data Types
#define lli long long int

using namespace std;

int main()
{

	int n;
	int sum=0;
	int days[7];

	cin>>n;
	int la;

	la=0;

	for(int i=0;i<7;i++)
	{
		cin>>days[i];
		sum+=days[i];
		if(days[i])
			la=i;

	}


	n=n%sum;
	if(!n)
		{
			cout<<la+1;
			return 0;
		}

	int j=0;

	while(n>0)
	{
		j=j%7;
		n-=days[j++];

	}

	
	cout<<j;
	return 0;

}