#pragma once

#include "Base_Parking_Lot.h"

/**
 * @class Show_Vacant_Places
 * @brief Class responsible for displaying vacant parking places in a parking lot.
 */
class Show_Vacant_Places
{
public:
    /**
     * <summary>
     * Displays all vacant parking places in the specified parking lot.
     * </summary>
     * <param name="base_parking_lot"> A constant reference to the Base_Parking_Lot object. </param>
     */
    void display_vacant_places(const Base_Parking_Lot& base_parking_lot) const;
};
