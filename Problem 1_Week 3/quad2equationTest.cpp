#include <iostream>
#include <cmath> // for the sqrt function

using namespace std;

// Function to test if the discriminant results in correct conditions
bool testPassed(double discriminant) {
    if (discriminant > 0) {
        cout << "Test Passed: Two distinct real roots expected (discriminant > 0)" << endl;
        return true;
    } else if (discriminant == 0) {
        cout << "Test Passed: Two equal real roots expected (discriminant = 0)" << endl;
        return true;
    } else {
        cout << "Test Passed: Complex roots expected (discriminant < 0)" << endl;
        return true;
    }
}

int main() {
    // Set coefficients a = 4, b = 5, c = 6
    double a = 4, b = 5, c = 6;

    // Output the coefficients being used
    cout << "Coefficients are set as a = " << a << ", b = " << b << ", c = " << c << endl;

    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;

    // Check the value of the discriminant and calculate the roots accordingly
    if (discriminant > 0) {
        // Two distinct real roots
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "\nThe equation has two distinct real roots: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (discriminant == 0) {
        // Two real roots that are equal
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        cout << "\nThe equation has two equal real roots: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x1 << endl;
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "\nThe equation has no real roots (complex roots): " << endl;
        cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    // Check if the test passes
    if (testPassed(discriminant)) {
        cout << "\nTest Passed: Discriminant and roots calculated correctly." << endl;
    } else {
        cout << "\nTest Failed: Discriminant did not match the expected condition." << endl;
    }

    return 0;
}
