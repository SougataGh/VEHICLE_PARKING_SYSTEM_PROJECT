#pragma once

#include <iostream>
#include "Base_Parking_Lot.h"

// <summary>
// Class responsible for displaying all parked vehicles in a parking lot.
// </summary>
class Show_All_Vehicles
{
public:
    // <summary>
    // Displays all vehicles parked in the specified parking lot.
    // </summary>
    // <param name="base_parking_lot"> The parking lot to retrieve vehicle information from. </param>
    void display_all_vehicles(const Base_Parking_Lot& base_parking_lot);
};
