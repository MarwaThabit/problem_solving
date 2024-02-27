#include <iostream>
using namespace std;
void n_times(int t,char c){
    for(int i=0;i<t;i++){
        cout<<c<<" ";
    }cout<<endl;
}
int main() {
    int n,t;
    cin >>n;
    char c;
    for(int i=0;i<n;i++){
        cin>>t>>c;
        n_times(t,c);
    }
  
 
    return 0;
}
