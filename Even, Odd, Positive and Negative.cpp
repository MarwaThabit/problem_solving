#include <iostream>
using namespace std;
int main() {
  int n,N,countEven=0,countOdd=0,countPos=0,countNeg=0;
  cin>>n;
  for(int i=1;i<=n;i++){
      cin>>N;
     if(N%2==0){
         countEven++;
     }else{
         countOdd++;
     }
     if(N>0){
         countPos++;
     }else if(N<0){
         countNeg++;
     }
  }
  cout<<"Even: "<<countEven<<endl<<"Odd: "<<countOdd<<endl<<"Positive: "<<countPos<<endl<<"Negative: "<<countNeg;

    return 0;
}
