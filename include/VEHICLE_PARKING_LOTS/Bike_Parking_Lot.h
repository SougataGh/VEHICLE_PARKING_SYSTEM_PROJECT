#pragma once
#include "Base_Parking_Lot.h"
#include "Parkable.h"
#include "Helmet_Storage.h"

/// <summary>
/// Represents a bike parking lot, capable of parking vehicles and storing helmets.
/// Inherits from Base_Parking_Lot and implements Parkable and Helmet_Storage interfaces.
/// </summary>
class Bike_Parking_Lot : public Base_Parking_Lot, public Parkable, public Helmet_Storage
{
public:
    /// <summary>
    /// Constructor for Bike_Parking_Lot that initializes the parking lot with the specified capacity.
    /// </summary>
    /// <param name="lot_capacity">The capacity of the parking lot.</param>
    Bike_Parking_Lot(const int& lot_capacity) : Base_Parking_Lot(lot_capacity) {}

    /// <summary>
    /// Parks a vehicle in the specified index of the parking lot.
    /// </summary>
    /// <param name="vehicle">A shared pointer to the vehicle to be parked.</param>
    /// <param name="index">The index where the vehicle should be parked.</param>
    void park_vehicle(std::shared_ptr<Vehicle> vehicle, const int& index) override;

    /// <summary>
    /// Removes a vehicle from the specified index of the parking lot.
    /// </summary>
    /// <param name="index">The index from which the vehicle should be removed.</param>
    void remove_vehicle(const int& index) override;

    /// <summary>
    /// Stores a helmet associated with the vehicle at the specified index.
    /// </summary>
    /// <param name="index">The index where the helmet should be stored.</param>
    void store_helmet(const int& index) override;
};
