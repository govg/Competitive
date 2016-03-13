#include<iostream>

using namespace std;


int prime[5000];
int k=0;



//checks if prime, going through memotised list for divisors.
int is_prime(int m)
{	
	//initially add the number to list of primes
	k++;
	prime[k]=m;

	int g;
	for( g=0;g<=k;g++)
	{	
		if(!(m%prime[g]))
			break;
				
	}

	//if it terminated at given number, then it is a prime
	if(g==k)
	{
		//cout<<"Added "<<m<<" to primes\n";
		return 1;
	}
	
	//follows that a termination anywhere else means it's not a prime
	else
	{	
		//decrement prime counter, hence removing number from list
		k--;
		return 0;

	}
	

}

//returns the number of factors by checking prime's list consecutively.
int no_fact(int j)
{
	int no=0;

	//check in list

	for(int i=0;i<=k;i++)
	{
		if(!(j%prime[i]))
		{
			no++;
		}
	}

	int check;

	check=prime[k];

	//check terminated, assume value of last prime, check all numbers.

	
	for(;check<=j;check++)
	{
		if(is_prime(check))
		{
			if(!(j%check))
				no++;
				
		}
	}
	
	return no;

}



int main()
{
	int t,a,b,k,sum=0;
	
	prime[0]=2;

	cin>>t;

	for(int i=0;i<t;i++)
	{
		cin>>a>>b>>k;

		for(int j=a;j<=b;j++)
		{
			if(no_fact(j)==k)
			{
				sum++;
			}


		}
		
		cout<<sum<<endl;

		sum=0;
	}


}




