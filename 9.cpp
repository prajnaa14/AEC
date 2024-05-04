#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cout<<"Enter the number of testcases:"<<endl;
    cin>>t;
    while(t--){
         int a[100],n,current=0;
         cout<<"enter the number of elements"<<endl;
         cin>>n;
         cout<<"enter the elements:"<<endl;
         for(int i=0;i<n;i++){
            cin>>a[i];
         }
         sort(a,a+n);
         for(int i=n/2;i>=0;i--){
            if(a[i]!=a[n/2]){
                current=i+1;
                break;
            }
         }
         cout<<n-current<<endl;
    }
}