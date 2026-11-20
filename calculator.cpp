#include <iostream>
using namespace std;

int main() {

    double a,b;
    int choice;

    cout << "Enter a Number: ";
    cin >> a;
    cout << "Enter b Number: ";
    cin >> b;

    cout << "=== CALCULATOR ===" << endl;
    cout << "1. Addition." << endl;
    cout << "2. Subtration." << endl;
    cout << "3. Multiplication." << endl;
    cout << "4. Division." << endl;
    cout << "5. Exit..." << endl;
    cout << "Enter your Choice: " << endl;
    cin >> choice;

    switch (choice) {
        case 1:
        cout << "Result: " << a+b << endl;
        break;

        case 2:
        cout << "Result: " << a-b << endl;
        break;

        case 3:
        cout << "Result: " << a*b << endl;
        break;

        case 4:
        if (b!=0) 
        cout << "Result: " << a/b << endl;
        else
        cout << "Error: Division Not Possible" << endl;
        break;

        default:
        cout << "Invalid Choice! Please Select between 1 to 5." <<endl;

    }
    return 0;
}
