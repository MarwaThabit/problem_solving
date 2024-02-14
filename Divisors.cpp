#include <iostream>
using namespace std;
int main() {
     int n;
     cin>>n;
     for(int j=1;j<=n;j++){
       if(n%j==0){
           cout<<j<<endl;
       }
    }
    return 0;
}
