#include <iostream>

class Animal
{
public:
    bool alive = true;

    void breathe()
    {
        std::cout << "I'm breathing...\n";
    }
};

class Mammal : public Animal
{
private:
    bool warm_blooded = true;

public:
    bool isWarmBlooded()
    {
        return warm_blooded;
    }
};

class Reptile : public Animal
{
private:
    bool cold_blooded = true;

public:
    bool isColdBlooded()
    {
        return cold_blooded;
    }
};

int main()
{
    Mammal mammal;
    std::cout << mammal.alive << '\n';
    mammal.breathe();
    std::cout << mammal.isWarmBlooded() << '\n';

    std::cout << '\n';
    Reptile reptile;
    std::cout << reptile.alive << '\n';
    reptile.breathe();
    std::cout << reptile.isColdBlooded() << '\n';

    // mammal.isColdBlooded(); // error: 'class Mammal' has no member named 'isColdBlooded'

    return 0;
}
