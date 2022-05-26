#include<iostream>
using namespace std;
int sum(int a[],int n){
    int c=0;
  for (int i = 0; i <n; i++)
  {
     c+=a[i];
  }
  return c;
}
int sum1(int a[],int n,int y){
    int count{};
    for (int i = 0; i < n; i++)
    {
       if (y<a[i])
       {
           count+=(a[i]-y);
       }
       else
        count+=0;
       
    }
    return count;
}
int main(){
 int t;
 cin>>t;
 for (int i = 1; i <=t; i++)
 { int arr[1000000]={};
     int n,x,y;
     cin>>n>>x>>y;
   for (int j = 0; j <n; j++)
   {
       cin>>arr[j];
   }
   int s1=sum1(arr,n,y);
   int s=sum(arr,n);
   if ((x+s1)>=(s))
   {
       cout<<"NO COUPON"<<endl;
   }
   else
   cout<<"COUPON"<<endl;
   




 }
 return 0;
}