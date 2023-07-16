#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:
    string name;
    int age;
    string breed;
};

class Cat
{
public:
    string name;
    char color;
    int type;
};

int main()
{
    // ########################## //
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    // ########################## //

    int pet_type;
    cout << "Enter pet type : ";
    cin >> pet_type;

    // Dynamic initilization of objects - Decided at runtime
    if (pet_type == 1)
    {
        Dog d = Dog();
        cout << "Created dog object.";
    }
    else if (pet_type == 0)
    {
        Cat c = Cat();
        cout << "Created cat object.";
    }
    else
    {
        cout << "Created no pet.";
    }

    return 0;
}
