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
int a[50][50],b[50][50];
int na,ma,nb,mb;

int sum(int x,int y)
{

	int sum;

	sum=0;

	for(int i=0;i<na;i++)
	{
		if((x+i)>=nb)
			break;

		if(x+i<0)
			continue;
		
		for(int j=0;j<ma;j++)
		{
			if((y+j)>=mb)
				break;

			if(y+j<0)
				continue;

			sum+=a[i][j]*b[i+x][j+y];
		}
	}

	return sum;
}
int main()
{
	
	string s;
	
	cin>>na>>ma;

	for(int i=0;i<na;i++)
	{
		cin>>s;

		for(int j=0;j<ma;j++)
			a[i][j]=s[j]-'0';
	}

	cin>>nb>>mb;
	
	int t;

	for(int i=0;i<nb;i++)
	{
		cin>>s;

		for(int j=0;j<mb;j++)
			b[i][j]=s[j]-'0';
	}

	int rx,ry,ret;

	ret=0;


	for(int i=-na;i<nb;i++)
	{
		for(int j=-ma;j<mb;j++)
		{	
			t=sum(i,j);
			if(t>ret)
			{
				rx=i;
				ry=j;
				ret=t;

			}
		}
	}

	cout<<rx<<" "<<ry;

	return 0;

}
