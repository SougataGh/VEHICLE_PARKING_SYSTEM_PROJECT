#pragma once

#include "Car_Parking_Lot.h"
#include "Bike_Parking_Lot.h"
#include "Electric_Vehicle_Parking_Lot.h"

/**
 * WRAPPER CLASS
 * @class Vehicle_Parking_Manager
 * @brief A class that manages the parking of vehicles in a car parking lot.
 */
class Vehicle_Parking_Manager
{
    Car_Parking_Lot car_parking_lot; ///< The car parking lot managed by this class.

public:
    /**
     * <summary>
     * Constructs a Vehicle_Parking_Manager with the specified capacity.
     * </summary>
     * <param name="capacity"> The capacity of the car parking lot. </param>
     */
    Vehicle_Parking_Manager(const int& capacity) : car_parking_lot(capacity) {}

    /**
     * <summary>
     * Displays the capacity of the parking lot.
     * </summary>
     */
    void show_lot_capacity() const;

    /**
     * <summary>
     * Collects vehicle information from the user and parks the vehicle in the parking lot.
     * </summary>
     */
    void get_and_park_vehicle();

    /**
     * <summary>
     * Collects information to unpark a vehicle from the parking lot.
     * </summary>
     */
    void get_and_unpark_vehicle();

    /**
     * <summary>
     * Displays all vehicles currently parked in the parking lot.
     * </summary>
     */
    void show_all_vehicles() const;

    /**
     * <summary>
     * Displays all unoccupied places in the parking lot.
     * </summary>
     */
    void show_not_ocuupied_places() const;

private:
    /**
     * <summary>
     * Clears the input buffer to avoid issues with input.
     * </summary>
     */
    void clear_input_buffer() const;
};
