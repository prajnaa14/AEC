#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter the number of testcases:"<<endl;
    cin>>t;
    while(t--){
         int m,h,bmi;
         cout<<"enter the value of m anad h:"<<endl;
         cin>>m>>h;
         bmi=m/(h*h);
         cout<<"category: ";
         if(bmi<=18){
            cout<<"1"<<endl;
         }
          if(19<=bmi&&bmi<=24){
            cout<<"2"<<endl;
         }
         if(25<=bmi&&bmi<=29){
            cout<<"3"<<endl;
         }
         if(30<=bmi){
            cout<<"4"<<endl;
         }
    }
}