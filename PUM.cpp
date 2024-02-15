#include <iostream>
using namespace std;
int main() {
    int n,j=0;
    cin>>n;
  
    for(int i=0;i<n;i++){
        j++;
        for(;j>0;j++){
            if(j%4!=0)
              cout<<j<<" ";
            else
              break;
        }
        cout<<"PUM"<<endl;
    }

    return 0;
}
