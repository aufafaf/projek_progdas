#pragma once
#define BOOKING_H 

#include <string>
#include "Car.h"
#include "Customer.h"


class Booking: public Customer, public Car
{
private:
    string bookingID;
    
public:
    Booking(/* args */);
    ~Booking();
    
    static void bookCar(int bookedCarID, int custID);
    static int calculateCost(int bookedCarID, int custID);
    static void payCar(int bookedCarID, int custID, int totalPrice); 
    static void printReceipt(int bookedCarID, int custID, int totalPrice);
};
