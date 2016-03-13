#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool comp(int a, int b)
{
	return a>b;
}

void solve()
{
	int n,m,k;
	int points;

	points=0;


	cin>>n>>m>>k;

	int A[n],B[n][m],C[n][m];
	vector<int> costs;

	for(int i=0;i<n;i++)
		cin>>A[i];

	for(int i=0;i<n;i++)
	{
		for(int ii=0;ii<m;ii++)
			cin>>B[i][ii];
	}

/*	for(int i=0;i<n;i++)
	{
		for(int ii=0;ii<m;ii++)
			cout<<B[i][ii]<<"\t";

		cout<<endl;
	}
*/
	for(int i=0;i<n;i++)
	{
		for(int ii=0;ii<m;ii++)
			cin>>C[i][ii];
	}

	for(int i=0;i<n;i++)
	{
		points+=B[i][A[i]-1];
		B[i][A[i]]=0;
		C[i][A[i]]=0;
	}

//	cout<<points<<endl;

	for(int i=0;i<n;i++)
	{
		for(int ii=0;ii<m;ii++)
			costs.push_back(B[i][ii]-C[i][ii]);
	}

	sort(costs.begin(),costs.end(),comp);

	for(int i=0;(k)&&(i<costs.size());i++)
	{
		if(costs[i]<=0)
		{
			break;	
		}
		points+=costs[i];
		k--;
	}

	cout<<points<<endl;

	return;
}

int main()
{

	int t;
	
	cin>>t;

	while(t--)
		solve();
	return 0;
}

