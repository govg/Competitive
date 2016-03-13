/* 
ID: govind.2
PROG: beads
LANG: C++
*/

//#include<iostream>
#include<fstream>
#include<string>

#define lli long long int

#define fr(a,b) for(int i=0;i<b;i++)
#define max(a,b) a>b?a:b

using namespace std;


char beads[350];
int length;


int check(int pos)
{
	int sum=0,ctr,ctn,flag=0;
	char curr1,curr2;

	//cout<<"Evaluating position "<<pos<<endl;

	curr1=beads[0];

	for(ctr=0;ctr<length;ctr++)
	{	
		if(beads[ctr]!=curr1)
			{
				flag++;
				curr1=beads[ctr];
			}
	}

	if(flag<4)
		return length;
	



	flag=2;

	for(ctr=pos;beads[ctr%length]=='w';ctr++);

	curr1=beads[ctr];
	

	for(ctn=ctr+1;beads[ctn%length]=='w';ctn++,sum++);

	//cout<<"Moved to position "<<ctn<<endl;

	curr2=beads[ctn%length];

	for(;flag;ctn++,sum++)
	{
		ctn=ctn%length;

		if ((beads[ctn]!=curr2)&&(beads[ctn]!='w'))
		{	
			flag=0;
			sum--;
		}
	
	
	}

	//cout<<"Number of "<<curr2<<" possible "<<sum<<endl;

	ctn=ctn%length;

	
	flag=2;

	for(;flag;ctr--,sum++)
	{
		ctr=ctr%length;

		if(ctr==ctn)
			break;	

		//cout<<"eval "<<beads[ctr]<<endl;		
		
		if ((beads[ctr]!=curr1)&&(beads[ctr]!='w'))
		{	
				flag=0;
				sum--;
		}

	
	}

	//cout<<"Total possible "<<sum<<endl;


	return sum;

}


int main()
{
	ofstream cout ("beads.out");
	ifstream cin ("beads.in");

	int max=0;

	cin>>length;

	cin>>beads;


	fr(0,length)
	{
		max=(max>check(i))?max:check(i);
		//cout<<"Check pos "<<i<<" "<<check(i)<<endl;
	}
	cout<<max<<endl;

	return 0;

}
