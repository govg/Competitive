#include<iostream>
#include<cstdlib>
#include<cstring>

#define lli long long int

using namespace std;

int main()
{
	lli n;
	int flag1,flag4;
	flag1=flag4=0;

	cin>>n;

	if(n)
	{
	for(int i=0;n;i++)
	{
		if(n%10!=4)
			if(n%10!=1)
			{
				flag1=-1;
				break;
			}

		if(n%10==4)
		flag4++;

		if(n%10==1)
		{
			if(flag4>2)
			{
				flag1=-1;
				break;
			}
			else
			{
				flag4=0;
			}

		}

		n=n/10;

	}

	if((flag1+1)&&(!flag4))
	{
		cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;
	}
	else
		cout<<"NO"<<endl;


	return 0;

}