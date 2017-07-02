#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, n;
	vector<long long int> temples;
	vector<long long int> discs;
	vector<long long int> toleft, toright;
	vector<long long int> csleft, csright;

	cin>>t;

	for(int i = 0; i < t; i++)
	{
		cin>>n;
		temples.resize(n);

		for(int j = 0; j < n; j++)
			cin>>temples[j];

		discs.resize(n);

		int ld, rd;
		int maxd, idx;

		for(int j = 0; j < n; j++)
		{
			ld = temples[j] - (j+1);
			rd = temples[j] - (n-j);

			discs[j] = min(ld, rd);
		}

		maxd = discs[0];
		idx = 0;

		for(int j = 0; j < n; j++)
		{
			if(discs[j] > maxd)
			{
				maxd = discs[j];
				idx = j;
			}
		}

		int totsum = 0;
		int tempsum;

		for(int j = 0; j < maxd; j++)
		{
			//	Moves to reduce to sequence
			tempsum = temples[j] - j;

			if(tempsum > 0)
				totsum += tempsum;

			if(tempsum > maxd)
				totsum += maxd;
			else
				totsum += tempsum;
		}
			
		for(int j = maxd+1; j < n; j++)
		{
			tempsum = temples[j] - (n-j);

			
		}
			
	}

	return 0;
}
