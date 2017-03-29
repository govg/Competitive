#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, most, least, mc, lc, inp;
    
    mc = lc = 0;
    
    cin>>n>>inp;
    
    least = inp;
    most = inp;
    
    for(int i = 1; i < n; i++)
    {
        cin>>inp;
        if( inp > most)
        {
            most = inp;
            mc++;
        }
        if( inp < least)
        {
            least = inp;
            lc++;
        }
    }
    
    cout<<mc<<" "<<lc;
    return 0;
}
