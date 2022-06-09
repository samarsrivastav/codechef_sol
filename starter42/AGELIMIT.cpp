#include <iostream>
using namespace std;
int main(){
int t;
cin>>t;
for (int i = 1; i <= t; i++)
{
    int x,y,a;
    cin>>x>>y>>a;
    if(a>=x&&a<y){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }



}
    return 0;
}