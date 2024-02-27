#include <iostream>
using namespace std;
void print(int arr[],int arr2[],int n){
      for(int i=0;i<n;i++){
          cout<<arr2[i]<<" ";
      }for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
      }
      cout<<endl;
}
int main() {
   int n;
   cin>>n;
   int arr[n],arr2[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
    for(int i=0;i<n;i++){
       cin>>arr2[i];
   }
   print(arr,arr2,n);
 
    return 0;
}
