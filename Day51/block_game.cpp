#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        string number;
        cin >> number; 

        bool isPalin = true; 
        int n = number.length();

        for (int i = 0; i < n / 2; i++) {
            
            if (number[i] != number[n - i - 1]) {
                isPalin = false;
                break; 
            }
        }

        if (isPalin) {
            cout << "wins" << endl;
        } else {
            cout << "loses" << endl;
        }
    }

    return 0;
}
