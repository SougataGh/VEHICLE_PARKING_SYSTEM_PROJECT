#pragma once
#include <string>
#include "Time.h"

/// <summary>
/// Abstract base class representing a vehicle.
/// </summary>
class Vehicle {
    static int vehicle_counts; ///< Tracks the number of vehicles in the slot

protected:
    std::string vehicle_name; ///< Name of the vehicle
    std::string number_plate; ///< Number plate of the vehicle
    Time entry_time; ///< Entry time of the vehicle
    Time exit_time; ///< Exit time of the vehicle
    double charge_per_minute; ///< Charge per minute for the vehicle

public:
    Vehicle(); // Default constructor
    Vehicle(const std::string& v_name, const std::string& n_plate, const double& charge, const Time& entry_t, const Time& exit_t); // Parameterized constructor

    /// <summary>
    /// Pure virtual function to get the type of vehicle.
    /// </summary>
    /// <returns>A string representing the type of vehicle.</returns>
    virtual std::string get_vehicle_type() const = 0;

    virtual std::string get_vehicle_name() const; // Getter for vehicle name
    virtual std::string get_plate_number() const; // Getter for plate number
    virtual double get_charge_per_min() const; // Getter for charge per minute
    virtual double get_vehicle_duration() const; // Calculates vehicle duration
    virtual double get_total_charge() const; // Calculates total charge

    /// <summary>
    /// Static method to get the total count of vehicles.
    /// </summary>
    /// <returns>The number of vehicles currently in the slot.</returns>
    static int get_vehicle_counts();

    /// <summary>
    /// Overloaded output operator for vehicle information.
    /// </summary>
    /// <param name="cout">The output stream.</param>
    /// <param name="vehicle">The vehicle object to output.</param>
    /// <returns>The output stream after insertion.</returns>
    friend std::ostream& operator<<(std::ostream&, const Vehicle&);

    virtual ~Vehicle(); // Destructor
};

