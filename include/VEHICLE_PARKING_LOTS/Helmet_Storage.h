#pragma once
#include <iostream>

// <summary>
// Abstract class representing a storage system for helmets.
// </summary>
class Helmet_Storage
{
public:
    // <summary>
    // Stores a helmet at the specified index.
    // </summary>
    // <param name="index"> The index where the helmet will be stored. </param>
    virtual void store_helmet(const int& index) = 0;

    // <summary>
    // Virtual destructor for cleanup in derived classes.
    // </summary>
    virtual ~Helmet_Storage() = default;
};
