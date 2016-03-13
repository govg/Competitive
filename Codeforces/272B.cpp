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

int proc(int c)
{

	int r;
	r=0;
	while(c)
	{
		r+=c%2;
		c=c/2;
	}

	return r;

}
int main()
{
	int n;


	int temp;
	cin>>n;

	lli a[100];
	memset(a,0,sizeof(lli)*100);

	for(int i=0;i<n;i++)
	{
		cin>>temp;
		a[proc(temp)]++;

	}

	lli com;

	com=0;

	for(int i=0;i<100;i++)
	{
		if(a[i])
		{
			//cout<<i<<" "<<a[i]<<endl;
			com+=(a[i]*(a[i]-1))/2;
		}
	}

	cout<<com<<endl;

	return 0;
}
