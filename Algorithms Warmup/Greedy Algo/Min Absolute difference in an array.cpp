#include <bits/stdc++.h>
#include <vector>
#include <iostream>

using namespace std;


int main()
{  
    int arr[100];
    int n,d=INT_MAX;
    cin >> n;
    
for (int i=0;i<n;i++)
    {   cin>>arr[i];
    sort(arr,arr+n);
        d=min(d,abs(arr[i-1] - arr[i]));
    }
    cout<<abs(d);
    return 0;
}
