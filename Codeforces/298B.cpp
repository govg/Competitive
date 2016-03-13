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

lli gcd(lli x,lli y)
{
	if(y==0)
		return x;
	else
		return gcd(y,x%y);
}


int main()
{	
	int t,sx,sy,ex,ey;
	string input;

	cin>>t>>sx>>sy>>ex>>ey;

	int left,top;

	left=ex-sx;
	top=ey-sy;

	int west,north,south,east;
	west=north=east=south=0;


	cin>>input;

	for(int i=0;i<t;i++)
	{
		if(left>0)
		{
			if(input[i]=='E')
				left--;
		}


		if(left<0)
		{
			if(input[i]=='W')
				left++;
		}


		if(top>0)
		{
			if(input[i]=='N')
				top--;
		}


		if(top<0)
		{
			if(input[i]=='S')
				top++;
		}

		if(!top&&!left)
			{
				cout<<i+1<<endl;
				return 0;
			}
	}

	cout<<-1<<endl;

	return 0;


	
}
 


