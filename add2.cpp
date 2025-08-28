#include <iostream>
#include <string>
using namespace std;
bool canSplit(string s){
    int n=s.size();
    for(int i=1;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            string a=s.substr(0,i),b=s.substr(i,j-i),c=s.substr(j);
            if(a.find(b)!=string::npos && c.find(b)!=string::npos) return true;
            if(b.find(a)!=string::npos && c.find(a)!=string::npos) return true;
            if(a.find(c)!=string::npos && b.find(c)!=string::npos) return true;
        }
    }
    return false;
}
int main(){
    string s="abcababc";
    if(canSplit(s)) cout<<"YES"; else cout<<"NO";
}
