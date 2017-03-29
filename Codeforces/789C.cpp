#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	
	int n;

	cin>>n;

	vector<int> a, cumsumo,cumsume;


	a.resize(n);
	cumsumo.resize(n);
	cumsume.resize(n);

	for(int i = 0; i < n; i++)
		cin>>a[i];

	for(int i = 0; i < n-1; i++)
	{
		cumsumo[i] = pow(-1, i)*abs(a[i] - a[i+1]);
		cumsume[i] = pow(-1, i+1)*abs(a[i] - a[i+1]);
	}

	long long  int maxtoto, maxcuro;

	maxtoto = cumsumo[0];
	maxcuro = cumsumo[0];
	for(int i = 1; i < n-1; i++)
	{
		if(cumsumo[i] < maxcuro + cumsumo[i])
			maxcuro = maxcuro + cumsumo[i];
		else
			maxcuro = cumsumo[i];
		
		if(maxtoto < maxcuro)
			maxtoto = maxcuro;
	}

	long long  int maxtote, maxcure;

	maxtote = cumsume[1];
	maxcure = cumsume[1];

	for(int i = 2; i < n-1; i++)
	{
		if(cumsume[i] < maxcure + cumsume[i])
			maxcure = maxcure + cumsume[i];
		else
			maxcure = cumsume[i];
		
		if(maxtote < maxcure)
			maxtote = maxcure;
	}


	if(maxtote > maxtoto)
		cout<<maxtote<<endl;
	else
		cout<<maxtoto<<endl;

	return 0;

}

