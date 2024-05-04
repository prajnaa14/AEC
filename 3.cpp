#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter the number of testcases:"<<endl;
    cin>>t;
    while(t--){
         int a[100],n;
         cout<<"enter the number of elements"<<endl;
         cin>>n;
         cout<<"enter the elements:"<<endl;
         for(int i=0;i<n;i++){
            cin>>a[i];
         }
         cout<<"reversed array ";
         for(int i=n-1;i>=0;i--){
         cout<<a[i]<<endl;
    }
    }
}