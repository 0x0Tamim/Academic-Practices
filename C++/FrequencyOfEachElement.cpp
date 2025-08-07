#include<iostream>
using namespace std;
int main() {

    int n;
    cin >> n;
    int arr[n], visited[n] = {0};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;
        }

        int count = 1;
        visited[i] = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        cout << arr[i] << " : " << count << endl;
    }

    return 0;
}
