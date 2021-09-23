/*
#include <iostream>
using namespace std;

class Animal {  
public:
    int age;
    Animal(int a) : age(a) {}
    Animal() {}
    void getAge() {
        cout << age << endl;
    }
};

class Dog : public Animal {
public :
    void initDog(int a) { age = a; }
    void setAge(int a) { age = a; }
};

int main() {
    Dog d;
    d.initDog(3);
    d.setAge(18);
    d.getAge();
    return 0;
}
*/