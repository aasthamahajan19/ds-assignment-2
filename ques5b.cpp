#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int size=3*n-2;
    int a[size], k=0, t[n][n];
    for(int i=0;i<size;i++) {
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(abs(i-j)<=1){
                t[i][j]=a[k++];
            }
            else {
                t[i][j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<t[i][j]<<" ";
        cout<<endl;
    }
}
