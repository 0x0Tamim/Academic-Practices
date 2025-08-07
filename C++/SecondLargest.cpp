#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int n) {
    if (n < 2)
        return -1;

    int first = arr[0], second = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 2) {
        cout << "Array must have at least two elements." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findSecondLargest(arr, n);
    if (result == -1) {
        cout << "No second largest element found." << endl;
    } else {
        cout << "The second largest element is: " << result << endl;
    }

    return 0;
}
