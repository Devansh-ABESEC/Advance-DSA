#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    cout << "Required Order: ";

    int low = 0, high = n - 1;
    while (low <= high) {
        if (low == high) {
            cout << arr[low] << " ";
        } else {
            cout << arr[low] << " ";
            cout << arr[high] << " ";
        }
        low++;
        high--;
    }

    return 0;
}