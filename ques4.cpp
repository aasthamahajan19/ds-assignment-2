#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s1="Hello",s2="World";
    s1+=s2; cout<<s1<<endl;
    reverse(s1.begin(),s1.end()); cout<<s1<<endl;
    string v="aeiouAEIOU",s="Education"; 
    string res=""; 
    for(char c:s) if(v.find(c)==string::npos) res+=c; 
    cout<<res<<endl;
    string arr[3]={"banana","apple","cherry"}; 
    sort(arr,arr+3); 
    for(int i=0;i<3;i++) cout<<arr[i]<<" "; cout<<endl;
    char ch='A'; 
    if(ch>='A'&&ch<='Z') ch=ch+32; 
    cout<<ch;
}
