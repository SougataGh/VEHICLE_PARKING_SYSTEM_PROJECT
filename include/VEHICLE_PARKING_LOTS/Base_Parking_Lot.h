#pragma once
#include<iostream>
#include<memory>
#include<vector>
#include"Vehicle.h"

/// <summary>
/// Base class representing a parking lot. 
/// It manages the parked vehicles and provides methods to park, remove, and display vehicles.
/// </summary>
class Base_Parking_Lot
{
protected:
    std::vector<std::shared_ptr<Vehicle>> parked_vehicles; ///< Vector to hold parked vehicles.
    int capacity; ///< Total capacity of the parking lot.

public:
    /// <summary>
    /// Constructor to initialize the parking lot with a specified capacity.
    /// </summary>
    /// <param name="lot_capacity">Total capacity of the parking lot.</param>
    Base_Parking_Lot(const int& lot_capacity) : capacity(lot_capacity), parked_vehicles(lot_capacity, nullptr) {}

    /// <summary>
    /// Gets the total capacity of the parking lot.
    /// </summary>
    /// <returns>The total number of parking spots in the lot.</returns>
    virtual int get_capacity() const;

    /// <summary>
    /// Gets the list of parked vehicles.
    /// </summary>
    /// <returns>A vector of shared pointers to the parked vehicles.</returns>
    virtual std::vector<std::shared_ptr<Vehicle>> get_parked_vehicles() const;

    /// <summary>
    /// Displays all parked vehicles in the parking lot.
    /// </summary>
    virtual void display_parked_vehicles() const;

    /// <summary>
    /// Parks a vehicle in the specified parking spot.
    /// </summary>
    /// <param name="vehicle">Shared pointer to the Vehicle to be parked.</param>
    /// <param name="index">Index of the parking spot.</param>
    virtual void park_vehicle(std::shared_ptr<Vehicle> vehicle, const int& index);

    /// <summary>
    /// Removes a vehicle from the specified parking spot.
    /// </summary>
    /// <param name="index">Index of the parking spot to remove the vehicle from.</param>
    virtual void remove_vehicle(const int& index);

    /// <summary>
    /// Displays all vacant parking places in the parking lot.
    /// </summary>
    virtual void display_vacant_places() const;

    /// <summary>
    /// Virtual destructor for proper cleanup of derived classes.
    /// </summary>
    virtual ~Base_Parking_Lot() = default;
};
