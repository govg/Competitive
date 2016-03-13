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


lli gcd(lli x,lli y)
{
	if(y==0)
		return x;
	else
		return gcd(y,x%y);
}


using namespace std;

int main()
{
	
	lli x,y,a,b;

	cin>>x>>y>>a>>b;

	lli count=0;

	lli lcm;

	lcm=(x*y)/gcd(x,y);

	count=(b/lcm)-((a-1)/lcm);

	
	cout<<count<<endl;


	return 0;

}