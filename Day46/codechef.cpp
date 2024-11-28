#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T;
    
    while (T--) {
        int N; 
        cin >> N;
        
        int missing_doll = 0; 
        
        for (int i = 0; i < N; ++i) {
            int doll_type;
            cin >> doll_type;
            missing_doll ^= doll_type; 
        }
        
        cout << missing_doll << endl; 
    }
    
    return 0;
}
