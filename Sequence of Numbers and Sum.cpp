#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,y,min_num,max_num,sum;
 
    while(true){
        cin>>n>>y;
        min_num=min(n,y);
        max_num=max(n,y);
        sum=0;
        if(min_num<=0||max_num<=0){
            break;
        }else{
            for(int i=min_num;i<=max_num;i++){
                cout<<i<<" ";
                sum=sum+i;
            }
            cout<<"sum ="<<sum<<endl;
        }
        
    }

    return 0;
}
