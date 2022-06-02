#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while (t--)
 {
     int x,y,c=0;
     cin>>x>>y;
     if (x==y)
     {
        c=0;
     }
     
     while (x!=y)
     {
         //cout<<y-x<<endl;
         if(x<y){
          c+=(y-x);
          //x=y;
          break;
         }
         else if(y<x){
             c+=(x-y)/2;
            if ((x-y)%2==0)
            {
               //y=x;
               break;
            }
            else{
               y=x+1;
               c++;
               
            }
            
         }

         
     }
          cout<<c<<endl;

     }



 
 



return 0;
}