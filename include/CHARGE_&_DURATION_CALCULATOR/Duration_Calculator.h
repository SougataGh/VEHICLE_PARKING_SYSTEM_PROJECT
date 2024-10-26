#pragma once

#include "Time.h"

/// <summary>
/// Duration_Calculator class provides functionality to calculate the duration 
/// between an entry time and an exit time.
/// </summary>
class Duration_Calculator {
public:
    /// <summary>
    /// Calculates the duration in minutes between the entry time and exit time.
    /// </summary>
    /// <param name="entry_time">The entry time as a Time object.</param>
    /// <param name="exit_time">The exit time as a Time object.</param>
    /// <returns>The duration in minutes.</returns>
    /// <exception std::invalid_argument>Thrown when the exit time is not after the entry time.</exception>
    double calculate_duration(const Time& entry_time, const Time& exit_time);
};
