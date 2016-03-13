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
	long long int a,x,y;

	cin>>a>>x>>y;

	if(y>a)
		y-=a;
	else
	{
		if( (abs(x)<((a+1)/2)) && (y) && (y!=a))
			cout<<"1\n";
		else
			cout<<"-1\n";

		return 0;
	}

	

	if(!(y%a))
	{
		cout<<"-1\n";
		return 0;
	}


	lli red=y/a;

	//cout<<red<<endl;

	lli num;

	num=(3*(red/2))+(red%2);
	//cout<<num<<endl;

	if(red%2)
	{
		

		if(!x)
		{
			cout<<"-1\n";
			return 0;
		}

		if(abs(x)<a)
		{
			if(x<0)
			{	
				
				cout<<num+2<<endl;
			}
			else
				cout<<num+3<<endl;
		}
		else
		{
			cout<<"-1\n";
			return 0;

		}
	}	
	else
	{


		if(abs(x)<((a+1)/2))
		{
			cout<<num+2<<endl;
		}
		else
		{
			cout<<"-1\n";
			return 0;
		}

	}
	return 0;

}
 


