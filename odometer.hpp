#ifndef _ODOMETER_
#define _ODOMETER_

class Odometer {
    int total;
public:
    Odometer();
    Odometer(int start);
    void add(int miles);
    void reset();
    int getTotal();
};

#endif