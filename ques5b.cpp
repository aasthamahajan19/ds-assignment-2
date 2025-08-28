#include <iostream>
using namespace std;
int main() {
    int n=4;
    int tri[10]={1,2,3,4,5,6,7,8,9,10};
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(abs(i-j)<=1) cout<<tri[k++]<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
}
