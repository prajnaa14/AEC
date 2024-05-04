#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>set;
    set.insert(10);
    set.insert(20);
    set.insert(30);
    set.insert(20);
    for(auto it=set.begin();it!=set.end();it++){
        cout<<*it<<" ";
    }
}