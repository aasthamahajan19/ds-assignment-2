#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int x) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) return mid;
        else if (arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = 6, x = 10;
    int res = binarySearch(arr, n, x);
    if (res != -1) cout << "Found at index " << res;
    else cout << "Not found";
}
