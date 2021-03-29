#include <iostream>
using namespace std;

void introduceMe(string name, string city, int age = 0) {
    cout << "My name is " << name << endl;
    cout << "I am from " << city << endl;
    if (age!=0)
        cout << "I am " << age << " years old" <<endl;
}

int main() {
    introduceMe("Jonathan", "Prato", 23);
    introduceMe("Anna", "NY");

    string name, city;
    int age;
    cout << "Name: " << endl;
    cin >> name;
    cout << "City: " << endl;
    cin >> city;
    cout << "Age: " << endl;
    cin >> age;
    introduceMe(name,city,age);

    system("pause>0");
}
