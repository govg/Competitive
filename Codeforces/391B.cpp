#include<iostream>
#include<string>
#define max(a,b) (a>b)?(a):(b);
using namespace std;


int main()
{
	string word;

	cin>>word;

	int alp[26];
	
	char cur;
	int count,curr;
	
	count=0;
	curr=0;
	int index;

	for(int i=0;i<word.size();i++)
	{
		cur=word[i];
		curr=0;	
		index=i;

		for(int ii=i;ii<word.size();ii++)
		{
			if(word[ii]==cur)
			{
				if(((ii-index)==1) ||(!( (ii-index)%2)))
				{
					curr++;
					index=ii;
				}
			}
		}
		
		count=max(count,curr);

	}
		

	cout<<count<<endl;



	return 0;
}


