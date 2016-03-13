#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#define lli long long int

using namespace std;

int main()
{
	int n;
	vector<lli> t;
	int x;
	lli num=0;


	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>x;
		t.push_back(x);
				
	}

	sort(t.begin(),t.end());

	for(int i=0;i<n;i++)
	{
		if(t[i]>(i+1))
			num+=t[i]-(i+1);
		else
			num+=i+1-t[i];

	}

	cout<<num<<endl;

	return 0;

}