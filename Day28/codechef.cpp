#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_case;
    cin >> test_case;
    
    for (int j = 0; j < test_case; j++) {
        int nums, count = 0;
        cin >> nums;

        for (int i = 0; i < nums; i++) {
            int finding;
            cin >> finding;
            if (finding >= 1000) {
                count++;
            }
        }
        
        cout << count << endl;
    }

    return 0;
}
