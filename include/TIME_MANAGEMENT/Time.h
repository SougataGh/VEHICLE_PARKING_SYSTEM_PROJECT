#pragma once

#include <iostream>
#include <stdexcept> // For exception handling

/// <summary>
/// The Time class represents a time in hours, minutes, and seconds.
/// </summary>
class Time {
private:
    int hrs;  ///< Hours component (0-23)
    int mins; ///< Minutes component (0-59)
    int secs; ///< Seconds component (0-59)

public:
    /// <summary>
    /// Default constructor that initializes time to 00:00:00.
    /// </summary>
    Time() : hrs(0), mins(0), secs(0) {}

    /// <summary>
    /// Parameterized constructor that initializes time to the given values.
    /// Throws an exception if the time values are invalid.
    /// </summary>
    /// <param name="h">The hours value (0-23).</param>
    /// <param name="m">The minutes value (0-59).</param>
    /// <param name="s">The seconds value (0-59).</param>
    Time(const int& h, const int& m, const int& s);

    /// <summary>
    /// Gets the hours component of the time.
    /// </summary>
    /// <returns>Hours value.</returns>
    int get_hours() const;

    /// <summary>
    /// Gets the minutes component of the time.
    /// </summary>
    /// <returns>Minutes value.</returns>
    int get_mins() const;

    /// <summary>
    /// Gets the seconds component of the time.
    /// </summary>
    /// <returns>Seconds value.</returns>
    int get_secs() const;

private:
    /// <summary>
    /// Validates the given time values.
    /// </summary>
    /// <param name="h">Hours value to validate.</param>
    /// <param name="m">Minutes value to validate.</param>
    /// <param name="s">Seconds value to validate.</param>
    /// <returns>True if the time values are valid, otherwise false.</returns>
    bool is_valid_time(const int& h, const int& m, const int& s) const;
};
