#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter the number of testcases:"<<endl;
    cin>>t;
    while(t--){
         int x,y,ans;
         cout<<"enter the value of x anad y:"<<endl;
         cin>>x>>y;
         ans=(x/y)+(x%y);
         cout<<"minimum number of steps: ";
         cout<<ans<<endl;
    }
}