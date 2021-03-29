#include <iostream>
using std::string;

class Employee {

public:
    string Name;
    string Company;
    int Age;

    void introduceYourself() {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

};

int main() {
    Employee employee1 = Employee("Jonathan", "Firenze Web Division", 23);
    employee1.introduceYourself();

/*    employee1.Name = "Jonathan";
    employee1.Company = "Firenze Web Division";
    employee1.Age = 23;
    employee1.introduceYourself();
*/
    Employee employee2 = Employee("John", "Amazon", 33);
    employee2.introduceYourself();
/*    employee2.Name = "John";
    employee2.Company = "Amazon";
    employee2.Age = 33;
*/
}
