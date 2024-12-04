#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2; // Input from the user

    // Use a loop to find GCD
    while (num2 != 0) { // Continue until num2 becomes 0
        int temp = num2; // Store num2 in a temporary variable
        num2 = num1 % num2; // Update num2 to the remainder of num1 divided by num2
        num1 = temp; // Update num1 to the old value of num2
    }

    // Output result
    cout << "GCD is " << num1 << endl;

    return 0;
}



