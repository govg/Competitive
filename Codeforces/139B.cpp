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
#define INF 1000008

//Data Types
#define lli long long int

using namespace std;


typedef struct rooms
{
	int length,width,height;
};

typedef struct paper
{
	int length,width,price;
};



lli co(paper x, rooms y)
{
	lli perimeter,ef;

	perimeter=2*(y.length+y.width);

	int dup;
	//cout<<"Room:\tL\tH\tW\n\t"<<y.length<<"\t"<<y.height<<"\t"<<y.width<<endl;
	//cout<<"Wall:\tL\tW\tP\n\t"<<x.length<<"\t"<<x.width<<"\t"<<x.price<<endl;
	if(x.length<y.height)
		return INF;

	dup=x.length/y.height;
	//cout<<"DUP is "<<dup<<endl;

	ef=perimeter/(dup*x.width);

	if(perimeter%(dup*x.width))
		ef++;

	//cout<<"Cost is "<<ef*x.price<<endl;
	return ef*x.price;	
}
int main()

{
	int n,m;

	cin>>n;
	vector<paper> wall;
	vector<rooms> des;
	rooms temp;
	paper te;

	for(int i=0;i<n;i++)
	{
		cin>>temp.length>>temp.width>>temp.height;
		des.push_back(temp);	
	}


	cin>>m;

	for(int i=0;i<m;i++)
	{
		cin>>te.length>>te.width>>te.price;

		wall.push_back(te);
	}


	lli cs,t;
	t=0;

	for(int i=0;i<n;i++)
	{
		cs=INF;
		for(int j=0;j<m;j++)
		{
			cs=min(cs,co(wall[j],des[i]));
			//cout<<"Cost of "<<j<<" wallpaper is "<<co(wall[j],des[i])<<endl;
		}
		t+=cs;
	}

	cout<<t<<endl;


	return 0;

}