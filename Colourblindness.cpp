#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        bool same =false;
        for (int j = 0; j < n; j++) {
            if (s1[j] == s2[j] || s1[j] == 'B' && s2[j] == 'G' ||
                s1[j] == 'G' && s2[j] == 'B') {
                same = true;
            }
            else {
                same = false;
                break;
            }
        }
        if (same) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
 
    return 0;
}
