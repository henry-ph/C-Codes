#include<iostream>

using namespace std;

class Vehicle {
public:
    Vehicle() : maxSpeed(0), weight(0){};
    void Run();
    void Stop();
protected:
    int maxSpeed;
    int weight;
};

class Bicycle: virtual public Vehicle {
public:
    Bicycle() : Vehicle(), height(0){};

protected:
    int height;
};

class Motorcar: virtual public Vehicle {
public:
    Motorcar() : Vehicle(), setNum(0){};

protected:
    int setNum;
};

class Motorcycle: public Bicycle, Motorcar {
public:
    Motorcycle() : Bicycle(), Motorcar() {
        cout << maxSpeed << endl
             << weight << endl
             << height << endl
             << setNum << endl;
    }
};

int main() {
    Motorcycle a;
    return 0;
}