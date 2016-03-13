#include <iostream>


using namespace std;
#define lli	long long int
 

lli div(lli a,lli b)
{
     return b ? div(b, a % b) : a;    
}

void result()
{
              lli xs,ys,xd,yd;
              
              cin>>xs>>ys>>xd>>yd;
              if (xs<0)
              xs=-xs;

              if(xd<0)
              xd=-xd;

              if(ys<0)
              ys=-ys;

              if(yd<0)
              yd=-yd;


              lli sou=div(xs,ys);
              lli des=div(xd,yd);
              
              while(sou>0 && sou<des)
		            sou*=2;

              if(sou==des)
              	cout<<"YES"<<endl;
              else
              	cout<<"NO"<<endl;

 }      

int main()
{
    int num;
    
    cin>>num;
    
    while(num)
    {
    	//cout<<"Evaluating for the "<<num<<" time\n";
    	result();
    	num--;
    }


    
 return 0;
 
}
