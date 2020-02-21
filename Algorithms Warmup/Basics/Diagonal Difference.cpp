#include <bits/stdc++.h>

#include <vector>

#include <iostream>



using namespace std;

int diag(int n,int arr[100][100])
{  int x=0,y=0;
    for (int i=0;i<n;++i)
{       for (int j=0;j<n;++j)
            {
              if (i==j)
                {x+=arr[i][j];
                }
}}

    for (int i=0;i<n;++i)
{       for (int j=0;j<n;++j)
            {
                if ((i+j)==n)
               { y+=arr[i][j];
            }}
}
int b=(x-y);
return b;
}


int main()
{
int n=0;
int arr[100][100];
    cin>>n;


for (int i=0;i<n;i++)
{   for (int j=0;j<n;j++)
        cin>>arr[i][j];
}

int ans=diag(n,arr);
cout<<ans;
return 0;
}





