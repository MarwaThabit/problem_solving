
#include <iostream>
using namespace std;
void shift(int arr[],int n,int x){
 
    for(int i=n-x;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<(n-x);i++){
     cout<<arr[i]<<" ";
   }
    cout<<endl;
}
int main() {
   int n ,x;
   cin>>n>>x;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int t=x%n;
   shift(arr,n,t);
 
    return 0;
}
