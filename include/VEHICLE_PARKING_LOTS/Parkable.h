#pragma once
#include<iostream>
#include<memory>

/// <summary>
/// Interface for parking functionality. 
/// Classes implementing this interface must define methods to park and remove vehicles.
/// </summary>
class Parkable
{
public:
    /// <summary>
    /// Parks a vehicle in the specified parking spot.
    /// </summary>
    /// <param name="vehicle">Shared pointer to the Vehicle to be parked.</param>
    /// <param name="index">Index of the parking spot.</param>
    virtual void park_vehicle(std::shared_ptr<Vehicle> vehicle, const int& index) = 0;

    /// <summary>
    /// Removes a vehicle from the specified parking spot.
    /// </summary>
    /// <param name="index">Index of the parking spot to remove the vehicle from.</param>
    virtual void remove_vehicle(const int& index) = 0;

    /// <summary>
    /// Virtual destructor for proper cleanup of derived classes.
    /// </summary>
    virtual ~Parkable() = default;
};
