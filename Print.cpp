#include <iostream>
using namespace std;
void print(int x){
    for(int i=1;i<=x;i++){
        cout<<i;
         if (i < x) {
            cout << " ";
        }
    }
}
int main() {
   int x;
   cin>>x;
   print(x);
    return 0;
}
