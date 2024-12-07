#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> d(n);
        for (int i = 0; i < n; i++) {
            cin >> d[i];
        }
        bool nonDecreasing = true;
        for (int i = 1; i < n; i++) {  
            if (d[i] < d[i - 1]) {  
                nonDecreasing = false;
                break;
            }
        }
        
        if (nonDecreasing) {
            cout << "Yes";
        } else {
            cout << "No";
        }
        cout << endl;  
    }
    return 0;
}
