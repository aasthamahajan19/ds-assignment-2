#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int size=n*(n+1)/2;
    int a[size], k=0, u[n][n];
    for(int i=0;i<size;i++) cin >> a[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j) {
                u[i][j]=a[k++];
            }
            else {
                u[i][j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<u[i][j]<<" ";
        cout<<endl;
    }
}
