#include <iostream>
class Base {
public:
    virtual void display() { std::cout << "Base class\n"; }
};
class Derived : public Base {
public:
    void display() override { std::cout << "Derived class\n"; }
};
void show(Base &obj) { obj.display(); }
int main() {
    Derived derivedObj;
    show(derivedObj); // Correct, passing by reference
    return 0;
}
