#include <bits/stdc++.h>
#include <stdexcept>
using namespace std;

class Animal{
    public:
    string title;
    Animal(string title){
        this->title = title;
    }

    virtual string speak(){
        return "Sounds good";
    }
};

class Dog: public Animal{
    public:
    Dog(string title) : Animal(title) {
    }
    string speak() override{
        return "Woof";
    }
};

int main(){
    Dog dog("hehe");
    cout << dog.speak() << endl;
}