#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n], d[n][n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
            {
                d[i][j]=a[k++];
            }
            else {
                d[i][j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
}
