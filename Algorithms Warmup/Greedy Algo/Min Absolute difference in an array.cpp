#include <bits/stdc++.h>
#include <vector>
#include <iostream>

using namespace std;


// Complete the minimumAbsoluteDifference function below.
int minAbs(int arr[],int n) {
    sort(arr, arr+n); 
    int d=INT_MAX;
    for (int i=0;i<n;i++)
    {   if (arr[i+1] - arr[i] < d) 
          d = arr[i+1] - arr[i]; }
    return d;   
    }

int main()
{  
    int arr[100];
    int n;
    int splits;
    cin >> n;
    splits=minAbs(arr,n);
    cout<<abs(splits);
    return 0;
}
