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
	int n,up,down;
	up=down=0;

	int t;
	
	for(int i=0;i<n;i++)
	{
		cin>>t;
		up+=t;	
		cin>>t;
		down+=t;
	}
	
	if(up%2)
	{
		if(down%2)
			cout<<"1"<<endl;
		else
			cout<<"-1"<<endl;
	}
	else
	{
		if(down%2)
			cout<<"-1"<<endl;
		else
			cout<<"0"<<endl;
	}
}