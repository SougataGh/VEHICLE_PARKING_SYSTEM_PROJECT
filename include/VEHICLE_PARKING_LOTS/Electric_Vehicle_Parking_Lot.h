#pragma once
#include "Base_Parking_Lot.h"
#include "Parkable.h"
#include "Chargeable.h"

/// <summary>
/// Class representing a parking lot specifically for electric vehicles. 
/// Inherits from Base_Parking_Lot and implements both Parkable and Chargeable interfaces.
/// </summary>
class Electric_Vehicle_Parking_Lot :
    public Base_Parking_Lot, public Parkable, public Chargeable
{
public:
    /// <summary>
    /// Constructor to initialize the electric vehicle parking lot with a specified capacity.
    /// </summary>
    /// <param name="lot_capacity">Total capacity of the electric vehicle parking lot.</param>
    Electric_Vehicle_Parking_Lot(const int& lot_capacity) : Base_Parking_Lot(lot_capacity) {}

    /// <summary>
    /// Parks an electric vehicle in the specified parking spot.
    /// </summary>
    /// <param name="vehicle">Shared pointer to the Vehicle (Electric Vehicle) to be parked.</param>
    /// <param name="index">Index of the parking spot.</param>
    void park_vehicle(std::shared_ptr<Vehicle> vehicle, const int& index) override;

    /// <summary>
    /// Charges the electric vehicle located at the specified parking spot.
    /// </summary>
    /// <param name="index">Index of the parking spot to charge the vehicle.</param>
    void charge_vehicle(const int& index) override;

    /// <summary>
    /// Removes an electric vehicle from the specified parking spot.
    /// </summary>
    /// <param name="index">Index of the parking spot to remove the vehicle from.</param>
    void remove_vehicle(const int& index) override;
};
