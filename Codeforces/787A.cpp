#include <iostream>
#define lli unsigned long long int

using namespace std;

int main()
{

	lli a, b, c, d;

	cin>>a>>b>>c>>d;

	lli diff;

	diff = d-b;

	lli LIMIT = 100000000;
	long long int L = -1;
	lli R = diff;

	for(lli i = 0; i < LIMIT; i++)
	{

		if(R %a == 0)
		{
			L = R + b;
			break;
		}

		R =  R + c;
	}

	cout<<L;
	return 0;
}

