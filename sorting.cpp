#include <iostream>
using namespace std;
int main() {
   int q,min,index;
   cin>>q;
   int n[q];
   for(int i=0;i<q;i++){
       cin>>n[i];
   }   
   for(int i=0;i<q;i++){
       min=n[i];
       index=i;
       for(int j=i+1;j<q;j++){
           if(n[j]<n[index]){
               index=j;
               min=n[index];
           }
       }
       int temp=n[i];
       n[i]=min;
       n[index]=temp;
   }
   
 
   for(int i=0;i<q;i++){
       cout<<n[i]<<" ";
   }
    return 0;
}
