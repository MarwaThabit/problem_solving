#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    for(int j=0;j<t;j++) {
        int size;
        cin >> size;
        string s,target="Timur";
        cin >> s;
        sort(s.begin(),s.end());
        sort(target.begin(),target.end());
        if(s==target){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
