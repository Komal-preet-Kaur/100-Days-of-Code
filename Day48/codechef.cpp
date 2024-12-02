#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n; // number of animals
        int freq_each_animal[101] = {0}; // frequency array for animal types 1 to 100
        
        for (int i = 0; i < n; i++) {
            int animal;
            cin >> animal;
            freq_each_animal[animal]++;
        }
        
        bool possible = true;
        for (int i = 1; i <= 100; i++) { // checking only valid animal types 1 to 100
            if (freq_each_animal[i] % 2 != 0) {
                possible = false;
                break;
            }
        }
        
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl; 
        }
    }
    return 0;
}
