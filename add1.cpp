#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[]={1,5,3,4,2};
    int n=5,k=2;
    sort(arr,arr+n);
    int i=0,j=1,count=0;
    while(j<n){
        int diff=arr[j]-arr[i];
        if(diff==k){count++;i++;j++;}
        else if(diff>k)i++;
        else j++;
        if(i==j)j++;
    }
    cout<<count;
}
