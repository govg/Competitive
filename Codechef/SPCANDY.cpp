/* 
ID: govg
PROG:SPCANDY
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
	lli n,k,t;

	cin>>t;

	fr(0,t)
	{
		cin>>n>>k;
		if(n)
			{
				if(k)
				{
					cout<<n/k<<" "<<n%k<<endl;
				}
				else
				{
					cout<<0<<" "<<n<<endl;
				}
			}
		else
		{
			cout<<0<<" "<<0<<endl;
		}
	}


	return 0;

}
