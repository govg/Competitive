#include<bits/stdc++.h>


using namespace std;


int main()
{

	string word;

	cin>>word;

	int a[3];
	int count=0;
	memset(a,0,sizeof(int)*3);

	for(int i=0;i<word.size();i++)
	{
		if(word[i]!='|')
			count++;
		else
			a[count]++;
	}

	int left,right,diff;

	left=a[0]+a[1];
	right=a[2];

	if((left-right)%2)
	{
		cout<<"Impossible"<<endl;
		return 0;
	}
	if(fabs((left-right))>2)
	{
		cout<<"Impossible"<<endl;
		return 0;
	}
	else
	{
		if(left<right)
		{
			a[0]+=(right-left)/2;
			a[2]-=(right-left)/2;

			for(int i=0;i<3;i++)
			{
				for(int ii=0;ii<a[i];ii++)
				{
					cout<<'|';
				}

				if(i==0)
					cout<<'+';
				if(i==1)
					cout<<'=';
			}
		}
		else if(left>right)
		{

			a[2]+=((left-right)/2);
	
			diff=left-right;
			
			diff/=2;
			a[0]=(left-diff)-1;
			a[1]=1;

			for(int i=0;i<3;i++)
			{
				for(int ii=0;ii<a[i];ii++)
				{
					cout<<'|';
				}

				if(i==0)
					cout<<'+';
				if(i==1)
					cout<<'=';

			}
		}
		else
			cout<<word;
	}

	return 0;

}



