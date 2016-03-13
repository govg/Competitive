#include "iostream"

using namespace std;



char array[10][10];
int a,b;

int check(int m, int n)
{

	int flag=2;

	for(int i=0;i<a;i++)
		{
			if(array[i][n]=='S')
			{
			flag--;
			break;
			}
		}

	for(int i=0;i<b;i++)
		{
			if(array[m][i]=='S')
			{
			flag--;
			break;

			}
		}

	return flag;

}

int main()
{   
	

	int ctr=0;

	cin>>a>>b;

	for(int i=0;i<a;i++)
	{
		cin>>array[i];
	}

	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			if(array[i][j]=='.')
			{
				if(check(i,j))
				ctr++;
			}

		}
	}

   	cout<<ctr;

    
    return 0;
}
