#include<iostream>
#include<cmath>
#include<vector>

#define lli long long int

using namespace std;

int check(lli a, lli b, lli q)
{
	double qk = (double)a/b;

	lli qabs = abs(q);
	lli qkabs = abs(qk);

	double pd = pow(qabs, (double)log(qkabs)/log(qabs));

	if(pd == qk)
		return 1;
	else
		return 0;
}

int main()
{

	lli b, q, l, m;
	int maxt;
	cin>>b>>q>>l>>m;

	vector<lli> a;

	a.resize(m);

	for(int i = 0; i < m; i++)
		cin>>a[i];

	//b = 0 - 0,inf
	if(b == 0)
	{
		for(int i = 0; i < m; i++)
		{
			if(a[i] == 0)
			{
				cout<<0<<endl;
				return 0;
			}
		}
		cout<<"inf"<<endl;
		return 0;
	}

	//b != 0, q = 0 - 0,1,inf
	if(q == 0)
	{
		maxt = 2;

		for(int i = 0; i < m; i++)
		{
			if(a[i] == 0)
			{
				maxt--;
				break;
			}
		}

		for(int i = 0; i < m; i++)
		{
			if(a[i] == b)
			{
				maxt--;
				break;
			}
		}

		if(abs(b) <= l)
			maxt = min(2,maxt);
		else
			maxt = 0;

		if(maxt == 2)
			cout<<"inf"<<endl;
		else
			cout<<maxt<<endl;

		return 0;
	}

	//b !=0, q = 1 - 0, inf
	if(q == 1)
	{
		maxt = 2;

		for(int i = 0; i < m; i++)
		{
			if(a[i] == b)
			{
				maxt = 0;
				break;
			}
		}

		if(abs(b) <= l)
			maxt = min(2,maxt);
		else
			maxt = 0;

		if(maxt == 2)
			cout<<"inf"<<endl;
		else
			cout<<maxt<<endl;

		return 0;
	}

	//b !=0, q = -1 - 0, inf
	if(q == -1)
	{
		maxt = 2;

		for(int i = 0; i < m; i++)
		{
			if(a[i] == b)
			{
				maxt--;
				break;
			}
		}

		for(int i = 0; i < m; i++)
		{
			if(a[i] == -b)
			{
				maxt--;
				break;
			}
		}

		if(abs(b) <= l)
			maxt = min(2,maxt);
		else
			maxt = 0;

		if(maxt>0)
			cout<<"inf"<<endl;
		else
			cout<<maxt<<endl;

		return 0;
	}

	int numt = (log(l) - log(abs(b)))/log(abs(q)) + 1;


	for(int i = 0; i < m; i++)
	{
		if(check(a[i], b, q) && abs(a[i]) <= l)
		{
			numt--;
		}
	}

	if(numt >0)
		cout<<numt<<endl;
	else
		cout<<0<<endl;

	return 0;

}
