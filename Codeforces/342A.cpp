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


int main()
{	
	int input[7];

	int n;

	int x;

	cin>>n;

	for(int i=0;i<7;i++)
		input[i]=0;

	for(int i=0;i<n;i++)
	{
		cin>>x;
		input[x-1]++;
	} 

	if(input[0]!=(n/3))
	{
		cout<<"-1"<<endl;
		return 0;
	}
	
	if(!(input[0]==input[5]+input[3]))
	{
		cout<<"-1"<<endl;
		return 0;
	}

	if(!(input[0]==input[1]+input[2]))
	{
		cout<<"-1"<<endl;
		return 0;
	}

	if(input[5])
	{
		if(input[3])
		{
			if(input[2]+input[1]!=input[5]+input[3])
			{
				cout<<"-1"<<endl;
				return 0;
			}
		}
		else
			if(input[2]+input[1]!=input[5])
			{
				cout<<"-1"<<endl;
				return 0;

			}
	}
	if(input[2]&&(input[2]!=input[5]))
	{
		cout<<"-1"<<endl;
		return 0;
	}
	
	
	if(input[4]||input[6])
	{
		cout<<"-1"<<endl;
		return 0;
	}

	for(int i=0;i<(n/3);i++)
	{
		cout<<1<<" ";
		

		if(input[5])
		{
			if(input[1])
			{
				cout<<2<<" "<<6<<endl;
				input[1]--;
				input[5]--;
			}
			else
			{
				cout<<3<<" "<<6<<endl;
				input[2]--;
				input[5]--;
			}
			
			continue;
		}

		if(input[3])
		{
			cout<<2<<" "<<4<<endl;
			input[3]--;
			input[1]--;
			continue;
		}

	}
	

	return 0;

}
 


