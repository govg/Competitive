#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int s,t,a,b,m,n,ac,oc, inp;
    
    cin>>s>>t>>a>>b>>m>>n;
    
    ac = oc = 0;
    
    for(int i = 0; i < m; i++)
    {
        cin>>inp;
        
        inp += a;
        
        if(inp >= s && inp <= t)
            ac++;
    }
    
    for(int i = 0; i < n; i++)
    {
        cin>>inp;
        
        inp += b;
        
        if(inp >= s && inp <= t)
            oc++;
    }
    
    cout<<ac<<endl;
    cout<<oc<<endl;
    return 0;
}
