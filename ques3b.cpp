#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = 6;
    int l = 0, r = n - 2;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == mid + 1) l = mid + 1;
        else r = mid - 1;
    }
    cout << "Missing: " << l + 1;
}
