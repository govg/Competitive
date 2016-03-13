/* 
ID: govind.2
PROG:friday
LANG: C++
*/

//#include<iostream>
#include<fstream>
#include<string>

#define fr(a,b) for(int i=a;i<b;i++)

using namespace std;


int month[]={31,28,31,30,31,30,31,31,30,31,30,31};


int main()
{
	ofstream cout ("friday.out");
	ifstream cin ("friday.in");
	int day[7];

	char days[][4]={"sat","sun","mon","tue","wed","thu","fri"};

	fr(0,7)
	day[i]=0;

	int target,toadd;
	int leap=0;
	int year=1900;

	toadd=0;

	day[0]=1;
	cin>>target;

	fr(0,target)
	{	

		if (year%400==0)
			leap=1;
		else 
			leap=0;

		if((year%4==0)&&(year%100))
			leap=1;
		
		//cout<<"Year "<<year<<" "<<leap<<endl;
		for(int j=0;j<12;j++)
			{
				if(!(i+j))
					continue;

				if(j!=2)
					toadd+=month[(j+11)%12];
				else
					toadd+=month[(j+11)%12]+leap;

				//cout<<"Month "<<((j+11)%12)<<endl;

				toadd%=7;
				day[toadd]++;
				//cout<<"Day "<<days[toadd]<<endl;

			}

			year++;

	}


	cout<<day[0];
	fr(1,7)
	cout<<" "<<day[i];
	cout<<endl;


	return 0;

}
