#include <bits/stdc++.h>
#include <vector>

using namespace std;


// Complete the minimumAbsoluteDifference function below.
int minAbs(vector<int> arr,int n) {
    int d=INT_MAX;
    for (int i=0;i<n;i++)
    {   for (int j=i+1;j<n;j++)
        {
            if(abs(arr[i]-arr[j]>d))
            d=abs(arr[i]-arr[j]);
        }
    return d;   
}}

int main()
{  
    vector <int> arr(100);
    int n;
    int splits;
    cin >> n;
  
    splits=minAbs(arr,n);
    cout<<abs(splits);
    return 0;
}
