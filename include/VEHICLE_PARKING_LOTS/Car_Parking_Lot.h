#pragma once
#include"Base_Parking_Lot.h"
#include"Parkable.h"

/// <summary>
/// Class representing a parking lot specifically for cars. 
/// Inherits from Base_Parking_Lot and implements the Parkable interface.
/// </summary>
class Car_Parking_Lot :
    public Base_Parking_Lot, public Parkable
{
public:
    /// <summary>
    /// Constructor to initialize the car parking lot with a specified capacity.
    /// </summary>
    /// <param name="lot_capacity">Total capacity of the car parking lot.</param>
    Car_Parking_Lot(const int& lot_capacity) : Base_Parking_Lot(lot_capacity) {}

    /// <summary>
    /// Parks a car in the specified parking spot.
    /// </summary>
    /// <param name="vehicle">Shared pointer to the Vehicle (Car) to be parked.</param>
    /// <param name="index">Index of the parking spot.</param>
    void park_vehicle(std::shared_ptr<Vehicle> vehicle, const int& index) override;

    /// <summary>
    /// Removes a car from the specified parking spot.
    /// </summary>
    /// <param name="index">Index of the parking spot to remove the vehicle from.</param>
    void remove_vehicle(const int& index) override;
};
