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

lli comp(int a,int b,int c)
{
	if(a==1)
		return b*c;
	if(b==1)
		return c*a;
	if(c==1)
		return a*b;
	if (a&&b&&c)
	{
		return b+c-1+comp(a-1,b,c);
	}
	else
		return 0;
}

int main()
{	
	int a,b,c;

	int n;
	cin>>a>>b>>c;

	n=comp(a,b,c);
	cout<<n;

	return 0;

}