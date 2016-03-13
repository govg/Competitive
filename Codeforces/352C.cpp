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
	vector<float> diff;

	float temp;

	int n;

	for(int i=0;i<2*n;i++)
	{
		cin>>temp;
		
		temp=temp%1;
		diff.push_back(temp);
	}

	sort(diff.begin(), diff.end());

	float c;
	c=0.000;
	int flag=1;
	int j;
	j=0;

	while(!diff[j++]);

	for(int i=0;flag;j++,i++)
	{
		if((diff[j]>=0.500)||(diff[(2*n-1)-i]<=0.500)||)
			flag=0;
		else
			c+=-diff[j]+(1-diff[(2*n-1)-i]);
	}
	
	return 0;

}
 


