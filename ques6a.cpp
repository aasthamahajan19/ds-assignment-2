#include <iostream>
using namespace std;
struct Element {int r,c,v;};
int main() {
    int m=3,n=3,num=3;
    Element a[3]={{0,0,5},{0,2,8},{2,1,6}};
    Element t[3];
    for(int i=0;i<num;i++){
        t[i].r=a[i].c;
        t[i].c=a[i].r;
        t[i].v=a[i].v;
    }
    for(int i=0;i<num;i++) cout<<t[i].r<<" "<<t[i].c<<" "<<t[i].v<<endl;
}
