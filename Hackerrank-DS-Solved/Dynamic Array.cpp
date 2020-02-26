#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
int ans=0,q=0;

int n=0,y=0,x=0;
cin>>n;

int ch=0;
vector <int> list[n];
cin>>q;

for (int i=0;i<q;i++)

{ cin>>ch>>x>>y;
      int index=(x^ans)%n;
    if(ch==1){
    list[index].push_back(y);
    }

    else if(ch==2)
    {
    int newl=y%((int)list[index].size());
    ans=list[index][newl];
    cout<<ans<<endl;
    }
}

return 0;
}
