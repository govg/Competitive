/*
Name: 		Govind Gopakumar
Program:	Graham Scan/ Convex Hull
Date:		06092013
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
#define sq(a) a*a

//Data Types
#define lli long long int

//Limits
#define maxp 1E+37

using namespace std;


struct xy
{
	int x,y;
	double r,a;

	void comp()
	{
		r=sq(x)+sq(y);
		if(x==0&&y==0)
			a=0;
		else
		{
			if(x==0)
				a=maxp;
			else
				a=(double)y/x;
		}
	}	
};


int check(xy i, xy j, xy k)
{
	xy v1,v2;

	v1.x=j.x-i.x;
	v1.y=j.y-i.y;

	v2.y=k.y-j.y;
	v2.y=k.y-j.y;
	int product;

	product=(v1.x*v2.y)-(v1.y*v2.x);

	if(product)
	{
		if(product>0)
			return 1;
		else
			return -1;
	}
	else
		return 0;

}

bool compare(const xy &i, const xy &j)
{
	if(i.a==j.a)
		return j.r>i.r;
	else
		return i.a<j.a;

}



int main()
{	
	vector<xy> input;
	xy inp;

	int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>inp.x>>inp.y;
		inp.comp();
		input.push_back(inp);
	}

	cout<<endl;

	/*for(int i=0;i<n;i++)
	{
		cout<<input[i].x<<" "<<input[i].y<<endl;
	}
	*/
	sort(input.begin(), input.end(),compare);
	
	cout<<endl;
	/*
	for(int i=0;i<n;i++)
	{
		cout<<input[i].x<<" "<<input[i].y<<endl;
	}
	*/
	
	vector<xy> hull;
	int def;
	int j;

	hull.push_back(input[0]);

	for(int i=0,j=1;j<n;)
	{
		if(check(hull[i%n],input[j%n],input[(j+1)%n])>=0)
		{
			hull.push_back(input[j]);
			j++;
			i++;
		}
		else
		{
			j++;
		}
	}

	cout<<endl;

	for(int i=0;i<hull.size();i++)
	{
		cout<<hull[i].x<<" "<<hull[i].y<<endl;
	}
	

	return 0;
}
 


