#include <iostream>
using namespace std;
int arr[500][500];
void swap (int x,int y,int n){
    for(int i=0;i<n;i++){
        int temp=arr[x][i];
        arr[x][i]=arr[y][i];
        arr[y][i]=temp;
    }
    for(int i=0;i<n;i++){
        int temp=arr[i][y];
        arr[i][y]=arr[i][x];
        arr[i][x]=temp;
    }
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int n,x,y;
    cin>>n>>x>>y;
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            cin>>arr[r][c];
        }
    }
    x--;y--;
    swap(x,y,n);
    return 0;
}
