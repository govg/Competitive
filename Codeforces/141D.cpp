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

typedef struct ramp
{
	lli start,stop,time;

};

bool comp(ramp t1,ramp t2)
{
	return t1.stop<t2.stop;
}
int main()
{
	lli n,l;
	vector<ramp> v;

	ramp temp;
	lli x,d,t,p;

	cin>>n>>l;

	temp.start=0;
	temp.stop=0;
	temp.time=0;

	v.push_back(temp);


	for(int i=0;i<n;i++)
	{
		cin>>x>>d>>t>>p;

		temp.start=x-p;
		temp.stop=x+d;
		temp.time=t+p;

		v.push_back(temp);

	}


	sort(v.begin(), v.end(),comp());

	vector<lli> times;

	times.push_back(0);

	for(int i=1;i<v.size();i++)
	{
		(v[i].stop-v[i-1].stop)~()
	}

	return 0;
}