#include <iostream>

// Define a class called "Person"
class Person {
private:
    std::string name;
    int age;

public:
    // Constructor to initialize the object
    Person(std::string n, int a) : name(n), age(a) {}

    // Member function to display information about the person
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << " years" << std::endl;
    }
};

int main() {
    // Create objects of the Person class
    Person person1("Alice", 30);
    Person person2("Bob", 25);

    // Call member functions on the objects
    std::cout << "Person 1:-" << std::endl;
    person1.displayInfo();

    std::cout << "\nPerson 2:-" << std::endl;
    person2.displayInfo();

    return 0;
}

