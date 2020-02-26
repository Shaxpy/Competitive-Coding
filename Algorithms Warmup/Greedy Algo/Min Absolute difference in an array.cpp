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
    int arr[10];
    int n=0,d=INT_MAX;
    cin >> n;

for (int i=0;i<n;++i)
    {   cin>>arr[i];
        sort(arr,arr+n);
        }

for (int i=1;i<n;++i)
    {   d=std::min(d,abs(arr[i] - arr[i-1]));
    }
    cout<<abs(d);
    return 0;
}
