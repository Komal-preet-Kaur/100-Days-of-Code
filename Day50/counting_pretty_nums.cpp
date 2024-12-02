#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int T;
	cin>>T;
	while(T--){
	    int count=0;
	    int start,end;  //taking two numbers 
	    cin>>start;
	    cout<<" ";
	    cin>>end;
	    for(int i=start;i<=end;i++){
	        int lastdigit=i%10;
	        if(lastdigit==3||lastdigit==2||lastdigit==9){
	            count++;
	        }
	    }
	    cout<<count;
	    cout<<endl;
	}
	

}
