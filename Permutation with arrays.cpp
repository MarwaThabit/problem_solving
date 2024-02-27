
#include <iostream>
using namespace std;
int main() {
   int q,min,index,min2,index2;
   cin>>q;
   int n[q],n2[q];
   for(int i=0;i<q;i++){
       cin>>n[i];
   } 
    for(int i=0;i<q;i++){
       cin>>n2[i];
   }  
    for(int i=0;i<q;i++){
       min=n[i];
       index=i;
       min2=n2[i];
       index2=i;
       for(int j=i+1;j<q;j++){
           if(n[j]<n[index]){
               index=j;
               min=n[index];
           }
           if(n2[j]<n2[index2]){
               index2=j;
               min2=n2[index2];
           }
       }
       int temp=n[i];
       n[i]=min;
       n[index]=temp;
       int temp2=n2[i];
       n2[i]=min2;
       n2[index2]=temp2;
   }
   bool flag=true;
   for(int j=0;j<q;j++){
       if(n[j]!=n2[j]){
           flag=false;
       }
         
   }
   if(flag){
       cout<<"yes";
   }else{
       cout<<"no";
   }
 
   
    return 0;
}
