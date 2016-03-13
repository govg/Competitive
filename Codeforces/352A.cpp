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

int lcm(int x, int y)
{
	return x*y/gcd(x,y);
}
int main()
{	

	int n,f,z;
	cin>>n;
	f=z=0;
	vector<int> v;
	int temp;

	for(int i=0;i<n;i++)
	{
		cin>>temp;

		if(temp==0)
			z++;
		if(temp==5)
			f++;
	}

	if(z)
		{
			if(f>=9)
			{
				for(f=f-(f%9);f;f--)
					cout<<5;
				for(;z;z--)
					cout<<0;
			}
			else
			{
				cout<<0<<endl;
			}
		}
	else
		cout<<-1<<endl;

	return 0;

}
 


