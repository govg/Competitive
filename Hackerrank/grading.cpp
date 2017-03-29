#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    
    int n, s;
    
    cin>>n;
    
    for(int i = 0; i < n; i++)
    {
        cin>>s;
        if(s < 38)
        {
            cout<<s<<endl;
            continue;
        }  
       
        if( s%5 > 2)
        {
            s += 5 - (s%5);
        }
        
        cout<<s<<endl;
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
