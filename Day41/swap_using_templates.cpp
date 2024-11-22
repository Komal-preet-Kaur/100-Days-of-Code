#include <iostream>
using namespace std;
template <typename T>
void Swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
void executeSwap() {
    int int1, int2;
    float float1, float2;
    char char1, char2;
    // Input
    cin >> int1 >> int2;
    cin >> float1 >> float2;
    cin >> char1 >> char2;
    // Output before swapping
    cout << int1 << " " << int2 << endl;
    cout << float1 << " " << float2 << endl;
    cout << char1 << " " << char2 << endl;
    // Swap the variables
    Swap(int1, int2);
    Swap(float1, float2);
    Swap(char1, char2);
    // Output after swapping
    cout << int1 << " " << int2 << endl;
    cout << float1 << " " << float2 << endl;
    cout << char1 << " " << char2 << endl;
}