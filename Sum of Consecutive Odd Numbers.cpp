#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int x,n,y,min_num,max_num,sum;
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>n>>y;
        min_num=min(n,y);
        max_num=max(n,y);
        if((max_num-min_num)==1){
            sum=0;
        }else{
            sum=0;
            for(int j=min_num+1;j<=max_num-1;j++){
                if(j%2!=0){
                   sum=sum+j;
                }else{
                    continue;
                }   
            } 
        }
        cout<<sum<<endl;
    }

    return 0;
}
