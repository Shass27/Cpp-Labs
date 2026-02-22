#include "Artwork.hpp"
#include <iostream>

using namespace std;

Artwork::Artwork(string artTitle, string artistFullName, int artworkID, string artworkMedium, double artworkPrice) :
title(artTitle), artistName(artistFullName), id(artworkID), medium(artworkMedium), price(artworkPrice), sold(false) {}

Artwork::Artwork(const Artwork &other) {
    title = other.title;
    artistName = other.artistName;
    id = other.id;
    medium = other.medium;
    price = other.price;
    sold = other.sold;
}

Artwork::Artwork(Artwork &&other) noexcept {
    title = std::move(other.title);
    artistName = std::move(other.artistName);
    id = other.id;
    medium = std::move(other.medium);
    price = other.price;
    sold = other.sold;

    other.title = "";
    other.artistName = "";
    other.medium = "";
    other.id = 0;
    other.price = 0.0;
    other.sold = false;
}

void Artwork::markAsSold() {
    sold = true;
}
