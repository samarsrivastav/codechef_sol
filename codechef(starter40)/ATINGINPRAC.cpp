#include <iostream>
#include <algorithm>
using namespace std;
bool increasing(int a[],int n){
    //sort(a,a+n);
for (int i = 0; i <n; i++)
{
  for (int j = i+1; j <n; j++)
  {
    if (a[j]<a[i])
     {
      return 0;
      break;
     }
    //  else if (a[j-1]<=a[j])
    //  {
    //     continue;
    //  }
     
  }
  
  
}
return 1;
}
int main(){
int t;

cin>>t;
for (int i = 1; i <=t; i++)
{  int arr[1000000]={};
    int n;
    cin>>n;
    for (int j = 0; j <n; j++)
    {
       cin>>arr[j];
    }
    
  bool ans=increasing(arr,n);
 if(ans){
     cout<<"yes"<<endl;
 }
 else{
     cout<<"no"<<endl;
 }


}




    return 0;
}