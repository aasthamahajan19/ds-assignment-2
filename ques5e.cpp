#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int size=n*(n+1)/2;
    int a[size], k=0, s[n][n];
    for(int i=0;i<size;i++) {
        cin >> a[i];
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            s[i][j]=s[j][i]=a[k++];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
}
