#include "Electric_Vehicle_Parking_Lot.h"

// Parks an electric vehicle in the specified parking spot.
// <param name="vehicle"> Shared pointer to the Vehicle (Electric Vehicle) to be parked. </param>
// <param name="index"> Index of the parking spot where the electric vehicle will be parked. </param>
void Electric_Vehicle_Parking_Lot::park_vehicle(std::shared_ptr<Vehicle> vehicle, const int& index)
{
    std::cout << "Parking EV at index : " << index << std::endl;

    // Call the base class method to park the vehicle at the specified index.
    Base_Parking_Lot::park_vehicle(vehicle, index);

    std::cout << "EV : " << vehicle->get_vehicle_name() << " Parked successfully" << std::endl;
}

// Charges the electric vehicle at the specified parking spot.
// <param name="index"> Index of the parking spot where the electric vehicle is parked. </param>
void Electric_Vehicle_Parking_Lot::charge_vehicle(const int& index) {
    // Check if the index is valid and if there is a vehicle parked at that index.
    if (index >= 0 && index < capacity && this->parked_vehicles[index]) {
        std::cout << "Charging vehicle at spot " << index << "." << std::endl;
    }
    else {
        std::cerr << "No electric vehicle at spot " << index << " to charge!" << std::endl;
    }
}

// Removes an electric vehicle from the specified parking spot.
// <param name="index"> Index of the parking spot to remove the electric vehicle from. </param>
void Electric_Vehicle_Parking_Lot::remove_vehicle(const int& index)
{
    std::cout << "Removing EV : " << std::endl;

    // Call the base class method to remove the vehicle from the specified index.
    Base_Parking_Lot::remove_vehicle(index);
}
