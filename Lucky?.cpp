#include <iostream>
using namespace std;
int main() {
    int t,firstSum,secondSum;
    cin>>t;
    string n;
    for(int i=1;i<=t;i++){
      cin>>n;
      firstSum=0,secondSum=0;
      for(int j=0;j<n.size();j++){
          if(j<3){
            firstSum+=n[j];
          }else{
            secondSum+=n[j];
          }
      }
  
      if(firstSum==secondSum){
          cout<<"YES\n";
      }else{
          cout<<"NO\n";
      }
     
    } 
        
    return 0;
}
