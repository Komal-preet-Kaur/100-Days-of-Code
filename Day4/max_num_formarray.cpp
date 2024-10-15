#include<iostream>
#include<climits>  // For INT_MIN
using namespace std;

int main() {
    int arr[4];
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    // Finding the first maximum
    int mx = arr[0];
    for (int i = 0; i < 4; i++) {
        if (arr[i] > mx) {
            mx = arr[i];  // First highest found
        }
    }
    cout << "First max is " << mx << endl;

    // To find the second highest number
    int smx = INT_MIN;  
    for (int i = 0; i < 4; i++) {
        if (arr[i] != mx && arr[i] > smx) {
            smx = arr[i];  // Update second max if found
        }
    }

    if (smx == INT_MIN) {
        cout << "No second max exists " << endl;
    } else {
        cout << "Second max is " << smx << endl;
    }

    return 0;
}
