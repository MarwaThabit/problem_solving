#include <iostream>
using namespace std;
void shift(int arr[],int n){
      int c=0;
      for(int i=0;i<n;i++){
          if(arr[i]==0){
              c++;
          }else{
             cout<<arr[i]<<" ";
          }
      }for(int i=0;i<c;i++){
          cout<<0<<" ";
      }
      cout<<endl;
}
int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
 
   shift(arr,n);
 
    return 0;
}
