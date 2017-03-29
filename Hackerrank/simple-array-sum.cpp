#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,t;
    vector<int> arr;
    
    cin>>n;
    
    for(int i =0 ; i < n; i++)
    {
        cin>>t;
        arr.push_back(t);
    }
    
    t = 0;
    
    for(int i =0 ; i < n; i++)
        t+=arr[i];
    
    cout<<t;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
