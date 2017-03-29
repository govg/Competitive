#include<vector>
#include<algorithm>
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n,k;

	cin>>n>>k;

	vector<int> w;
	w.resize(n);

	for(int i = 0 ; i < n; i++)
		cin>>w[i];

	int ctr = 0;

	int flag = 0;
	
	for(int i = 0; i < n; i++)
	{
		ctr +=w[i]/k;
		w[i] = w[i] %k;

		if(w[i])
			ctr++;
	}

	ctr = ctr/2 + ctr%2;

	cout<<ctr;
		
	return 0;
}

