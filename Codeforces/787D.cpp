#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long unsigned int minn(long long unsigned int a, long long unsigned int b)
{
	if(a > b)
		return b;
	else
		return a;
}
int main()
{

	int n,q,s;
	cin>>n>>q>>s;

	long long unsigned int INTMAX = 10000000000;

	int t,u,v,l,r;
	long long unsigned int w;
	vector<int> t1, t2;
	vector<long long unsigned int> dists;
    int i, j, k;

	vector<vector<long long unsigned int> > graph;

	graph.resize(n);
	dists.resize(n);


	for(int i = 0; i < n; i++)
	{
		graph[i].resize(n);
		std::fill(graph[i].begin(),graph[i].end(),INTMAX);
	}

	//	Obtained graph after this
	for(int i = 0; i < q; i++)
	{
		cin>>t;

		if(t == 1)
			cin>>v>>u>>w;
		else
			cin>>v>>l>>r>>w;

		if(t == 1)
		{
			graph[v-1][u-1] = minn(graph[v-1][u-1],w);
		}
		
		if(t == 2)
		{
			for(int j = l; j <= r; j++)
				graph[v-1][j-1] = minn(graph[v-1][j-1],w);
		}
		if(t == 3)
		{
			for(int j = l; j <=r; j++)
				graph[j-1][v-1] = minn(graph[j-1][v-1],w);
		}
	}


	graph[s-1][s-1] = 0;

	for(int i = 0; i < n; i++)
		dists[i] = graph[s-1][i];

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			w = graph[i][j];
			if(dists[i] + w < dists[j])
				dists[j] = dists[i] + w;
		}
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			w = graph[i][j];
			if(dists[i] + w < dists[j])
				dists[j] = dists[i] + w;
		}
	}

	for(int i = 0; i < n; i++)
	{
		if(dists[i] == INTMAX)
			cout<<-1<<" ";
		else
			cout<<dists[i]<<" ";
	}

	return 0;
}
