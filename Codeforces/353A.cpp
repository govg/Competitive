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

	vector<int> noteven;
	up=down=0;
	int flag=0;
	int t;
	cin>>n;
	int f=0;

	for(int i=0;i<n;i++)
	{
		cin>>t;
		up+=t;
		flag=t%2;
		cin>>t;
		down+=t;
		flag=t%2;
		
	}


	if(up%2)
	{
		if(down%2)
		{
			if(f)
				cout<<"1"<<endl;
			else
				cout<<"-1"<<endl;
		}
		else
			cout<<"-1"<<endl;
	}
	else
	{
		if(down%2)
		{
			cout<<"-1"<<endl;
		}
		else
			cout<<"0"<<endl;
	}

	return 0;

}