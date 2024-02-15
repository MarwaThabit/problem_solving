#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    string N;
    for(int i=0;i<n;i++){
        cin>>N;
        for(int j=N.size()-1;j>=0;j--){
            cout<<N[j]<<" ";
        
        }
       cout<<endl;
    }

    return 0;
}
