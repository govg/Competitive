#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int n,m,k,c;
	vector<int> unique;


	cin>>n>>m;
	unique.resize(n);

	//	0 - not visited
	//	1 - +ve present
	//	2 - -ev present
	//	3 - both present
	for(int i=0; i<n; i++)
		unique[i] = 0;


	bool flag, ovflag;

	ovflag = true;
	for(int i = 0; i < m; i++)
	{
		cin>>k;
		for(int j = 0; j < k; j++)
		{
			cin>>c;
			if(c>0)
			{
				c--;
				if(unique[c] == 0)
					unique[c] = 1;
				if(unique[c] == 2)
					unique[c] = 3;
				if(unique[c] == 1)
					unique[c] = 1;
			}
			else
			{
				c = -c;
				c--;
				if(unique[c] == 0)
					unique[c] = 2;
				if(unique[c] == 1)
					unique[c] = 3;
				if(unique[c] == 2)
					unique[c] = 2;
			}
		}
	
		flag = false;
		for(int j = 0; j < n; j++)
		{
			if(unique[j] == 3)
			{
				flag = true;
				break;
			}
		}

		for(int j=0; j<n; j++)
			unique[j] = 0;

		ovflag = flag && ovflag;

	}

	if(ovflag)
		cout<<"NO";
	else
		cout<<"YES";

	return 0;
}

