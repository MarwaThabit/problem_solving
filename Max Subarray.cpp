#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    for(int j=0;j<t;j++) {
        int size;
        cin >> size;
        int arr[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
            cout<<arr[i]<<" ";
        }
        for(int i=0;i<size;i++){
            int max=arr[i];
            for(int j=i+1;j<size;j++){
                if(arr[j]>max){
                    max=arr[j];
                }
                cout<<max<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
