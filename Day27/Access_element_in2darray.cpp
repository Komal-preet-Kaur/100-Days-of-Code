#include <iostream>
using namespace std;

void find_element(int arr[][100], int r, int c, int a, int b) {
    if (a >= 0 && a < r && b >= 0 && b < c) {
        cout << "Element at position (" << a << ", " << b << ") is: " << arr[a][b] << endl;
    } else {
        cout << "Invalid indices!" << endl;
    }
}

int main() {
    int r, c;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;


    int arr[100][100];


    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

  
    cout << "The array entered is:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

   
    int a, b;
    cout << "Enter the row and column of the element to find: ";
    cin >> a >> b;


    find_element(arr, r, c, a, b);

    return 0;
}
