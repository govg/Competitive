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
	vector<int> a;

	int t;
	cin>>n;
	n+=n;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		a.push_back(t);
	}
	
	sort(a.begin(),a.end());

	t=0;
	int flag=0;

	int dup;
	dup=0;

	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
			dup++;
	}
	dup=n-dup;

	dup=((dup*(dup-1)))/2;

	cout<<dup<<endl;

	for(int i=0;i<n;i++)
	{
		
			cout<<t+1<<" ";
			t++;
			t=t%2;
		
	}
}