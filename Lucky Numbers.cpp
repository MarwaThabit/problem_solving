#include <iostream>
#include<algorithm>
using namespace std;
int main() {
     int n,x,min_num,max_num; bool check=false;
     cin>>n>>x;
     max_num=max(n,x);
     min_num=min(n,x);
     for(int i =min_num;i<=max_num;i++){
         bool flag=true;
         for(int j=i;j>0;j/=10){
             if(j%10!=7&&j%10!=4){
                 flag=false;
             }
         }
         if(flag){
             cout<<i<<" ";
             check=true;
         }else{
             continue;
         }
     }
     if(check==false){
         cout<<-1;
     }
    return 0;
}
