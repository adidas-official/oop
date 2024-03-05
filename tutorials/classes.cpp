#include <iostream>
#include <string>
#include <vector>

class Person {
    private:
    std::string first;
    std::string last;

    public:
    Person(std::string first, std::string last) : first(first), last(last) {} // doporucene
    // Person(std::string first, std::string last) { // obycejne
    //     this->first = first;
    //     this->last = last;
    // }
    Person() = default;

    void setFirstName(std::string firstName) {
        this->first = firstName;
    }

    void setLastName(std::string lastName) {
        this->last = lastName;
    }

    void printFullName() {
        std::cout << first << " " << last << std::endl;
    };

    std::string getName() {
        return this->first;
    }

    std::string getFullName() {
        return this->first + " " + this->last;
    }

    virtual void getInfo() {
        std::cout << "name: " << getFullName() << std::endl;
    }

    static void printPeople(std::vector<Person*> people){ 
        for (auto person: people){
            person->getInfo();
        }
    }

};


class Employee : public Person {
    std::string department;

    public:
    Employee(std::string first, std::string last, std::string department): Person(first, last), department(department) {};
    std::string getDepartment() {
        return department;
    }

    void setDepartment(std::string department) {
        this->department = department;
    }

    void getInfo() override {
        std::cout << "name: " << getFullName() << std::endl;
        std::cout << "department: " << getDepartment() << std::endl;
    }
};


int main() {
    std::vector<Person*> people;
    std::string first = "dan";
    std::string last = "novak";

    Person p1(first, last);
    // p1.printFullName(); // prints `dan novak`
    // p1.getInfo();

    Employee e1("Muj", "Luj", "sales"); // sets first:MUj, last:Luj, department:sales
    // e1.printFullName(); // prints dydy megadudu
    // std::cout << e1.getDepartment() << std::endl; // prints sales

    // e1.getInfo(); // prints name: dydy megadudu \n department: sales
    // std::cout << "---------------------------------------------------" << std::endl;

    people.push_back(&p1);
    people.push_back(&e1);

    Person::printPeople(people);

    return 0;
}