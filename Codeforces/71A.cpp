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
	int n;
	string input;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>input;
		if(input.size()>10)
			cout<<input[0]<<input.size()-2<<input[input.size()-1]<<endl;
		else
			cout<<input<<endl;
	}
	




	return 0;

}
 


