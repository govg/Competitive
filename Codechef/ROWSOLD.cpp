#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

	ios::sync_with_stdio(false);

	int t;
	cin>>t;

	string s;

	int cursolds, curempts, totmoves, curpos;


	for(int i = 0; i < t; i++)
	{
		cin>>s;

		cursolds = 0;
		curempts = 0;
		totmoves = 0;
		curpos = s.length();

		//	Find first zero string from right,
		//	needed to move
		while(curpos >= 0 && s[curpos--] == '1' );

		if(curpos == -1)
			break;

		for(int j = curpos; j >=0; j--)
		{
			if(s[curpos] == '0')
			{
				curempts++;
				continue;
			}
			else
			{
				if(curempts)
				{
					cursolds++;
					totmoves = cursolds + curempts;
					curempts = 0;
				}


			}
		}
		cout<<totsum<<endl;
			
	}



	return 0;
}

