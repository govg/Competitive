#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, i, p, n, z;
    
    cin>>N;
    p = 0;
    n = 0;
    z = 0;
    
    for(int j = 0; j < N; j++)
    {
        cin>>i;
        
        if(i > 0)
            p++;
        else if(i < 0)
            n++;
        else
            z++;
    }
    
    cout<<(float)p/N<<endl;
    cout<<(float)n/N<<endl;
    cout<<(float)z/N<<endl;
    
    return 0;
}
