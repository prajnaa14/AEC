#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cout<<"Enter the number of testcases:"<<endl;
    cin>>t;
    while(t--){
         int a[100],n,ans;
         cout<<"enter the number of elements"<<endl;
         cin>>n;
         cout<<"enter the elements:"<<endl;
         for(int i=0;i<n;i++){
            cin>>a[i];
         }
         sort(a,a+n);
         ans=a[1]-a[0];
         cout<<"minimum difference: ";
         for(int i=2;i<n;i++){
            ans=min(ans,a[i]-a[i-1]);
    }
    cout<<ans;
    }
}