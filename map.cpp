#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> map;
    map["A"]=10;
    map["B"]=20;
    map["C"]=30;
    for(auto it=map.begin();it !=map.end();it++){
        cout<<it->first<<" : "<<it->second<<endl;
    }
}