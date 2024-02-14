#include <iostream>
using namespace std;
int main() {
     int n;
     cin>>n;
     for(int j=2;j<=n;j++){
        bool flag=true;
        for(int i=2;i<j;i++){
         if(j%i==0 &&j!=i){
             flag=false;
             break;
           }
     
        }if(flag){
         cout<<j<<" ";
        }
    }
    return 0;
}
