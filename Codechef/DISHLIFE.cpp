#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

	int t;
	bool needall, skipisl, sad;


	cin>>t;

	int n,k,p;
	vector<vector<int>> ings;
	vector<int> tots;

	for(int i = 0; i < t; i++)
	{
		cin>>n>>k;

		ings.resize(n);
		tots.resize(k);
		fill(tots.begin(), tots.end(), 0);

		for(int j = 0; j < n; j++)
		{
			cin>>p;
			ings[j].resize(p);

			for(int k = 0; k < ings[j].size(); k++)
			{
				cin>>ings[j][k];
				tots[ings[j][k]-1]++;
			}
		}

		needall = true;
		sad = false;

		for(int j = 0; j < tots.size(); j++)
		{
			if(tots[j] == 0)
				sad = true;
		}

		if(sad)
		{
			cout<<"sad"<<endl;
			continue;
		}

		for(int j = 0; j < ings.size(); j++)
		{
			//	Assume he can skip this island
			skipisl = false;
			for(int k = 0; k < ings[j].size(); k++)
			{
				//	He can't skip this isl
				if(tots[ings[j][k]-1] <= 1)
					skipisl = true;
			}
			needall = skipisl && needall;
		}


		if(!needall)
			cout<<"some"<<endl;
		else
			cout<<"all"<<endl;
	}


	return 0;
}

