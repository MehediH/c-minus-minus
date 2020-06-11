#include <iostream>

using namespace std;

class Animal {
    private:
        int weight;
        int height;
        string name;

        static int numOfAnimals;
    
    public:
        int getWeight() { return weight; }
        int getHeight() { return height; }
        string getName() { return name; }
        void setHeight(int cm){ height = cm; }
        void setWeight(int kg){ weight = kg; }
        void setName(string newName) { name = newName; }

        Animal(int, int, string);

        ~Animal();

        Animal();

        static int getNumOfAnimals() { return numOfAnimals; }

        void toString();
};

int Animal::numOfAnimals = 0;

Animal::Animal(int height, int weight, string name){
    this->height = height;
    this->weight = weight;
    this->name = name;
    Animal::numOfAnimals++;
}

Animal::~Animal(){
    cout << "Animal " << this -> name << " destroyed" << endl;
}

Animal::Animal(){
    Animal::numOfAnimals++;
}

void Animal::toString(){
    cout << "Name: " << this -> name << endl;
    cout << "Height: " << this -> height << "cm" << endl;
    cout << "Weight: " << this -> weight << "kg" << endl;
    cout << "============" << endl;
}

class Dog : public Animal{
    private:
        string sound;
    
    public:
        string getSound() { return sound; }

        Dog(int, int, string, string);

        Dog() : Animal(){};

        void toString();
};

Dog::Dog(int height, int weight, string name, string sound) : Animal(height, weight, name){
    this -> sound = sound;
}

void Dog::toString(){
    cout << "Name: " << getName() << endl;
    cout << "Height: " << getHeight() << "cm" << endl;
    cout << "Weight: " << getWeight() << "kg" << endl;
    cout << "Sound: " << this -> sound << endl;
    cout << "============" << endl;
}

int main(){
    Animal jack;

    jack.setHeight(33);
    jack.setWeight(10);
    jack.setName("Jack");

    Animal tom(36, 15, "Tom");

    jack.toString();
    tom.toString();

    Dog star(38, 16, "Star", "Woof :3");

    star.toString();

    star.Animal::toString();

    cout << "Num of animals " << Animal::getNumOfAnimals() << endl;

    return 0;
}