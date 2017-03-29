#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n;
    long long unsigned int inp,sum;
    
    cin>>n;
    sum = 0; 
    for(int i = 0; i <n; i++)
    {
        cin>>inp;
        sum+=inp;
    }
    
    cout<<sum;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
