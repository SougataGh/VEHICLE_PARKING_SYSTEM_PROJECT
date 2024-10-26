#include "Show_Vacant_Places.h"
#include "Base_Parking_Lot.h"
#include <iostream>

/**
 * <summary>
 * Displays all vacant parking places in the specified parking lot.
 * </summary>
 * <param name="base_parking_lot"> A constant reference to the Base_Parking_Lot object. </param>
 *
 * This method retrieves the parked vehicles from the parking lot, checks for vacant spots,
 * and displays their indices.
 */
void Show_Vacant_Places::display_vacant_places(const Base_Parking_Lot& base_parking_lot) const
{
    // Retrieve the list of parked vehicles and the parking lot capacity.
    auto parked_vehicles = base_parking_lot.get_parked_vehicles();
    int capacity = base_parking_lot.get_capacity();

    std::cout << "Vacant places: " << std::endl;

    // Iterate through the parking spots and display vacant ones.
    for (int i = 0; i < capacity; ++i) {
        if (!parked_vehicles[i]) {
            std::cout << "Spot " << i << ": Empty" << std::endl; // Display empty spots.
        }
    }
}
