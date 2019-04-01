#include <iostream>
#include "odometer.hpp"

int main() {
    //
    //A
    Odometer car1;
    std::cout << "Car 1 milage: " << car1.getTotal() << endl;
    car1.add(500);
    std::cout << "Car 1 milage: " << car1.getTotal() << endl;
    car1.reset();
    std::cout << "Car 1 milage: " << car1.getTotal() << endl << endl;

    Odomter car2(1000);
    std::cout << "Car 2 milage: " << car2.getTotal() << endl;

    return 0;
}

//
//B