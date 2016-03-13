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
	int n;
	v(lli) input;

	lli *sl,*sr;

	lli x,sum;

	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>x;
		input.push_back(x);

	}

	sl=(lli*)malloc(sizeof(lli)*n);
	sr=(lli*)malloc(sizeof(lli)*n);
	
	lli *input1,*input2;

	input2=(lli*)malloc(sizeof(lli)*n);
	input1=(lli*)malloc(sizeof(lli)*n);
	
	st(input);

	lli prev=0;

	for(int i=0;i<n;i++)
	{
		input1[i]=input[i]-prev;
		prev=input[i];
	}

	prev=input[n-1];

	for(int i=n-1;i>=0;i--)
	{
		input2[i]=prev-input[i];
		prev=input[i];
	}

	sum=0;

	prev=0;

	sl[0]=input1[0];
	sr[n-1]=input2[n-1];

	for(int i=1;i<n;i++)
	{
		sl[i]=sl[i-1]+((i+1)*input1[i]);
	}

	for(int i=n-2;i>=0;i--)
	{
		sr[i]=sr[i+1]+((n-i-1)*input2[i]);
	}

	for(int i=0;i<n;i++)
	{
		sum+=sl[i]+sr[i];
	}

	lli nsum,nn;
	nsum=sum/gcd(sum,n);
	nn=n/gcd(sum,n);

	cout<<nsum<<" "<<nn<<endl;

	





	return 0;

}
 


