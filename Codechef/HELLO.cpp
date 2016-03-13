/* 
ID: govg
PROG:HELLO
LANG: C++
*/

#include<iostream>
#include<fstream>
#include<string>

#define lli long long int

#define fr(a,b) for(int i=0;i<b;i++)
#define max(a,b) a>b?a:b

using namespace std;

int main()
{
	lli t,u,n,m,c,index;
	float d,r,best,cost;

	cin>>t;


	fr(0,t)
	{
		
		cin>>d>>u>>n;

		index=0;
		best=d*u;

		//cout<<"\nbase: "<<best<<endl;

		for(int j=1;j<=n;j++)
		{
			
			cin>>m>>r>>c;

			cost=((u*r*m)+c)/m;
			
			//cout<<"\ncost: "<<cost<<endl;
			
			if(best>cost)
			{
				index=j;
				best=cost;
			}

			//cout<<"\nso far: "<<index<<endl;

		}

		cout<<index<<endl;

	}




	return 0;

}
