/*
ID: govind.2
PROG: ride
LANG: C++
*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	ofstream fout ("ride.out");
	ifstream fin ("ride.in");

	char a[7],b[7];
	long long int a1,b1;

	a1=b1=1;

	fin>>a>>b;

	//cin>>a>>b;

	for(int i=0;a[i]!='\0';i++)
	{
		a[i]-=64;
		a1*=a[i];
		
	}	
	
	for(int i=0;b[i]!='\0';i++)
	{
		b[i]-=64;
		b1*=b[i];
		
	}	
	
a1
	

	=a1%47;
	b1=b1%47;

	
	if(a1==b1)
	fout<<"GO\n";
	
	else
	fout<<"STAY\n";

}