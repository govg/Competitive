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
#define maxdp 1E+37

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

	int a[100001],b[100001],flag[100001];

	
	for(int i=0;i<10001;i++)
		a[i]=-1;

	memset(b,10001,0);
	memset(flag,100001,0);
	
	
	int n,temp;

	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>temp;

		switch(a[temp])
		{
			case -2:	break;
			case -1:	a[temp]=i;
						break;
			default:	if(flag[temp])
						{
							if((a[temp]-i)%b[temp])
								a[temp]=-2;
								
						}
						else
						{
							b[temp]=a[temp]-i;
							flag[temp]++;
						}




		}

	}

	int ctr=0;
	for(int i=0;i<100001;i++)
	{
		if(a[i]+2)
			ctr++;
	}

	cout<<ctr<<endl;

	for(int i=0;i<100001;i++)
	{
		if(a[temp]+2)
		{
			cout<<temp<<" "<<b[temp]<<endl;
		}
	}
	return 0;

}
 


