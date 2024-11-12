#include<iostream>
using namespace std;
int main() {
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int queries;
    cout<<"Enter the number of queries:";
    cin >> queries;
    for(int j = 0; j < queries; j++) {
        int num;
        cin >> num;
        if(num >= 0 && num < size) {
            cout <<"Yes the array index exsists and index number is : "<<arr[num] << endl;
        } else {
            cout << "This index is out of Bounds" << endl;
        }
    }
    return 0;
}