#include <iostream>
using namespace std;
#include<cmath>
void equation (int x,int n){
    long long sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
          sum+=pow(x,i); 
        } 
    }
    cout<<sum;
}
 
int main() {
    int  x,n;
    cin >> x>>n;
    equation (x,n);
 
    return 0;
}
