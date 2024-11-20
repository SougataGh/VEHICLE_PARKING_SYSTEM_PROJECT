# VEHICLE_PARKING_SYSTEM_PROJECT
## Overview
The Vehicle Parking System is a C++ application designed to manage the parking of different types of vehicles, including cars and bikes. This system provides functionalities such as parking, unparking vehicles, processing payments, and displaying parked vehicles and vacant places.

## Features
- **Park Vehicles**: Ability to park cars and bikes in designated spots.
- **Unpark Vehicles**: Remove vehicles from the parking lot after processing payment.
- **Payment Processing**: Supports cash payments for parking fees.
- **Display Parked Vehicles**: View all vehicles currently parked in the lot.
- **Show Vacant Places**: List all available parking spots.
- **Helmet Storage**: Special feature for bike parking that allows storing helmets.

## Technologies Used
- C++
- Object-Oriented Programming (OOP)
- Standard Template Library (STL)
## Structure
The project is structured into several classes that follow the Single Responsibility Principle (SRP) and use various design patterns:

- **Base_Parking_Lot**: Abstract base class defining common functionalities for parking lots.
- **Car_Parking_Lot**: Derived class for managing car parking.
- **Bike_Parking_Lot**: Derived class for managing bike parking, including helmet storage.
- **Electric_Vehicle_Parking_Lot**: Derived class specifically for managing electric vehicle parking.
- **Payment_Processor**: Abstract base class for payment processing.
- **Cash_Payment_Processor**: Concrete implementation of cash payment processing.
- **Card_Payment_Processor**: Concrete implementation of card payment processing.
- **Vehicle_Parking_Manager**: Manages user interactions and overall parking operations.
- **Vehicle**: Represents a generic vehicle with properties like name, plate number, and charges.
- **Car**: Represents a car with specific attributes, inheriting from the Vehicle class.
- **Bike**: Represents a bike with attributes inherited from the Vehicle class.
- **Show_Vacant_Places**: Displays the vacant spots in the parking lot.
- **Show_All_Vehicles**: Displays all vehicles currently parked in the parking lot.
- **Charge_Calculator**: Calculates charges based on time and vehicle type.
- **Duration_Calculator**: Calculates the duration for which a vehicle has been parked.
- **Parkable**: Interface that provides methods for parking and removing vehicles.
- **Helmet_Storage**: Interface for managing helmet storage related to bike parking.
- **Chargeable**: Interface for charging functionality for vehicles.
- **Time**: Represents time with hour, minute, and second attributes, used for tracking entry and exit times of vehicles.
