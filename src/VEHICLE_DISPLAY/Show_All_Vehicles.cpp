#include "Show_All_Vehicles.h"
#include"Base_Parking_Lot.h"

#include<iostream>

void Show_All_Vehicles::display_all_vehicles(const Base_Parking_Lot& base_parking_lot)
{
    auto parked_vehicles = base_parking_lot.get_parked_vehicles(); // Retrieve the list of parked vehicles.
    size_t index = 0; // Initialize an index for displaying spot numbers.

    // Iterate through each parked vehicle using a range-based for loop with auto
    for (const auto& vehicle : parked_vehicles) {
        std::cout << "Spot " << index << ": "; // Display spot index.
        if (vehicle) {
            std::cout << *vehicle << std::endl; // Display vehicle details if it exists.
        }
        else {
            std::cout << "Empty" << std::endl; // Indicate that the spot is empty.
        }
        index++; // Increment the index for the next spot.
    }
}
