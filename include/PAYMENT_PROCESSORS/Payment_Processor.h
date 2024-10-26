#pragma once

#include "Vehicle.h"

/**
 * @class Payment_Processor
 * @brief An abstract class / Interface for processing payments for vehicles.
 */
class Payment_Processor
{
public:
    /**
     * <summary>
     * Processes the payment for the specified vehicle.
     * </summary>
     * <param name="amount"> The amount to be processed for the payment. </param>
     * <param name="vehicle"> A constant reference to the Vehicle object for which payment is being processed. </param>
     * <returns> Returns true if the payment is processed successfully, otherwise false. </returns>
     */
    virtual bool process_payment(const double& amount, const Vehicle& vehicle) const = 0;

    /**
     * <summary>
     * Virtual destructor for the Payment_Processor class.
     * </summary>
     */
    virtual ~Payment_Processor() = default;
};
