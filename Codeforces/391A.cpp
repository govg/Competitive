#include<iostream>
#include<string>


using namespace std;


int main()
{

	string word;

	cin>>word;

	int cur,fin;
	char current;

	current=word[0];
	int count=0;

	for(int i=0;i<word.size();)
	{
		current=word[i];
		cur=i;
		while(word[i]==current && i<word.size())
			i++;
		fin=i;

		count+=(((fin-cur)%2)?0:1);

	}


	cout<<count<<endl;

	return 0;
}

