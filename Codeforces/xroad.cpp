#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <cstdio>


using namespace std;

int main()
{
	int n,m;
	long long int tim=0;
	int cur=1;


	cin>>n>>m;

	int *tasks= (int*)malloc(m*sizeof(int));

	
	for (int i = 0; i <m ;i++)
	{
		scanf("%I64d",&tasks[i]);
	}

	for(int j=0;j<m;j++)
	{
		
		if(tasks[j]<cur)
		{
			tim+=(n-cur)+tasks[j];
		}
		else
		{
			tim+=tasks[j]-cur;
		}
		
		cur=tasks[j];

	}

	cout<<tim<<endl;

	

	return 0;

}