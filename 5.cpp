#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"enter the number of testcases:"<<endl;
    cin>>t;
    while(t--){
        int n,m,k;
        cout<<"enter the values of n,m,k"<<endl;
        cin>>n>>m>>k;
        m-=k;
        if(n<=m){
            cout<<"yes"<<endl;
        }
        else
        cout<<"no"<<endl;
    }
}