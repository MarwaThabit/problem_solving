#include <iostream>
using namespace std;
int main() {
     int n,rev=0,org;
     cin>>n;
     org=n;
     while(n>0){
         rev=rev*10+n%10;
         n=n/10;
     }if(org==rev){
         cout<<rev<<endl;
         cout<<"YES";
     }else{
         cout<<rev<<endl;
         cout<<"NO";
     }
    
     return 0;
}
