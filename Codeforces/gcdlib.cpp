#include <iostream>

#define min(a,b) a<b?a:b
#define max(a,b) a>b?a:b
#define lli long long int

using namespace std;

lli getGCD(int a, int b)
{

    if(a > b)
    {
        if(a % b == 0)
        {
            return b;
        }
        
        else
        {
            
            b = a % b;
        	return getGCD(a, b);
        	
        }
    }
    else
    {
        if(b % a == 0)
        {
            return a;
        }
        else
        {
            a = b % a;
            return getGCD(a, b);
        }
    }
}
int main()
{
	
	cout<<getGCD(5,100);

}