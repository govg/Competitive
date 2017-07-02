#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main()
{

	unsigned int n,m,k,a,b;

	cin>>n>>m>>k;
	vector<int> holes;
	holes.resize(n+1);

	fill(holes.begin(), holes.end(), 0);

	//map<int, int> holes;

	for(int i = 0; i < m; i++)
	{
		scanf("%d", &a);
		holes[a] = 1;
	}

	int ipos = 1;
	int fpos, temp;
	bool flag = false;

	if(holes[ipos])
	{
		fpos = ipos;
		flag = true;
	}

	for(int i = 0; i < k; i++)
	{
		
		scanf("%d %d", &a, &b);

		if(ipos == a )
		{
			ipos = b;
		}
		else if(ipos == b)
		{
			ipos = a;
		}

		if(!flag && holes[ipos])
		{
			fpos = ipos;
			flag = true;
		}

	}

	if(!flag)
		cout<<ipos<<endl;
	else
		cout<<fpos<<endl;

	return 0;
}



