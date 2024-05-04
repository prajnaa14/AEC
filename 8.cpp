#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter the number of testcases:"<<endl;
    cin>>t;
    while(t--){
         int x,y,s,t,count=0;
         cout<<"enter the value of x,y,s and t:"<<endl;
         cin>>x>>y>>s>>t;
         cout<<"frogs position: ";
         for(int i=x;i<=x+s;i++){
            for(int j=y;j<=y+s;j++){
                if(i+j<=t)
                count++;
            }
        }
        cout<<count<<endl;
    }
}