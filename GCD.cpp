#include <iostream>
#include<algorithm>
using namespace std;
int main() {
     int n,x,min_num,max=0;
     cin>>n>>x;
     min_num=min(n,x);
     for(int i=1;i<=min_num;i++){
         if(n%i==0&&x%i==0){
             if(i>max){
                 max=i;
             }
         }
     }
     cout<<max;
    return 0;
}
