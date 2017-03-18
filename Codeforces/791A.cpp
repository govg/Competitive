#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	
	int a,b;
	float sratio, p;

	cin>>a>>b;
	sratio = (float)b/a;
	p = log(sratio)/log(1.5);

	cout<<(int)p + 1;


	return 0;
}

