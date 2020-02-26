
#include <cmath>
#include <limits>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{  
    int arr[100];
    int n=0,d=INT_MAX;
    cin >> n;

for (int i=0;i<n;++i)
    {   cin>>arr[i];
        sort(arr,arr+n);
        }

for (int i=0;i<n;++i)
    {   d=std::min(d,abs(arr[i-1] - arr[i]));
        
    }
    cout<<abs(d);
    return 0;
}
