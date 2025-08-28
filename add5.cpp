#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,2,4,5,2,6,7,8};
    int n=10;
    for(int i=0;i<n;i++){
        if(arr[i]==2){
            for(int j=n-1;j>i;j--) arr[j]=arr[j-1];
            i++;
        }
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
