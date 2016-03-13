#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

string array;




void precompute(int * t)
{

	int i=1,j=0;

	for(i=1;i<array.size();i++)
	{
		j=i-1;

	while(1)
	{
		

		if(array[i]==array[t[j]])
		{
			t[i]=t[j]+1;
			break;

		}

		else
		{
			j=t[j]-1;
	
			if(j < 1)
				{
					t[i]=0;
					break;
				}
		}





	}
	if(t[i] == 0)
		if(array[i] == array[0]) t[i] = 1; 
	}

	

	for(i=0;i<array.size();i++)
		cout<<t[i]<<" ";
	cout<<endl;
}


int main()
{
	string haystack;


	
	cin>>array;
	
	cin>>haystack;
	int * t = (int *)malloc(sizeof(int)*array.size());
t[0]=0;


	precompute(t);


	int hpt,npt;

	hpt=npt=0;

	for(;hpt<haystack.size();)
	{
		while(haystack[hpt++]==array[npt++]);
		hpt--;
		npt--;

		if(npt==array.size())
			break;

		if(!(npt))
		
{		hpt++;
		}


		else
		{
			npt=t[npt-1];
		}



	}

	if(npt!=array.size())
		cout<<-1<<'\n';

	else
	{
		cout<<hpt<<'\n';
		for (npt=hpt - array.size();npt<hpt;npt++)
			cout << haystack[npt];
	}

return 0;


}