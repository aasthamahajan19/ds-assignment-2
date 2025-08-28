#include <iostream>
using namespace std;
struct Element {int r,c,v;};
int main() {
    Element a[2]={{0,0,2},{1,1,3}};
    Element b[2]={{0,0,4},{1,1,5}};
    int res[2][2]={0};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                int av=0,bv=0;
                for(int x=0;x<2;x++) if(a[x].r==i && a[x].c==k) av=a[x].v;
                for(int y=0;y<2;y++) if(b[y].r==k && b[y].c==j) bv=b[y].v;
                res[i][j]+=av*bv;
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++) cout<<res[i][j]<<" ";
        cout<<endl;
    }
}
