#include <iostream>

using namespace std;

class Car
{
public:
    int price;
    int model;
    string name;
};

void printCar(Car *car)
{
    car->model = 2011;
    cout << car->model << endl;
}

int main()
{
    Car car1;
    Car *car2;
    car1.model = 2010;
    car1.price = 100000;
    car1.name = "BMW";
    printCar(&car1);
    cout << car1.model << endl;
}