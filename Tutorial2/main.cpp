#include <iostream>
using namespace std;

int main() {
    float annualSalary = 0; // floating point number
    cout << "Please enter your annual salary: " << endl;
    cin >> annualSalary;
    float monthSalary = annualSalary / 12;
    cout << "Your monthly salary is " << monthSalary << endl;
    cout << "In 10 years you will earn " << annualSalary * 10 << endl;

    char character = 'a'; // for characters use single quotation
    float firstSecondThird = 0; // example of camelCase

     // Data type
    int yearOfBirth = 1995;
    char gender = 'f';
    bool isOlderThan18 = true;
    float averageGrad = 4.5;
    double balance = 45678945856;

    cout << "Size of int is " << sizeof(int) << " bytes\n";
    cout << "Int min value is " << INT32_MIN << endl;
    cout << "Int max value is " << INT32_MAX << endl;
    cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes\n";
    cout << "UInt max value is " << UINT32_MAX << endl;
    cout << "Size of bool is " << sizeof(bool) << " bytes\n";
    cout << "Size of char is " << sizeof(bool) << " bytes\n";
    cout << "Size of float is " << sizeof(bool) << " bytes\n";
    cout << "Size of double is " << sizeof(bool) << " bytes\n";

    // An example of overflow
    int intMax = INT32_MIN;
    cout << intMax << endl;
    cout << intMax + 1;

    system("pause>0");
}
