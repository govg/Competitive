#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#define MAX 100008
#define MOD 1009
#define lli long long int
#define maximum(x,y) x>y?x:y

using namespace std;

int search(int * arr,int * max,int length,int index)
{	
	int ans=0;
	for(int i=length;i>=0;i--)
	{
		if(arr[max[i]]<arr[index])
			return i;
			
	}
	return 0;
}
int main()
{
	int n;int arr[MAX];
	int length=0;int pre[MAX]={0};int max[MAX]={0};
	scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}

	int j=0;
	for(int i=1;i<=n;i++)
	{
		j=search(arr,max,length,i);
		pre[i]=max[j];
		if(j==length||arr[i]<arr[max[j+1]])
		{
			max[j+1]=i;
			length=maximum(length,j+1);

		}
			
	}
	cout<<length<<endl;
	return 0;
}
