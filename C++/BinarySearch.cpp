#include <iostream>
using namespace std;

int main() {
    cout << "Enter size of array: ";
    int n, target;
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target element to search: ";
    cin >> target;

    int first = 0, last = n - 1;
    bool found = false;

    while (first <= last) {

        int mid = first + (last - first) / 2;


        if (arr[mid] == target) {
            cout << "Element found at index " << mid << endl;
            found = true;
            break;
        }

        else if (target > arr[mid]) {
            first = mid + 1;
        }

        else {
            last = mid - 1;
        }
    }

    if (!found) {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
