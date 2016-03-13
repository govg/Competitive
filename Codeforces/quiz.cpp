#include<iostream>
#include<cstdio>
#include<algorithm>


#define MOD 1000000009

long long int po(long long int a ,long long int exp)
{

	long long int ans = 1;
	while(exp>0)
	{
		if(exp%2==0)
			a=((long long int )a*a)%MOD;
		else
			{
			ans=((long long int )ans *a)%MOD;
			a=((long long int )a*a)%MOD;
			}
		exp/=2;
	}
	return ans%MOD;

}

int main()
{
	long long int n,m,k;
	scanf("%lld%lld%lld",&n,&m,&k);
	bool min=0;
	
	long long int point=0;
	
	if(m>(n/k)*(k-1)+n%k)
		min = true;
	
	long long int excess = m - ((n/k)*(k-1)+n%k);	
	
	if(min)
	{
		point = (k*(po(2,excess+1)%MOD-2))%MOD ;	
		point = (point + m - (excess*k)%MOD)%MOD;

	}
	
	else
	{
		point = m;
	}
	
	printf("%lld\n",point);


	return 0;
}