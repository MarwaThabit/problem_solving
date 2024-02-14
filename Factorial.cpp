#include <iostream>
using namespace std;
int main() {
     int n,N;
     long long fact;
     cin>>n;
     for(int i=1;i<=n;i++){
         cin>>N;
         fact=1;
         for(int j=N;j>0;j--){
             fact=fact*j;
         }
         cout<<fact<<endl;
       
    }
     return 0;
}
