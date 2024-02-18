#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    int size;
    for(int i=1;i<=t;i++){
        cin>>size;
        int arr[size],copyArr[size],orginal[size];
        for(int j=1;j<=size;j++){
            cin>>arr[j];
            copyArr[j]=arr[j];
            orginal[j]=arr[j];
        }
        bool flag=false,evenodd;
        int e=0,o=0;
        for(int x=1;x<=size;x++){
            if(orginal[x]%2!=0){
               o++;
            }else{
              e++;
            }
            if(x%2==0){
                arr[x]=arr[x]+1;
            }else if(x%2!=0){
                copyArr[x]=copyArr[x]+1;
            }
            
        }
        if(o==size||e==size){
            evenodd=true;
        }else{
            evenodd=false;
        }
        o=0,e=0;
        for(int x=1;x<=size;x++){
            if(arr[x]%2!=0&&copyArr[x]%2==0){
                o++;
            }else{
                e++;
            }
        }
        if(o==size||e==size){
            flag=true;
        }else{
            flag=false;
        }
        if(flag){
            cout<<"YES\n";
        }else if(evenodd){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
      
    }
 
    return 0;
}
