#pragma once
#include "Payment_Processor.h"

/**
 * @class Cash_Payment_Processor derived from Payment_Processor
 * @brief A concrete class that processes cash payments for vehicles.
 */
class Cash_Payment_Processor : public Payment_Processor
{
public:
    /**
     * <summary>
     * Processes a cash payment for the specified vehicle.
     * </summary>
     * <param name="amount"> The amount being paid in cash. </param>
     * <param name="vehicle"> A constant reference to the Vehicle object for which payment is being processed. </param>
     * <returns> Returns true if the payment amount matches the vehicle's charge; otherwise, returns false. </returns>
     */
    bool process_payment(const double& amount, const Vehicle& vehicle) const override;
};
