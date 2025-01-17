# Goat Management System

This repository contains a C++ implementation of a simple Goat Management System that models animal data and provides functionality for creating, modifying, and displaying information about goats. The system uses inheritance and polymorphism to manage the relationship between a base `Animal` class and a derived `Goat` class.

## Features
- **Animal Base Class**:
  - Stores general information such as weight, name, gender, and color.
  - Provides getter and setter methods for each attribute.
  - Includes a virtual `GetDescription` method for displaying animal details.

- **Goat Derived Class**:
  - Extends the `Animal` class with additional attributes such as breed, spayed status, ID, and comments.
  - Overrides the `GetDescription` method to include goat-specific information.

- **Interactive Input**:
  - Users can dynamically create goat objects by providing input for their attributes.
  - All data is stored in a `vector` for easy management.

## How It Works
1. **Animal Class**
   - Constructor initializes the basic attributes of an animal.
   - Includes methods for setting and getting attributes like weight, name, gender, and color.

2. **Goat Class**
   - Inherits from the `Animal` class and adds goat-specific attributes.
   - Provides methods for managing breed, spayed status, ID, and comments.
   - Overrides `GetDescription` to present detailed goat information.

3. **Main Program**
   - Uses a `vector` of pointers to manage `Goat` objects.
   - Iteratively prompts the user for goat data and populates the list.
   - Displays all goat details and cleans up dynamically allocated memory.

## Example Input/Output
```
What is the goat's name?
Billy
What is the goat's weight?
150
What is the goat's gender? m or f.
m
What is the goat's color?
White
What is the goat's breed?
Alpine
Is the goat spayed? yes or no.
no
What is the goat's ID? alphanumeric like HZ123X.
G1234
Any further comments?
Healthy and energetic.

Output:
Billy -- 150 lbs
Gender: m  Color: White
Breed: Alpine Spayed: no ID: G1234
Healthy and energetic.


