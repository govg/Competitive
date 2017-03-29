#include <iostream>

using namespace std;

int main()
{

	long long unsigned int q,a,b;

	cin>>q;

	for(int i = 0; i<q; i++)
	{
		cin>>a>>b;
		if(a%2)
		{
			if(b == a+2 || b == a-2 || b == a+1)
				cout<<"YES";
			else
				cout<<"NO";
		}
		else
		{
			if(b == a-1 || b == a-2 || b == a+2)
				cout<<"YES";
			else
				cout<<"NO";
		}
		cout<<endl;
	}

	return 0;
}

