#include <iostream>
using namespace std;
int main() {
    int t,k;
    cin>>t;
    for(int i=0;i<t;i++){
      int n,c=0;
      cin>>n>>k;
      string s;
      cin>>s;
      for(int j=0;j<n;j++){
          if(s[j]=='B'){
              c++;
              j=j+k-1;
            }
        }
      cout<<c<<endl;
    }
    return 0;
}
