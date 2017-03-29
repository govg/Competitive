#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int a[3],b[3];
    
    for(int i = 0; i<3; i++)
        cin>>a[i];
    
    for(int i = 0; i<3; i++)
        cin>>b[i];
    
    int as,bs;
    
    as = 0;
    bs= 0;
   
    for(int i =0; i<3; i++)
    {
        if(a[i] > b[i])
            as++;
        if(a[i] < b[i])
            bs++;
    }
    
    cout<<as<<" "<<bs;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
