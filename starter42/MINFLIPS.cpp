#include<iostream>
using namespace std;
int sum(int *arr,int n){
    int s=0;
    for (int i = 0; i < n; i++)
    {
        s+=arr[i];
    }
    return s;
}
int count(int *arr,int n){
    int c=0,one=0,minus=0;
     if(sum(arr,n)==0){
        return 0;
      }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1){
            one++;
        }
        else
        minus++;
    }
    if(one>minus){
    c=(one-minus)/2;
    }
    else{
        c=(minus-one)/2;
    }
    
    
    
    return c;
}
int main(){
    int t;
    cin>>t;
    for (int k = 1; k <=t; k++)
    {
        int arr[100000]={};
        int n;
        int ans;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
         ans=count(arr,n);
        if(n&1){
            ans=-1;
        }
       
       cout<<ans<<endl; 
       
       
        
    }
    return 0;
}