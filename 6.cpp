#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"enter the number of testcases:"<<endl;
    cin>>t;
    while(t--){
        int x,y,z;
        cout<<"enter the values of x,y and z:"<<endl;
        cin>>x>>y>>z;
        cout<<"total time during gaming:";
        if(x<3){
            cout<<y*x<<endl;
        }
        else if(x>=3 && x%3==0 ){
            cout<<(x*y)+(((x/3)-1)*z)<<endl;
        }
        else{
            cout<<(x*y)+((x/3)*z)<<endl;
        }
    }
}