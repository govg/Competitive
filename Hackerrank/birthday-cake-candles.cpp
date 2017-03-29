#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, inp, max, ctr;
    
    cin>>n>>inp;
   
    max = inp;
    ctr = 1;
    for(int i = 1; i < n; i++)
    {
       cin>>inp;
        if(inp > max)
        {
            max = inp;
            ctr = 0;
        }
        if(inp == max)
            ctr++;
    }
    
    cout<<ctr;
    return 0;
}
