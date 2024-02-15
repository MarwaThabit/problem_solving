#include <iostream>
using namespace std;
#include<cmath>
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
    }int j=1;
     for(int l=(x*2);l>=x+1;l--){
        for(int s=1;s<=(x*2-l);s++){
            cout<<" ";
        }
        for(int s=1;s<=(l-j);s++){
          cout<<"*";   
          
        }j++;
        cout<<endl;
    }
    return 0;
}
