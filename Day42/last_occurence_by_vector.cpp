//find last index of element 
#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v(5);
    for(int i=0;i<v.size();i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    int occurence=-1;   //already take  first  element from last  
    int x;
    cin>>x; //ask the element to be searched
    for(int i=0;i<5;i++){
        if(v[i]==x){            
            occurence=i;    //take the index 
        }
    }
    cout<<occurence;
    
}