
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    string s1, s2, s3;
    
    for (int i = 0; i < t; i++) {
        char draw = '.';
        cin >> s1 >> s2 >> s3;
 
        for (int x = 0; x < 3; x++) {
            if ((s1[x] == s2[x] && s2[x] == s3[x]) && s1[x]!='.') {
                draw = s1[x];
                break;
            }
        }
        if ((s1[0] == s2[1] && s2[1] == s3[2]) && s1[0] != '.') {
            draw = s1[0];
        }
        if ((s1[2] == s2[1] && s2[1] == s3[0]) && s1[2] != '.') {
            draw = s1[2];
        }if ((s1[0] == s1[1] && s1[1] == s1[2]) && s1[0] != '.') {
            draw = s1[0];
        }
        if ((s2[0] == s2[1] && s2[1] == s2[2]) && s2[0] != '.') {
            draw = s2[0];
        }if ((s3[0] == s3[1] && s3[1] == s3[2]) && s3[0] != '.') {
            draw = s3[0];
        }
        if (draw != '.') {
            cout << draw << endl;
        }
        else {
            cout << "DRAW\n";
        }
    }
 
    return 0;
}
