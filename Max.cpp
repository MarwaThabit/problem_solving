#include <iostream>
using namespace std;
int main() {
     int n;
     cin>>n;
     long long N,max=0;
     for(int i=1;i<=n;i++){
        cin>>N;
        if(N>max){
             max=N;
        }
         
    }
    cout<<max;
    
     return 0;
}
