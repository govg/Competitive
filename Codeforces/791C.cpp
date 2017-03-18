#include<iostream>

using namespace std;

int main()
{
	int n,k;
	string input;

	vector<bool> flags;

	cin>>n>>k;

	for(int i = 0; i < (n-k)+1; i++)
	{
		cin>>input;
		if(input == "YES")
			flags.push_back(true);
		else
			flags.push_back(false);
	}

	vector<int> names;
	names.resize(flags.size());
	int fpos,k1;
	for(int i = 0; i < (n-k)+1; i++)
	{
		if(flags[i])
		{
			fpos = i;
			for(int j = fpos; j >=0 && !flags[j]; j--)
			{
				k1 = k;
				names[j] = k1;
				if(k1 != 1)
					k1--;
			}
		}
	}

	
	return 0;
}



