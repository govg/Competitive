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
#include <map>
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

	int fing;

	fing=0;
	int temp;
	cin>>n;


	for(int i=0;i<n;i++)
	{
		cin>>temp;

		fing+=temp;
	}

	fing=fing%(n+1);
	temp=0;
	for(int i=1;i<=5;i++)
	{
		if((fing+i)%(n+1)!=1)
			temp++;
	}

	cout<<temp<<endl;

	return 0;
}
