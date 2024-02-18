
#include <iostream>
using namespace std;
int main() {
   int q;
   cin>>q;
   long long n[q];
   for(int i=0;i<q;i++){
       cin>>n[i];
        if(n[i]==1){
           cout<<0<<endl;
           continue;
       }
        int moves=0;
        while(n[i] > 1){
            if(n[i] % 2 == 0){
                n[i]/=2;
                moves++;
            }
            else if(n[i] % 3 == 0){
                n[i] = (2*n[i])/3;
                moves++;
            }
            else if(n[i] % 5 == 0){
                n[i] = (4*n[i])/5;
                moves++;
            }
            else if((n[i] % 2 != 0 && n[i] % 3 != 0) && (n[i] % 5 != 0) ){
                if(n[i] != 1){
                    cout<<"-1"<<endl;
                    break;
                }
            }
            if(n[i] == 1){
                cout<<moves<<endl;
                break;
            }
            
        }
   }
    return 0;
}
