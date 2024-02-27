#include <iostream>
using namespace std;
int main() {
   int n,m,x;
   cin>>n>>m;
   int arr[n][m];
   bool flag=false;
   for(int r=0;r<n;r++){
       for(int c=0;c<m;c++){
           cin>>arr[r][c];
       }
   }
    cin>>x;
    for(int r=0;r<n;r++){
       for(int c=0;c<m;c++){
          if(x==arr[r][c]){
               flag=true;
           }
       }
    }
   if(flag){
       cout<<"will not take number\n";
   }else{
       cout<<"will take number\n";
   }
 
   
    return 0;
}
