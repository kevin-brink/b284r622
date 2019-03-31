#include <iostream>
#include "odometer.hpp"

Odometer::Odometer() {
    total = 0;
}

Odometer::Odometer(int start) {
    total = start;
}

void Odometer::add(int miles) {
    total += miles;
}

void Odometer::reset() {
    total = 0;
}

int Odometer::getTotal() {
    return total;
}