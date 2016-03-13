#include <algorithm>
#include <set>
#include <string>
#include <cstring>
#include <cstdio>
#include <iostream>

using namespace std;

int findkthvow(string haystack, int k)
{
	set <char> vowels;
	int vowno=0;
	vowels.insert('a');
	vowels.insert('e');
	vowels.insert('i');
	vowels.insert('o');
	vowels.insert('u');
	int i;
	for (i = haystack.size()-1; i>=0; i--)
	{
		if (vowels.find(haystack[i]) != vowels.end())
			vowno++;
		if (vowno == k) break;
	}
	if (vowno == k) return i;
	else return -1;
}

bool matchafterk(string first, string second, int k, int mypos, int urpos, bool kthvowknown)
{
	if (!kthvowknown)
	{
		mypos = findkthvow(first,k);
		urpos = findkthvow(second,k);
	}
	if (mypos < 0 || urpos < 0) return false;
	if ( !first.compare( mypos, first.size(), second, urpos, second.size()))
		return true;
	else return false;
}

int main()
{

/*	cout << "Test cases\n";
	int t;
	cin >> t;
	for (int i=0;i<t;i++)
	{
		string first;
		string second;
		int k;
		cin >> first;
		cin >> second;
		cin >> k;
		if (matchafterk(first,second,k)) cout << "Matched\n";
		else cout << "Not really\n";
	}
*/
	int n,k;
	cin >> n;
	cin >> k;
	short univ=0;
	string quadrain[4];
	int pos[4];
	int i;
	for (i=0;i<n;i++)
	{
		bool aabb=0,abab=0,abba=0;
		for (int j=0;j<4;j++)
		{
			cin >> quadrain[j];
			pos[j] = findkthvow(quadrain[j], k);
			if (pos[j] < 0)
			{
				cout << "NO\n";
				return 0;
			}
		}

		if (matchafterk(quadrain[0],quadrain[1],k,pos[0],pos[1],1))
		{
			if (matchafterk(quadrain[2],quadrain[3],k,pos[2],pos[3],1))
				aabb = 1;
			else
			{
				cout << "NO\n";
				return 0;
			}
		}
		if (matchafterk(quadrain[0],quadrain[2],k,pos[0],pos[2],1))
		{
			if (aabb)			  
				abab = abba = 1;

			else if (matchafterk(quadrain[1],quadrain[3],k,pos[1],pos[3],1))
				abab = 1;
			else
			{
				cout << "NO\n";
				return 0;
			}
		}
		if (!abba)
			if (matchafterk(quadrain[0],quadrain[3],k,pos[0],pos[3],1))
			{
				if (matchafterk(quadrain[1],quadrain[2],k,pos[1],pos[2],1))
					abba = 1;
				else
				{
					cout << "NO\n";
					return 0;
				}
			}
		if (univ == 1 && !aabb)
		{
			cout << "NO\n";
			return 0;
		}
		else if (univ == 2 && !abab)
		{
			cout << "NO\n";
			return 0;
		}
		else if (univ == 2 && !abba)
		{
			cout << "NO\n";
			return 0;
		}
		else if (!univ)
		{
			if (aabb) univ = 1;
			else if (abab) univ = 2;
			else if (abba) univ = 3;
			if (aabb && abab) univ = 0;
		}
	}
	switch (univ)
	{
		case 0: cout << "aaaa\n";
			break;
		case 1: cout << "aabb" << endl;
			break;
		case 2: cout << "abab\n";
			break;
		case 3: cout << "abba" << endl;
			break;
		default: cout << "NO\n";
			break;
	}
	return 0;
}






