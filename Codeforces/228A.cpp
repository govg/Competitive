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
	map<lli,lli> x;
	lli t;

	for(int i=0;i<4;i++)
	{
		cin>>t;
		x[t]++;
	}

	t=4-x.size();

	cout<<t<<endl;

	return 0;

}