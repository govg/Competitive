#include <iostream>
#include <cstdlib>

#define fr(a,b) for(int i=a;i<b;i++)

using namespace std;


int main()
{
	int n;
	int left,right,steps;

	left=right=steps=0;

	int m;

	cin>>n;

	fr(0,n)
	{
		cin>>m;

		left+=m;


		cin>>m;
		right+=m;


	}

	if(left>n/2)
		steps+=n-left;
	else
		steps+=left;

	if(right>n/2)
		steps+=n-right;
	else
		steps+=right;
	
	cout<<steps<<endl;


	return 0;

}