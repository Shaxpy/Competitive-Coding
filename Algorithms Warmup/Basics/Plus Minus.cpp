#include <bits/stdc++.h>

using namespace std;


#include <bits/stdc++.h>

#include <vector>

#include <iostream>

using namespace std;
int main()
{
int n=0;
int a[100];
    cin>>n;


for (int i=0;i<n;i++)
      {  cin>>a[i];
}
float zero=0,pos=0,neg=0;
//int ans=diff(n,arr);
for (int i=0;i<n;i++)
{
if (a[i]==0)
zero+=1;
else if (a[i]>0)
pos+=1;
else
neg+=1;
}
zero=zero/n;
pos=pos/n;
neg=neg/n;
cout<<pos<<endl<<neg<<endl<<zero<<endl;
return 0;
}
