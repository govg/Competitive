#include<iostream>
#include<vector>

using namespace std;

int main()
{

	int n,m,k;

	cin>>n>>m>>k;
	m--;

	vector<int> houses;

	houses.resize(n);

	for(int i = 0; i < n; i++)
		cin>>houses[i];

	int minl, minr, mind;

	minl = k;

	minr = k;

	mind = n;

	for(int i = 0; i < m; i++)
	{
		if(houses[i] != 0)
		{
			if(houses[i] <= k)
				mind = m - i;
		}
	}

	for(int i = m; i < n; i++)
	{
		if(houses[i] != 0)
		{
			if(houses[i] <= k)
				mind = min(i - m, mind);
		}
	}

	cout<<mind*10<<endl;

	
	return 0;
}



