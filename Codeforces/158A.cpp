#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <cstdio>

//Data Types
#define lli long long int

//Vectors and operations
#define v(x) vector<x>
#define pb() push_back()
#define st(v) sort(v.begin(),v.end())



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
	

	int n,k,j;
	int count=0;

	cin>>n>>k;

	for(int i=0;i<n;i++)
	{	
		cin>>j;
		if(j>=k)
			count++;
	}

	cout<<count<<endl;

	return 0;

}
 


