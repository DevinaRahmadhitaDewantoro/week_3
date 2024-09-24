#include <iostream>
#include <string>

using namespace std;

// Function to check if the test has passed
bool testPassed(double largest, double expected) {
    return largest == expected;
}

int main() {
    // Set fixed numbers
    double num1 = 3, num2 = 4, num3 = 5;

    // Create a string to output the fixed numbers
    string fixedNumbers = "num 1, num 2, num 3 are set to 3, 4, 5";

    // Output the string
    cout << fixedNumbers << endl;

    double largest;

    // Find the largest number
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Output the largest number
    cout << "The largest number is: " << largest << endl;

    // Check if the test has passed (expected largest number is 5)
    if (testPassed(largest, 5)) {
        cout << "Test passed!" << endl;
    } else {
        cout << "Test failed!" << endl;
    }

    return 0;
}
