#include <iostream>
using namespace std;

int main() {
    // Users enters integer numbers
    // Program write out if that number is even or odd

    int number = 0;
    cout << "Please enter whole number: ";
    cin >> number;
    if (number % 2 == 0){
        cout << "You have entered even number." << endl;
    } else {
        cout << "You have entered odd number." << endl;
    }
    cout << "Thank. Bye.";

    system("pause>0");
}
