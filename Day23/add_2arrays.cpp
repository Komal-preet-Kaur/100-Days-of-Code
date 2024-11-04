#include<iostream>
using namespace std;

int main() {
    int arr[3][2], brr[3][2], res[3][2];

    // Input for first array
    cout << "Enter first array:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }

    // Input for second array
    cout << "Enter second array:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> brr[i][j];
        }
    }

    // Perform addition and store in res
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            res[i][j] = arr[i][j] + brr[i][j];
        }
    }

    // Output first array
    cout << "First array:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Output second array
    cout << "Second array:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    // Output addition result
    cout << "Addition of arrays:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
