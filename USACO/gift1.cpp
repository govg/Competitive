/*
NAME: govind.2
PROG: gift1	
LANG: C++
*/

//#include <iostream>
#include <fstream>
#include <string>


#define fr(a,b) for(int i=a;i<b;i++)


using namespace std;

struct giver {

	char name[15];
	int amount;
	int gift;

};



int num;
giver array[10];


int strc(char *a, char *b)
{
	int di;

	for(di=0;(a[di]==b[di])&&(a[di]!='\0');di++);

	if(a[di]=='\0')
		return 0;
	else
		return 1;
}

int reti(char *a)
{	
	int i;

	//cout<<"\nFinding "<<a<<endl;
	
	for(i=0;strc(a,array[i].name);i++);
		//cout<<"Found "<<array[i].name<<endl;

	return i;


}



int main()
{
	
	ifstream cin ("gift1.in");
	ofstream cout ("gift1.out");
	

	int creds,am,rem;
	char current[15],credit[15];

	cin>>num;

	fr(0,num)
	cin>>array[i].name;

	fr(0,num)
	array[i].amount=array[i].gift=0;

	fr(0,num)
	{	

		cin>>current;
		cin>>am;
		//cout<<current<<endl;
		array[(reti(current))].amount=am;
		//cout<<array[(reti(current))].amount<<endl;
		cin>>creds;
		
		if(creds)
		{	
			rem=am%creds;

			fr(0,creds)
			{
				cin>>credit;
				
				array[(reti(credit))].gift+=am/creds;
				//cout<<credit<<endl;
				//cout<<am/creds<<" ";
				//cout<<"\nCredited to "<<credit<<endl;
			}
			array[(reti(current))].gift+=rem;
			//cout<<rem<<endl;
			//disp();

		}
		
	}


	fr(0,num)
	cout<<array[i].name<<" "<<array[i].gift-array[i].amount<<endl;

	return 0;

}