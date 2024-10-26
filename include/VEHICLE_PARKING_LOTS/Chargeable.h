#pragma once
#include<iostream>

/// <summary>
/// Interface for charging functionality for vehicles. 
/// Classes implementing this interface must define methods to charge vehicles.
/// </summary>
class Chargeable
{
public:
    /// <summary>
    /// Charges the vehicle located at the specified parking spot.
    /// </summary>
    /// <param name="index">Index of the parking spot to charge the vehicle.</param>
    virtual void charge_vehicle(const int& index) = 0;

    /// <summary>
    /// Virtual destructor for proper cleanup of derived classes.
    /// </summary>
    virtual ~Chargeable() = default;
};
