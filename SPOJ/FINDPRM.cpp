/*
Name: 		Govind Gopakumar
Program:	
Date:		
*/
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstring>
//#include <string>
#include <vector>
#include <cstdio>
//#include <stack>
#include <queue>
//#include <utility>
#include <cmath>

//Limits
//#define maxdp 1E+37

//Data Types
#define lli long long int


//#define ten7 10000001


using namespace std;



int main()
{	
	lli ten7 = 10000001;
	queue <int> factors;
	vector <int> primes;
	bool *flags=(bool*)malloc(ten7*sizeof(bool));
	int *cumflags=(int *)malloc(ten7*sizeof(int));

	cumflags[0]=0;
	cumflags[2]=1
	memset(flags,1,sizeof(bool)*ten7);


	int x,y;

	x = sqrt(ten7/2);

	for(int i=2;i<=x;i++)
	{
		y=ten7/(2*i);

		for(int j=i;j<=y;j++)
		{	
			if(!flags[j])
			{
				if(factors.empty())
					continue;
				

				if(j==factors.front())
				{
					factors.pop();
				}
				else
					continue;
				
			}
			factors.push(i*j);

			flags[i*j/2]=0;

		}

		while(!factors.empty())
			factors.pop();
	}


	for(int i=2;i<ten7;i+=2)
		cumflags[i]=cumflags[i-1]+flags[i];
	int t,n;
	cin>>t;

	for(int i=0;i<t;i++)
	{
		cin>>n;
		cout<<cumflags[n]-cumflags[n/2]<<endl;
	}
/*	for(int i=2;i<ten7;i++)
	{
			if(flags[i])
				primes.push_back(i);
	}
	


	int t,n;vector <int >:: iterator k,l;
	cin>>t;

	for(int i=0;i<t;i++)
	{
		cin>>n;
		k=upper_bound(primes.begin(),primes.end(),n);
		l=upper_bound(primes.begin(),primes.end(),n/2);
		cout<<k-l<<endl;
	}
*/	
	return 0;

}
 


