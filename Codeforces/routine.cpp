#include <iostream>

#define min(a,b) a<b?a:b
#define max(a,b) a>b?a:b
#define lli long long int

using namespace std;

lli getGCD(lli a, lli b)
{
	 if(b==0) 
	 	return a;
	 	
	 else 
	 	return getGCD(b,a%b);
 }
    


int main()
{
	lli a,b,c,d;

	cin>>a>>b>>c>>d;

	lli ra,rb,rc,rd;



	float x,y;
	x=(float)a/c;
	y=(float)b/d;

	if(x>y)
	{
		
		
			ra=a*d;
			rb=b*d;
			rc=c*b;
			rd=d*b;

		

	}

	else
	{
			ra=a*c;
			rb=b*c;
			rc=c*a;
			rd=d*a;

	}

	lli e,ar;
	
	e=(ra*rb)-(rc*rd);
	ar=ra*rb;

	//cout<<e<<" "<<ar<<endl;

	lli m=getGCD(e,ar);

	e=e/m;
	ar=ar/m;

	cout<<e<<"/"<<ar;

	return 0;

}