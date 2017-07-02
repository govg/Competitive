#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{

	int t, ctr;
	ctr = 0;

	map<string, int> ing;
	string in;

	cin>>t;

	for(int i = 0; i < t; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			cin>>in;
			ing[in]++;
		}

		for(int j = 0; j < 4; j++)
		{
			cin>>in;

			if(ing[in])
				ctr++;
		}

		ing.clear();

		if(ctr > 1)
			cout<<"similar"<<endl;
		else
			cout<<"dissimilar"<<endl;
		ctr = 0;
	}


	return 0;
}

