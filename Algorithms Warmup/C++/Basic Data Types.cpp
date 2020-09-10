#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
   int a;
   long b;
   char c;
   float d;
   double e;
   cin>>a>>b>>c>>d>>e;
   
   cout<<a;cout<<"\n";
   cout<<b;cout<<"\n";
   cout<<c;
   cout<<"\n";
   cout<<setprecision(20)<<d;
   cout<<"\n";
   cout<<setprecision(20)<<e;
    return 0;
}
