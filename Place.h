// Place.h
#pragma once

#include <string>

class Place {
private:
    int id;
    std::string name;

public:
    // Parameterized constructor
    Place(int id, std::string name) : id(id), name(name) {}

    // Getter for the place ID
    int getID() const {
        return id;
    }

    // Getter for the place name
    std::string getName() const {
        return name;
    }
};