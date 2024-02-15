#include <iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    for(int l=1;l<=x;l++){
        for(int s=1;s<=(x-l);s++){
            cout<<" ";
        }
        for(int s=1;s<=(l*2-1);s++){
          cout<<"*";   
        }
        cout<<endl;
    }
    return 0;
}
