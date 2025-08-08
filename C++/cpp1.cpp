#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string S;
    cin >> S;

    unordered_map<char, int> count;
    for (char c : S) {
        count[c]++;
    }

    char unique_char = -1;
    for (char c : S) {
        if (count[c] == 1) {
            unique_char = c;
            break;
        }
    }


    if (unique_char == -1) {
        cout << "-1" << endl;
    } else {
        cout << unique_char << endl;
    }

    return 0;
}



