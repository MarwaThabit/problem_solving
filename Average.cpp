#include <iostream>
#include <iomanip>
using namespace std;
void average(float arr[],int size){
    float sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }cout<<fixed<<setprecision(7)<<sum/size;
}
int main() {
    int n;
    cin >>n;
    float arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    average(arr,n);
  
 
    return 0;
}
