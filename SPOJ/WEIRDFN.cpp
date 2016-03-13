#include <iostream>
#include <cstdio>
#include <map>


using namespace std;

int main() 
{
	// your code goes here
	map <long long, int> count;
	string operation;
	char opcode[20];
	int n;
	int homo=0;
	scanf("%d", &n);
	long long newnum;
	
	for (int i=0;i<n;i++)
	{
		scanf("%s", opcode);
		scanf("%lld",&newnum);
		operation = string(opcode);
		if (operation == "insert")
		{
			if (count[newnum] == 0)
				count[newnum] = 1;
			else if (count[newnum] == 1)
			{
				count[newnum]++;
				homo++;
			}
			else count[newnum]++;
		}
		else
		{
			if (count[newnum] <= 1)
				count.erase(newnum);
			else if (count[newnum] == 2)
			{
				count[newnum]--;
				homo--;
			}
			else
				count[newnum]--;
		}
		
		if (count.size() <= 1 && homo < 1)
			printf("neither\n");
		else if (homo >= 1 && count.size() > 1)
			printf("both\n");
		else if (homo >= 1 && count.size() <= 1)
			printf("homo\n");
		else printf("hetero\n");
	}
	return 0;
}