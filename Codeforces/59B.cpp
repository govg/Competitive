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
	int n;
	int sum,od;
	vector<int> odd;

	sum=od=0;

	int temp;
	cin>>n;
	
	for(int i=0;i<n;i++)
		{
			cin>>temp;
			if(temp%2)
			{
				odd.push_back(temp);
				od++;
			}
			sum+=temp;
		}
	if(od)
		sort(odd.begin(), odd.end());
	else
	{
		cout<<0;
		return 0;
	}
	if(od%2)
		cout<<sum<<endl;
	else
	{
		sum-=odd[0];
		od--;

		if(od)
			cout<<sum;
		else
			cout<<0;
	}

	return 0;

}
 


