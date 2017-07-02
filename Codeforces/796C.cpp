#include<iostream>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;

int main()
{

	ios::sync_with_stdio(false);
	int n, u, v;
	cin>>n;

	vector<long long int> strs;

	strs.resize(n);

	for(int i = 0; i < n; i++)
		cin>>strs[i];

	for(int i = 0; i < n-1; i++)
		cin>>u>>v;

	int cmax, count;

	count = 1;
	cmax = strs[0];

	for(int i = 1; i < n; i++)
	{
		if( strs[i] == cmax)
			count++;

		if(strs[i] > cmax)
		{
			cmax = strs[i];
			count = 1;
		}
	}

	if(cmax <= 0)
		cout<<0;
	else
	{
		if(count > 1)
			cout<<cmax+1;
		else
			cout<<cmax;
	}

/*
	if(strs[n-1] == strs[n-2])
		cout<<strs[n-1]+1;
	else
		cout<<strs[n-1];
*/

	return 0;
}



