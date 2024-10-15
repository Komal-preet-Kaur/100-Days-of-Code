 #include<iostream>
 using namespace std;
 int main(){
     int arr[5];
     cout<<"Enter the elements";
     for(int i=0;i<=4;i++){
         cin>>arr[i];
     }
     for(int i=0;i<=4;i++){
         cout<<arr[i]<<" ";
     }
     int max=arr[0];
     for(int i=0;i<=4;i++){
         if(arr[i]>max){
         max=arr[i];
         }
     }
     cout<<max<<endl;
     int smax=arr[0];
     for(int i=0;i<=4;i++){
         if(arr[i]>smax && smax!=max){
             smax=arr[i];
         }
     }
     cout<<smax;
 }
