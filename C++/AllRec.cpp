#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)  // Base case
        return 1;
    return n * factorial(n - 1);  // Recursive case
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;  // Base case 1
    if (n == 1) return 1;  // Base case 2
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
}

int main() {
    int n;
    cout << "Enter the position in Fibonacci series: ";
    cin >> n;
    cout << "Fibonacci number at position " << n << " is " << fibonacci(n) << endl;
    return 0;
}

#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0)  // Base case
        return 0;
    return n % 10 + sumOfDigits(n / 10);  // Recursive case
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of digits of " << n << " is " << sumOfDigits(n) << endl;
    return 0;
}

#include <iostream>
using namespace std;

void reverseString(string& str, int left, int right) {
    if (left >= right)  // Base case
        return;
    swap(str[left], str[right]);  // Swap characters
    reverseString(str, left + 1, right - 1);  // Recursive case
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    reverseString(str, 0, str.length() - 1);
    cout << "Reversed string: " << str << endl;
    return 0;
}

#include <iostream>
using namespace std;

int power(int a, int b) {
    if (b == 0)  // Base case
        return 1;
    return a * power(a, b - 1);  // Recursive case
}

int main() {
    int a, b;
    cout << "Enter base and exponent: ";
    cin >> a >> b;
    cout << a << "^" << b << " = " << power(a, b) << endl;
    return 0;
}

#include <iostream>
using namespace std;

bool isPalindrome(string& str, int left, int right) {
    if (left >= right)  // Base case
        return true;
    if (str[left] != str[right])  // Not a palindrome
        return false;
    return isPalindrome(str, left + 1, right - 1);  // Recursive case
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if (isPalindrome(str, 0, str.length() - 1))
        cout << str << " is a palindrome!" << endl;
    else
        cout << str << " is not a palindrome." << endl;
    return 0;
}

#include <iostream>
using namespace std;

void decimalToBinary(int n) {
    if (n == 0)  // Base case: when n becomes 0, stop recursion
        return;

    decimalToBinary(n / 2);  // Recursive call with the quotient
    cout << (n % 2);         // Print the remainder (binary digit)
}

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    if (n == 0) {
        cout << "Binary: 0" << endl;  // Handle edge case where input is 0
    } else {
        cout << "Binary: ";
        decimalToBinary(n);
        cout << endl;
    }

    return 0;
}

