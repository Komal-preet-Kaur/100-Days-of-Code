#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int pos;
    cin >> pos;
    v.erase(v.begin() + pos - 1);
    //erasing from range 
     int a, b;
    cin >> a >> b;
    v.erase(v.begin() + a - 1, v.begin() + b - 1);

    cout << v.size() << endl;
    for (int x : v) {
        cout << x << " ";
    }
    return 0;
}
