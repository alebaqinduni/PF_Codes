#include <iostream>
#include <vector>
#include <string>

class Sister {
protected:
    std::string name;
    int age;
    bool isWorking;
    
public:
    Sister(std::string n, int a) : name(n), age(a), isWorking(false) {}
    
    virtual void work() {
        if (age > 10) {
            std::cout << name << " is working hard" << std::endl;
            isWorking = true;
        } else {
            std::cout << name << " is too young to work" << std::endl;
        }
    }
    
    virtual void eat() {
        std::cout << name << " is eating" << std::endl;
    }
    
    virtual void sit() {
        std::cout << name << " is sitting" << std::endl;
    }
    
    std::string getName() { return name; }
    int getAge() { return age; }
    bool getIsWorking() { return isWorking; }
};

class BigSister : public Sister {
public:
    BigSister(std::string n, int a) : Sister(n, a) {}
    
    void work() override {
        std::cout << name << " is not working, just eating and sitting" << std::endl;
        isWorking = false;
    }
    
    void eat() override {
        std::cout << name << " is eating all day" << std::endl;
    }
    
    void sit() override {
        std::cout << name << " is sitting whole day" << std::endl;
    }
};

int main() {
    std::vector<Sister*> bigSisters;
    std::vector<Sister*> littleSisters;
    
    bigSisters.push_back(new BigSister("Big Sister 1", 15));
    bigSisters.push_back(new BigSister("Big Sister 2", 16));
    
    littleSisters.push_back(new Sister("Areeba", 8));
    littleSisters.push_back(new Sister("Dania", 7));
    littleSisters.push_back(new Sister("Abrish", 6));
    
    std::cout << "Bigger sisters behavior:" << std::endl;
    for (auto sister : bigSisters) {
        sister->eat();
        sister->sit();
        sister->work();
        std::cout << std::endl;
    }
    
    std::cout << "Little sisters watching bigger sisters:" << std::endl;
    for (auto sister : littleSisters) {
        std::cout << sister->getName() << " is watching bigger sisters" << std::endl;
    }
    std::cout << std::endl;
    
    std::cout << "If other sisters work like bigger sisters:" << std::endl;
    for (auto sister : littleSisters) {
        sister->eat();
        sister->sit();
        sister->work();
        std::cout << std::endl;
    }
    
    std::cout << "But bigger sisters just eat and sit whole day:" << std::endl;
    for (auto sister : bigSisters) {
        sister->eat();
        sister->sit();
    }
    
    for (auto sister : bigSisters) {
        delete sister;
    }
    
    for (auto sister : littleSisters) {
        delete sister;
    }
    
    return 0;
}