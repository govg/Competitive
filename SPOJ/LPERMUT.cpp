#include<bits/stdc++.h>

#define MAX 100000

using namespace std;


int main()
{


	int n;
	vector<int> A;
	int N[MAX];

	memset(N,0,sizeof(int)*MAX);



	int t,m,l;

	cin>>n;

	while(n--)
	{
		cin>>t;
		A.push_back(t);
	}

	N[A[0]]++;
	m=A[0];
	
	for(int i=1,j=0;i<(n-1);)
	{
	
		if(m==(j+1-i))
			m=max(m,j+1-i);
		
		if(N[A[i+1]])
		{
			if(A[i+1]==A[j])
				j++;
			else
			{
				N[A[i+1]]++;
			}
		}
		else
		{
			N[A[i+1]]++;
		}
		
	}
	return 0;
}
