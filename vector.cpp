#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vector;
    vector.push_back(10);
    vector.push_back(20);
    vector.push_back(30);
    for(auto it=vector.begin();it!=vector.end();it++){
        cout<<*it<<" ";
    }
}