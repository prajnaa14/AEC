#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter the number of testcases:"<<endl;
    cin>>t;
    while(t--){
         string s;
         bool flag=0;
         cout<<"enter the string\n";
         cin>>s;
         int c=0;
         for(int i=0;i<s.length();i++){
         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='0'||s[i]=='u')
            c++;
         else 
         c=0;
         if(c>2){
            cout<<"HAPPY"<<endl;
            flag=1;
            break;
         }
         }
         if(!flag)
            cout<<"sad"<<endl;
}
}