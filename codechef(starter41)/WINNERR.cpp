#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while (t--)
 {
     int pa,pb,qa,qb,a,b;
     cin>>pa>>pb>>qa>>qb;
     if (pa>=pb)
     {
         a=pa;
     }
     else{
      a=pb;
    }
    if(qa>=qb){
        b=qa;
    }
    else{

        b=qb;
    }
     if(a<b){
         cout<<"P"<<endl;
     }
     else if (a==b)
     {
         cout<<"TIE"<<endl;
     }
     
     else{
         cout<<"Q"<<endl;
     }


 }
 


    return 0;
}