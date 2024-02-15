#include <iostream>
using namespace std;
int main() {
     int n;
     cin>>n;
     bool flag=true;
     for(int i=4;i<=777;i++){
        bool check=true;
        for(int j=i;j>0;j/=10){
             if(j%10!=7&&j%10!=4){
                 check=false;
             }
        }
        if(check){
             if(n%i==0){    
              flag=true;
              break;
            }
        }else{
            flag=false;
        }
         
     }
     
      if(flag){
             cout<<"YES";
         }else{
             cout<<"NO";
         }
    return 0;
}
