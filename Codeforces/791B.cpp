#include<iostream>
#include<vector>


using namespace std;

int main()
{

	int n,m,e1,e2;
	bool flag;

	vector<vector<int> > adjlist;

	cin>>n>>m;

	flag = true;
	adjlist.resize(n);

	for(int i=0; i<m; i++)
	{
		cin>>e1>>e2;
		e1--;
		e2--;
		adjlist[e1].push_back(e2);
		adjlist[e2].push_back(e1);
	}

	vector<bool> visited;
	visited.resize(n);

	for(int i=0; i<n; i++)
		visited[i] = false;

	for(int i=0; i<n && flag; i++)
	{
		visited[i] = true;

		for(int j=0; j<adjlist[i].size(); j++)
			visited[adjlist[i][j]] = true;

		for(int j=0; j<adjlist[i].size() && flag; j++)
		{
			e1 = adjlist[i][j];
			for(int k=0; k<adjlist[e1].size() && flag;k++)
			{
				e2 = adjlist[e1][k];

				if(visited[e2] == false)
					flag = false;
			}
		}

		for(int j=0; j<adjlist[i].size(); j++)
			visited[adjlist[i][j]] = false;
		visited[i] = false;

	}

	if(flag)
		cout<<"YES";
	else
		cout<<"NO";
			
	return 0;
}

