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
#define max(a,b) a>b?a:b;
#define min(a,b) a>b?b:a;

//Data Types
#define lli long long int





using namespace std;


int main()
{	
	lli n,m,k,x;

	cin>>n>>m>>k;
	vector<lli> alice,bob;

	lli a,b;
	a=b=0;


	for(int i=0;i<n;i++)
	{

		cin>>x;
		a+=x;
		alice.push_back(x);

	}


	for(int i=0;i<m;i++)
	{

		cin>>x;
		b+=x;
		bob.push_back(x);

	}

	sort(alice.begin(),alice.end());
	sort(bob.begin(), bob.end());

	lli i,j;

	for(i=0,j=0;(i<n)&&(j<m);)
	{
		if(alice[i]>bob[j])
			j++;
		else
			i++;
	}

	if(i==n)
	{
		if(a>b)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	else
		cout<<"YES\n";




	return 0;

}
 


