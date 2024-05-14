#include <iostream>

class Student
{
public:
    int age;
    int weight;
    int height;
    std::string name;

    Student(int age, int weight, int height, std::string name)
    {
        this->age = age;
        this->weight = weight;
        this->height = height;
        this->name = name;
    }
};

int main()
{
    Student student1(20, 180, 72, "John Doe");
    Student student2(25, 200, 70, "Jane Doe");

    std::cout << "Student 1:\n";
    std::cout << "Age: " << student1.age << '\n';
    std::cout << "Weight: " << student1.weight << '\n';
    std::cout << "Height: " << student1.height << '\n';
    std::cout << "Name: " << student1.name << '\n';

    std::cout << "\n\nStudent 2:\n";
    std::cout << "Age: " << student2.age << '\n';
    std::cout << "Weight: " << student2.weight << '\n';
    std::cout << "Height: " << student2.height << '\n';
    std::cout << "Name: " << student2.name << '\n';

    return 0;
}
