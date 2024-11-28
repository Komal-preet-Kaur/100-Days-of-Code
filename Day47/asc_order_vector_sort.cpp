#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int T; 
    cin >> T; 

    vector<int> v; 
    for (int i = 0; i < T; i++) {
        int x;
        cin >> x; 
        v.push_back(x); 
    }
//sorting the vector now
    sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
