#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	int flip;
	int t;

	flip = 0;

	cin>>n;

	while(n--)
	{
		cin>>t;
		if(t%2 == 0)
			flip = (flip+1) %2;

		cout<<2-flip<<endl;
	}
	return 0;

}

