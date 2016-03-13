#include<iostream>
#include<vector>
#include<map>


using namespace std;
#define min(a,b) a>b?b:a

int main()
{
	int n,q;

	cin>>n;

	vector<int> array,queries;
	
	int t;

	for(int i=0;i<n;i++)
	{
		cin>>t;
		array.push_back(t);
	}

	cin>>q;

	for(int i=0;i<q;i++)
	{
		cin>>t;
		queries.push_back(t);
	}

	
	map<int,int> values;
	int miniarray[50][50];

	int mini;
	

	for(int i=0;i<n;i++)
	{
		
		mini=array[i];

		for(int ii=i;ii<n;ii++)
		{
			if(mini>array[ii])
				mini=array[ii];

			miniarray[i][ii]=mini;
			
			if(values[mini])
				values[mini]++;
			else
				values[mini]=1;
		}
	
	}


	for(int i=0;i<q;i++)
		cout<<values[queries[i]]<<endl;
		
			
	return 0;
}

