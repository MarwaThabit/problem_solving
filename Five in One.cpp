
#include <iostream>
using namespace std;
int max(int arr[],int n){
      int m=arr[0];
      for(int i=1;i<n;i++){
          if(arr[i]>m){
              m=arr[i];
          }
      }
      return m;
}
int min(int arr[],int n){
      int m=arr[0];
      for(int i=1;i<n;i++){
          if(arr[i]<m){
              m=arr[i];
          }
      }
      return m;
}
bool prime(int num){
      
       if(num== 1){
            return false;
        }
       for(int j=2;j<num;j++){
            if(num%j==0){
                return false;
            }
        
       }
       return true;
       
}
bool plaindorm(int num){
      int rev=0,org=0;
     
       org=num;
     
       while(num>0){
           int digit=num%10;
           rev=rev*10+digit;
           num/=10;
       }
       if(rev==org){
          return true;
       }else{
           return false;
       }
       
      
}
int divisor(int num){
    int counter=0;
    for(int j=1;j<num;j++){
            if(num%j==0){
               counter++;
            }
       }
         
    return counter;
}
 
int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
    int c=0,plainCount=0;
    int coun=divisor(arr[0]),index,ma=arr[0];
    for(int i=0;i<n;i++){
  
        if(prime(arr[i])){
            c++;
        }
        if(plaindorm(arr[i])){
             plainCount++;
        }
        if(divisor(arr[i])>coun){
           coun=divisor(arr[i]);
           ma=arr[i];
        }else if(divisor(arr[i]) ==coun){
           if(ma<arr[i]){
                ma=arr[i];
              
           }
        }
      }
      cout<<"The maximum number : "<<max(arr,n)<<endl;
      cout<<"The minimum number : "<<min(arr,n)<<endl;
      cout<<"The number of prime numbers : "<<c<<endl;
      cout<<"The number of palindrome numbers : "<<plainCount<<endl;
      cout<<"The number that has the maximum number of divisors : "<<ma<<endl;
 
    return 0;
}
