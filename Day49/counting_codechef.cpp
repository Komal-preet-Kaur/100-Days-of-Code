#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  
    
    while (T--) {
        int N;
        cin >> N;  
        
        int count_S = 0;  
        int count_L = 0;  
        
        while (N--) {
            string s;
            cin >> s;  
            
            if (s == "START38") {
                count_S++;
            }
            else if (s == "LTIME108") {
                count_L++;
            }
        }
        
        cout << count_S << " " << count_L << endl;
    }
    
    return 0;
}
