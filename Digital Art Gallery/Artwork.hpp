#pragma once

#include <string>

using namespace std;

class Artwork {
public:
    std::string title;
    std::string artistName;
    int id;
    std::string medium;
    double price;
    bool sold;
    Artwork(string artTitle, string artistFullName, int artworkID, string artworkMedium, double artworkPrice);
    Artwork(const Artwork& other);
    Artwork(Artwork&& other) noexcept;

    void markAsSold();
};