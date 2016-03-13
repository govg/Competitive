#include <iostream>

using namespace std;

int y1,y2,yw,xb,yb,r;

void reduce()
{
	y1=yw-y1;
	y2=yw-y2;
	yb=yw-yb;
}
int main()
{
	
	double x;


	cin>>y1>>y2>>yw>>xb>>yb>>r;

	reduce();

	x=xb*(((y1+y2)*0.5)/yb);

	cout<<x;




	return 0;

}