#include <iostream>
using namespace std;
int main() {
    int n=3;
    int sym[6]={1,2,3,4,5,6};
    int a[3][3];
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++) a[i][j]=sym[k++];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<i) cout<<a[j][i]<<" ";
            else cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
