#include <iostream>
using namespace std;
struct Element {int r,c,v;};
int main() {
    Element a[2]={{0,0,5},{1,2,10}};
    Element b[2]={{0,0,3},{1,1,4}};
    Element c[4]; int k=0;
    int i=0,j=0;
    while(i<2 && j<2){
        if(a[i].r==b[j].r && a[i].c==b[j].c){
            c[k]={a[i].r,a[i].c,a[i].v+b[j].v}; i++; j++; k++;
        } else if(a[i].r<b[j].r || (a[i].r==b[j].r && a[i].c<b[j].c)){
            c[k++]=a[i++];
        } else {
            c[k++]=b[j++];
        }
    }
    while(i<2) c[k++]=a[i++];
    while(j<2) c[k++]=b[j++];
    for(int x=0;x<k;x++) cout<<c[x].r<<" "<<c[x].c<<" "<<c[x].v<<endl;
}
