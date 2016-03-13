#include<iostream>

using namespace std;

int main()
{
	int t,n,m,k;

	cin>>t;

	for(int i=0;i<t;i++)
	{
		cin>>n>>m>>k;
		if((n-1)&&(m-1))
		{
			if(k%2)
				cout<<(k/2)+1;
			else
				cout<<k/2;
		}
		else
			cout<<k;
		

	}
	
	return 0;

}