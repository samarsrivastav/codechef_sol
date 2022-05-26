#include <iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  for (int i = 1; i <=t; i++)
  {
     int x,y,z{};
     cin>>x>>y>>z;
     cout<<z*(x-y)<<endl;
  }

    return 0;
}
