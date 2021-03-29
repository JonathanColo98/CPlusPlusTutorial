#include <iostream>
using std::string;


class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee {

private:
    string Company;
    int Age;

protected:
    string Name;

public:
    void setName(string name) {
        Name = name;
    }

    string getName() {
        return Name;
    }

    void setCompany(string company) {
        Company = company;
    }

    string getCompany() {
        return Company;
    }

    void setAge(int age) {
        if (age >= 18)
            Age = age;
    }

    int getAge() {
        return Age;
    }

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

    void AskForPromotion() {
        if (Age > 30)
            std::cout << Name << " got promoted!" << std::endl;
        else
            std::cout << Name << ", sorry NO promotion for you!" << std::endl;
    }

    virtual void work() {
        std::cout << Name << " is checking email, task backlog, performing tasks..." << std::endl;
    }

};

class Developer : public Employee {
public:
    string FavProgrammingLanguage;

    Developer(string name, string company, int age, string favProgrammingLanguage) :Employee(name,company,age) {
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    void fixBug() {
        std::cout << Name << " fixed bug using " << FavProgrammingLanguage << std::endl;
    }

    void work() {
        std::cout << Name << " is writing " << FavProgrammingLanguage << std::endl;
    }

};

class Teacher : public Employee {

public:
    string Subject;

    Teacher(string name, string company, int age, string subject)
            :Employee(name, company, age) {
        Subject = subject;
    }

    void prepareLesson() {
        std::cout << Name << " is preparing " << Subject << " lesson" << std::endl;
    }

    void work() {
        std::cout << Name << " is teaching " << Subject << std::endl;
    }

};

int main() {
    /*
     * The most common use of polymorphism is when a parent class reference
     * is used to refer to a child class object
     */

    Developer d = Developer("John", "YT-John", 23, "C++");
    Teacher t = Teacher("Jack", "Cool School", 35, "History");
    Employee *e1 = &d;
    Employee *e2 = &t;

    e1 -> work();
    e2 -> work();

}
