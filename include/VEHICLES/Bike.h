#pragma once
#include "Vehicle.h"

/// <summary>
/// Class representing a Bike, inheriting from Vehicle.
/// </summary>
class Bike : public Vehicle {
public:
    /// <summary>
    /// Parameterized constructor for Bike.
    /// </summary>
    /// <param name="v_name">Vehicle name.</param>
    /// <param name="n_plate">Number plate.</param>
    /// <param name="charge">Charge per minute.</param>
    /// <param name="entry_time">Entry time.</param>
    /// <param name="exit_time">Exit time.</param>
    Bike(const std::string& v_name, const std::string& n_plate, const double& charge, const Time& entry_time, const Time& exit_time)
        : Vehicle(v_name, n_plate, charge, entry_time, exit_time) {}

    /// <summary>
    /// Gets the type of the vehicle.
    /// </summary>
    /// <returns>A string indicating the type of vehicle.</returns>
    std::string get_vehicle_type() const override; // Override pure virtual function
};
