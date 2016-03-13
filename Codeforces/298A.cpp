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
	
	string input;

	int flag;
	flag=0;
	char ch;

	int n;

	cin>>n;

	int i;

	cin>>input;
	ch=input[0];

	for(i=1;(flag<2)&&(i<n);i++)
	{
		if(input[i]!=ch)
			{
				flag++;
				ch=input[i];
			}	

	}	

	for(i=n-1,flag=0;(flag<2)&&(i>-1);i--)
	{
		if(input[i]!=ch)
			{
				flag++;
				ch=input[i];
			}	

	}	

	cout<<i-1<<" "<<i<<endl;
	return 0;

}
 


