#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<long long int> arr;
    
    arr.resize(5);
    for(int i =0; i<5; i++)
        cin>>arr[i];
    
    sort(arr.begin(),arr.end());
    
    long long int sum;
    sum = 0;
    
    for(int i =0; i<5; i++)
        sum+=arr[i];
    
    cout<<sum-arr[4]<<" "<<sum-arr[0];
    
    return 0;
}
