#include <iostream>
using namespace std;

int main() {
    int number, reversed = 0, original;

    cout << "Enter a number: ";
    cin >> number; // Input from the user

    original = number; // Store the original number

    // Reverse the number
    while (number > 0) {
        reversed = reversed * 10 + number % 10; // Build the reversed number
        number /= 10; // Remove last digit
    }
    // Check if original equals reversed
    if (original == reversed)
        cout << original << " is a palindrome." << endl;
    else
        cout << original << " is not a palindrome." << endl;

    return 0;
}

