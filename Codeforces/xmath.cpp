#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string input;
	vector<char> v;

	cin>>input;

	for(int i=0;i<input.size();i++)
	{
		if(input[i]!='+')
			v.push_back(input[i]);

	}

	sort(v.begin(),v.end());

	for(int j=0;j<(v.size()-1);j++)
	{
		cout<<v[j];
		cout<<"+";

	}
	cout<<v[v.size()-1]<<endl;


	

	return 0;

}