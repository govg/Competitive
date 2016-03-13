#include<bits/stdc++.h>

#define MAX 1000000 
using namespace std;

int main()
{
	int t,m,n,w,j;
	

	cin>>t;

	while(t--)
	{
		cin>>n;
	
		m=0;
		
		for(int i=0;i<n;i++)
		{
			cin>>w;
			w+=i;
						
			if(w>=m)
			{
				m=w;
		//		cout<<m<<" "<<i<<endl;
			}
		
		}

		cout<<m<<endl;
	}
	return 0;
}
