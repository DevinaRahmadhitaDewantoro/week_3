#include <iostream>
#include <cmath> // for the sqrt function 

using namespace std;

int main(){

    // declare variables for coefficients of a, b, c
    double a, b, c ;

    // prompt the user to input for coefficients a, b, c
    cout << "Enter the coefficient a: ";
    cin >> a;

    cout << "Enter the coefficient b: ";
    cin >> b;

    cout << "Enter the coefficient c: ";
    cin >> c;

    // calculate the discriminant 
    double discriminant = b * b - 4 * a * c;

    // check the value of the discriminant and calculate the roots accordingly
    if (discriminant > 0){
        //two distinct real roots
        double x1 = (-b  + sqrt(discriminant)) / (2 * a);
        double x2 = (-b  - sqrt(discriminant)) / (2 * a);
        cout << "\nThe equation has two distinct real roots: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (discriminant == 0){
        // two real roots and equal
        cout << "\nThe equation has two real roots and equal: " << endl;
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        cout <<"x1 = "<< x1 << endl;
        cout <<"x2 = "<< x1 << endl;
        
    } else {
        // complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "\nThe equation has no real roots (complex roots): " << endl;
        cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
} 