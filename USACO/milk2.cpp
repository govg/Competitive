/* 
ID: govind.2
PROG: milk2
LANG: C++
*/

#include<iostream>
#include<fstream>
#include<string>
#include<limits>


#define lli long long int

#define inf 1000000
#define fr(a,b) for(int i=0;i<b;i++)

using namespace std;

int begin[5000],end[5000];

int ctr=0;



void enter()
{
	lli t1,t2,swap1,swap2;
	int i,flag=1;


	cin>>t1;//>>t2;

	if(!(ctr))
	{
		begin[ctr]=t1;
		//end[ctr]=t2;
		ctr++;

	}
	else
	{
		i=ctr;
		while(flag)
		{
			begin[i+1]=begin[i];
			end[i+1]=end[i];
			
			i--;
			
			if(begin[i]<=t1)
				{flag=0;}

		}

		begin[i+1]=t1;
		//end[i+1]=t2;

		ctr++;


	
}



}
int main()
{

	begin[0]=end[0]=inf;

	//ofstream cout ("milk2.out");
	//ifstream cin ("milk2.in");

	int n;
	
	cin>>n;
	
	fr(0,n)
		enter();


	fr(0,n)
		cout<<begin[i]<<" ";

	return 0;

}
