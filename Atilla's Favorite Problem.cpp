#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int max=s[0]-'a' + 1;
        for(int j=1;j<n;j++){
            if((s[j]-'a')>=max){
                max=s[j]-'a' + 1;
            }
        }
        cout<<max<<endl;
    }
 
    return 0;
}
