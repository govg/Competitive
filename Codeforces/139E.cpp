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
#define maxdp 100008

//Data Types
#define lli long long int

using namespace std;

struct tr
{
	int cord;
	int height;
	int left;
	int right;
};

struct mush
{
	int cord;
	int power;

};

int main()
{

	int n,m;

	cin>>n>>m;

	vector<tr> trees;
	vector<mush> shrooms;
	tr t1;

	mush t2;

	for(int i=0;i<n;i++)
	{
		cin>>t1.cord>>t1.height>>t1.left>>t1.right;
		trees.push_back(t1);
	}

	for(int i=0;i<m;i++)
	{
		cin>>t2.cord>>t2.power;
		shrooms.push_back(t2);
	}