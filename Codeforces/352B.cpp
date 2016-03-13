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

#define min(a,b) a>b?b:a
#define sq(a) a*a



//Data Types
#define lli long long int

#define max 100001



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

	lli a[max],b[max];

	
	
	for(int i=0;i<max;i++)
		a[i]=b[i]=0;
	


	int n,temp;
	cin>>n;

	for(int i=1;i<n+1;i++)
	{

		cin>>temp;
		if(a[temp]>0)
		{
			if(b[temp])
			{	
				if(i-a[temp]!=b[temp])
					a[temp]=-1;
				else
					a[temp]=i;
			}
			else
			{
				b[temp]=i-a[temp];
				a[temp]=i;
			}
		}
		else if(a[temp]==0)
			{
				a[temp]=i;
			}
			//cout<<a[temp]<<" "<<b[temp]<<endl;
	}
	int ctr;
	ctr=0;
	for(int i=0;i<max;i++)
	{
		if(a[i]>0)
			ctr++;
	}

	cout<<ctr<<endl;
	for(int i=0;i<max;i++)
	{
		if(a[i]>0)
			cout<<i<<" "<<b[i]<<endl;
	}
	return 0;

}
 


