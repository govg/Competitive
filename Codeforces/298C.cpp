#include <iostream>
#include <cstdio>
#include <string>
#define MAX 1008

using namespace std;

int main()
{
	string input,output;
	int i_one=0,o_one=0;
	
	cin>>input>>output;
	int i;
	bool possi=false;
	
	int inp_size = input.size();
	int out_size = output.size();
	
	for(i=0;input[i];i++)
			if(input[i]-'1'==0)
				i_one++;
	
	for(i=0;output[i];i++)
			if(output[i]-'1'==0)
				o_one++;
	
	if(o_one<=i_one)
		possi = true;
	
	if(o_one>i_one)
		if(i_one%2==1 && o_one ==i_one + 1)
		possi = true;
		
	if(possi)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;


	return 0;
}