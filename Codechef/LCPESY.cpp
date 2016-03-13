#include<iostream>
#include<string>
#include<cstring>

#define min(a,b) a>b?b:a
int isalpha(char a)
{
	if(a>='0' && a<='9')
		return 0;
	else
		return 1;
}


using namespace std;


void solve()
{
	string a,b;

	int A[26][3],B[26][3];



	memset(A,0,26*3*sizeof(int));
	memset(B,0,26*3*sizeof(int));


	cin>>a>>b;



	for(int i=0;i<a.size();i++)
	{
		if(isalpha(a[i]))
		{
			if(a[i]>='a' && a[i]<='z')
				A[a[i]-'a'][0]++;
			else
				A[a[i]-'A'][1]++;
		}
		else
			A[a[i]-'0'][2]++;
	}
	for(int i=0;i<b.size();i++)
	{
		if(isalpha(b[i]))
		{
			if(b[i]>='a' && b[i]<='z')
				B[b[i]-'a'][0]++;
			else
				B[b[i]-'A'][1]++;
		}
		else
			B[b[i]-'0'][2]++;
	}

	int count;
	count=0;

	for(int i=0;i<26;i++)
	{
		count+=min(A[i][0],B[i][0]);
		count+=min(A[i][1],B[i][1]);
		count+=min(A[i][2],B[i][2]);
	}
	
	cout<<count<<endl;
	
	
}
	
int main()
{

	
	int t;

	cin>>t;

	while(t--)
	{
		solve();
	}


	return 0;


}


