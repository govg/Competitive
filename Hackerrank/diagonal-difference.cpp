#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,inp,sum;
    
   sum = 0;
   cin>>n; 
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
           cin>>inp;
            if(i == j)
                sum+=inp;
            if(i+j == n-1)
                sum-=inp;
        }
    }
    if(sum < 0)
        sum = -sum;
    
    cout<<sum;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
