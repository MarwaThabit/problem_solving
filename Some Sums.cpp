#include <iostream>
using namespace std;
int main() {
    int n,a,b,sum=0,num,sum2;
    cin>>n>>a>>b;

    for(int i=1;i<=n;i++){
        if(i/10==0){
            if(i>=a&&i<=b){
                sum=sum+i;
            }
        }else{
            num=i;
            sum2=0;
            while(num>0){
                int digit=num%10;
                sum2+=digit;
                num/=10;
            }
            if(sum2>=a&&sum2<=b){
                sum=sum+i;
            }
        }
        
    }
    cout<<sum;
    return 0;
}
