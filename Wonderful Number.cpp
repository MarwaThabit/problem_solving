#include <iostream>
using namespace std;
bool odd(int x) {
    return x % 2 != 0;
}
bool isBinaryPalindrome(int num) {
    int org = num,rev= 0;
    while (num > 0) {
        int digit = num % 2;
        rev = (rev * 2) + digit;
        num /= 2;
    }
    return org==rev;
}
int main() {
    int x;
    cin >> x;
    if (odd(x) && isBinaryPalindrome(x)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}
