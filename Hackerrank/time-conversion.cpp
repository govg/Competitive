#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string input;
    cin>>input;
    
    int hr;
    hr = (input[0] - '0') * 10 + (input[1]-'0');
    
    if(input[8] == 'P')
    {
        if(hr < 12)
            hr += 12;
    }
    else
    {
        if(hr == 12)
            hr = 0;
    }
    
    input[0] = hr/10 + '0';
    input[1] = hr%10 + '0';
    
    cout<<input.substr(0,8);
    return 0;
}
