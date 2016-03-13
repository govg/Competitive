#include<iostream>
#include<vector>
#include<algorithm>
#define min(a,b) a>b?b:a
#define man(a,b) a>b?a:b

using namespace std;


struct apple
{
	long long int index;
	long long int type;
};

bool comp(apple a, apple b)
{


	if(a.type!=b.type)
		return a.type<b.type;
	else
		return a.index<b.index;
}



int main()
{
	
	long long int n,k;

	cin>>n>>k;


	apple t;

	vector<apple> T;


	for(int i=0;i<n;i++)
	{
		cin>>t.type;
		
		t.index=min(i+1,n-i);
		
					
		T.push_back(t);
	}

	sort(T.begin(),T.end(),comp);

	int i,j;

	i=0;
	j=n-1;

	long long int mintime;
	
	mintime=4*n;
	
	long long int half;

	half=(n/2) + (n%2);

	while((i<=half) && (j>=0))
	{
		if((T[i].type+T[j].type)>k)
		{
			j--;
			continue;
		}
		
		if((T[i].type+T[j].type)<k)
		{
			i++;
			continue;
		}

		if((T[i].type+T[j].type)==k)
		{
		
		//	cout<<"Match found at "<<T[i].type<<" "<<T[j].type<<endl;
				
		//	if(timed>(man(T[i].index,T[j].index)))
		//		timed=(man(T[i].index,T[j].index));

			mintime=(min(mintime,(man(T[i].index,T[j].index))));
	
		//	cout<<"Min without opt is "<<timed<<endl;

			while((T[j].type+T[i].type)==k)
				j--;
		
			if(j<0)
				continue;

			mintime=(min(mintime,(man(T[i].index,T[j+1].index))));

		//	cout<<"With opt is "<<mintime<<endl;

			while((T[i].type+T[j-1].type)==k)
				i++;
			
		}
		
	//	cout<<"\nMinimum so far is "<<timed<<endl;

	}



	if(mintime-(4*n))
		cout<<mintime<<endl;
	else
		cout<<-1<<endl;
	



	return 0;

}


