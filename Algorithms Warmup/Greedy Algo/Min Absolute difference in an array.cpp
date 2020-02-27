#include <cmath>
#include <limits>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{  
    
    int n=0,d=INT_MAX;
    cin >> n;
vector <int> arr(n);
for (int i=0;i<n;++i)
    {   cin>>arr[i];
        
        }sort(arr.begin(), arr.end());

for (int i=1;i<arr.size();++i)
    {   d=std::min(d,abs(arr[i] - arr[i-1]));
    }
    cout<<abs(d)<<'\n';
    return 0;
}
