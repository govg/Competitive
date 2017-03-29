#include <iostream>

using namespace std;

int main()
{
	int n,ii,ij,ctr;

	ctr = 0;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		ij = 0;
		for(int j = 0; j < 3; j++)
		{
			cin>>ii;
			ij+=ii;
		}
		if(ij >=2)
			ctr++;
	}
	cout<<ctr;
	return 0;
}
