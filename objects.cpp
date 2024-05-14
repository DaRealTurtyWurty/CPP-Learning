#include <iostream>

class Human
{
public:
    int age;
    int weight;
    int height;
    std::string name;

    void speak()
    {
        std::cout << "Hello, my name is " << name << ".\n";
        std::cout << "I am " << height << " inches tall.\n";
        std::cout << "I weigh " << weight << " pounds.\n";
        std::cout << "I am " << age << " years old.\n";
    }

    void eat()
    {
        std::cout << "I am eating.\n";
    }

    void sleep()
    {
        std::cout << "I am sleeping.\n";
    }
};

int main()
{
    Human human1;
    human1.age = 20;
    human1.weight = 180;
    human1.height = 72;
    human1.name = "John Doe";

    Human human2;
    human2.age = 25;
    human2.weight = 200;
    human2.height = 70;
    human2.name = "Jane Doe";

    human1.speak();
    std::cout << '\n';
    human2.speak();

    std::cout << '\n';
    human1.eat();
    std::cout << '\n';
    human2.sleep();

    return 0;
}
