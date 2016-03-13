#include<bits/stdc++.h>


using namespace std;

string a,b;
string seqs[100][100];

string LCS(int i, int j)
{
	if(i < 0 || j < 0)
		return "";

	if(!seqs[i][j].empty())
		return seqs[i][j];

	string e,l,r,t;

	if(a[i] == b[j])
		e = a[i];
	
	e = LCS(i-1,j-1) + e;

	l = LCS(i-1,j);
	r = LCS(i,j-1);

	if(l.length() > r.length())
		t = l;
	else
		t = r;

	if(e.length() > t.length())
		seqs[i][j] = e;
	else
		seqs[i][j] = t;


	return seqs[i][j];
}





void solve()
{
	string c,d;

	c = LCS(a.length()-1,b.length()-1);	


	int i,j,k;
	i = j = k = 0;


	while(k < c.length())
	{
		if(a[i] != c[k])
		{	
			d +=a[i];
			i++;
		}
		if(b[j] != c[k])
		{
			d +=b[j];
			j++;
		}
		if((a[i] == c[k]) && (b[j] == c[k]))
		{
			d +=c[k];
			k++;
			i++;
			j++;
		}
	}

	while(i < a.length())
		d +=a[i++];
	while(j < b.length())
		d +=b[j++];

	cout<<d;



	return;
}

int main()
{

	
	cin>>a>>b;
	solve();

	return 0;
}

