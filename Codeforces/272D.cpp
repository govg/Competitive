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
#include <map>
//Inline Functions
#define max(a,b) a>b?a:b
#define min(a,b) a>b?b:a
#define sq(a) a*a

//Limits
#define maxdp 100008

//Data Types
#define lli long long int

using namespace std;
int m;
lli combination(int a,int b)
{
	lli total;
	total=a;

	for(int i=1;i<b;i++)
	{
		total*=a-i;
		total/=i+1;
		
		total%=m;
		
	}

	return total;
	
}
struct points
{
	lli x,y;
};
struct comp{
bool operator()(points a, points b)
{
	if(a.x<b.x)
		return true;

	else if(a.x==b.x)
	{
		if(a.y<b.y)
			return true;
		else
			return false;
	} 
	else
		return false;
}
} myobject;
long long fact(int n)
{
	long long ans = 1;
	for (int i=1;i<=n;i++)
	{
		ans *= i;
	}
	return ans;
}


int main()
{
	int n;
	vector<points> a;

	points temp;

	cin>>n;

	lli t;

	for(int i=0;i<(n);i++)
	{
		cin>>temp.x;
		temp.y=i+1;

		a.push_back(temp);

	}
		for(int i=0;i<(n);i++)
	{
		cin>>temp.x;
		temp.y=i+1;

		a.push_back(temp);

	}
	
	cin >> m;
	sort(a.begin(), a.end(), myobject);

	long long ans=1;
	for(int i=0;i<(2*n);)
	{
		points current = a[i];
		map<points,int,comp> occurence;
		while(a[i].x == current.x)
		{
			occurence[a[i]]++;
			i++;
		}
		int denom=0;
		long long bigdenom=1;
		int numer=0;
		long long bignumer=1;
		for(map<points,int,comp>::iterator j=occurence.begin(); j!= occurence.end();j++)
		{
			denom = j->second;

			numer += denom;
			ans*=combination(numer,denom);
			ans%=m;
			//bigdenom *= fact(denom);
			
			//cout << j->first.x << " " << j->first.y << "\t" << j->second << endl;
		}
		//bignumer = fact(numer);
		//cout << bignumer << " div by " << bigdenom << endl;
		//ans = (ans * ((bignumer/bigdenom)%m))%m;
	}
	cout << ans<<endl;
	return 0;
}
