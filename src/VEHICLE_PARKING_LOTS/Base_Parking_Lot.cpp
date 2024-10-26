#include<iostream>
#include<vector>
#include <stdexcept>
#include<memory>
#include "Base_Parking_Lot.h"
#include"Show_Vacant_Places.h"
#include"Show_All_Vehicles.h"

// Gets the total capacity of the parking lot.
// <returns> The total number of parking spots in the lot. </returns>
int Base_Parking_Lot::get_capacity() const
{
    return this->capacity;
}

// Gets the list of parked vehicles in the parking lot.
// <returns> A vector of shared pointers to the parked vehicles. </returns>
std::vector<std::shared_ptr<Vehicle>> Base_Parking_Lot::get_parked_vehicles() const
{
    return this->parked_vehicles;
}

// Parks a vehicle in the specified parking spot.
// <param name="vehicle"> Shared pointer to the Vehicle to be parked. </param>
// <param name="index"> Index of the parking spot where the vehicle will be parked. </param>
// <exception cref="std::out_of_range"> Thrown if the parking spot index is invalid. </exception>
// <exception cref="std::runtime_error"> Thrown if the parking spot is already occupied. </exception>
void Base_Parking_Lot::park_vehicle(std::shared_ptr<Vehicle> vehicle, const int& index)
{
    if (index < 0 || index >= capacity) {
        throw std::out_of_range("Invalid parking spot index.");
    }
    if (parked_vehicles[index]) {
        throw std::runtime_error("Spot is already occupied!");
    }
    parked_vehicles[index] = std::move(vehicle);
    std::cout << "Vehicle parked at spot " << index << "." << std::endl;
}

// Removes a vehicle from the specified parking spot.
// <param name="index"> Index of the parking spot to remove the vehicle from. </param>
// <exception cref="std::out_of_range"> Thrown if the parking spot index is invalid. </exception>
// <exception cref="std::runtime_error"> Thrown if no vehicle is found at the specified index. </exception>
void Base_Parking_Lot::remove_vehicle(const int& index)
{
    if (index < 0 || index >= capacity) {
        throw std::out_of_range("Invalid parking spot index.");
    }
    if (!parked_vehicles[index]) {
        throw std::runtime_error("No vehicle found at the specified index.");
    }
    parked_vehicles[index].reset();
    std::cout << "Vehicle removed from spot " << index << "." << std::endl;
}

// Displays all parked vehicles in the parking lot.
// <exception cref="std::runtime_error"> Thrown if an error occurs while displaying vehicles. </exception>
void Base_Parking_Lot::display_parked_vehicles() const
{
    Show_All_Vehicles show_all_vehicles;
    show_all_vehicles.display_all_vehicles(*this);
}

// Displays all vacant parking places in the parking lot.
// <exception cref="std::runtime_error"> Thrown if an error occurs while displaying vacant places. </exception>
void Base_Parking_Lot::display_vacant_places() const
{
    Show_Vacant_Places show_vacant_places;
    show_vacant_places.display_vacant_places(*this);
}
