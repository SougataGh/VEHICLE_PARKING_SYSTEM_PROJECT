#pragma once
#include "Vehicle.h"

/// <summary>
/// Charge_Calculator class provides functionality to calculate the charge 
/// for a vehicle based on its duration and charge per minute.
/// </summary>
class Charge_Calculator {
public:
    /// <summary>
    /// Calculates the total charge for a vehicle.
    /// </summary>
    /// <param name="vehicle">The vehicle object.</param>
    /// <returns>The total charge for the vehicle.</returns>
    /// <exception std::invalid_argument>Thrown when charge per minute or duration is not positive.</exception>
    double calculate_charge(const Vehicle&);
};
