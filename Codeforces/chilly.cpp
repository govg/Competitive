#include <iostream>
#include <cstdlib>

#define lli long long int
#define MOD 210

using namespace std;


lli pow(lli n)
{
	if(n==1)
		return 1;

	return pow(n-1)*10%210;
	
}

int main()
{
	lli n;
	int k;

	
	cin>>n;
	
	int c=210;

	if(n<3)
	{
		cout<<-1;
		return 0;
	}

	if(n==3)
	{
		cout<<210;
		return 0;

	}

	k=210-pow(n);

	if(k>100)
		n--;
	
	for(int i=0;i<=(n-3);i++)
	{
		if(!i)
			cout<<1;
		else
			cout<<0;
		
	}

	

	cout<<k;


	return 0;

}