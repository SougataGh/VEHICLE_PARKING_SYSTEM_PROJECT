#include "Car_Parking_Lot.h"

// Parks a car in the specified parking spot.
// <param name="vehicle"> Shared pointer to the Vehicle (Car) to be parked. </param>
// <param name="index"> Index of the parking spot where the car will be parked. </param>
void Car_Parking_Lot::park_vehicle(std::shared_ptr<Vehicle> vehicle, const int& index)
{
    std::cout << "Parking Car at index : " << index << std::endl;

    // Call the base class method to park the vehicle at the specified index.
    Base_Parking_Lot::park_vehicle(vehicle, index);

    std::cout << "Car : " << vehicle->get_vehicle_name() << " Parked successfully" << std::endl;
}

// Removes a car from the specified parking spot.
// <param name="index"> Index of the parking spot to remove the car from. </param>
void Car_Parking_Lot::remove_vehicle(const int& index)
{
    std::cout << "Removing Car : " << std::endl;

    // Call the base class method to remove the vehicle from the specified index.
    Base_Parking_Lot::remove_vehicle(index);
}
