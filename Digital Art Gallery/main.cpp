#include "Gallery.hpp"
#include "Exhibition.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    std::cout << std::fixed << std::setprecision(0);
    Artwork sunflowers("Sunflowers", "Vincent van Gogh", 1, "Oil Painting", 1200000.00);
    Artwork starryNight("Starry Night", "Leonardo da Vinci", 2, "Oil Painting", 1000000.00);
    Artwork galleryCopy = starryNight;
    Artwork artworktemp = std::move(starryNight);
    Artwork artworktemp2 = std::move(artworktemp);

    Artwork theScream("The Scream", "Edvard Munch", 3, "Oil Painting", 1500000.00);
    Artwork digitalDream("Digital Dream", "Alice Doe", 4, "Digital Painting", 1000000.00);

    Gallery gallery;
    gallery.addArtwork(std::move(sunflowers));

    Exhibition exhibition;
    exhibition.addToExhibition(&theScream);
    exhibition.addToExhibition(nullptr);
    exhibition.addToExhibition(&digitalDream);
    exhibition.showExhibition();

    for (auto artworki : exhibition.featuredArtworks) {
        if (artworki->id == 4) {
            artworki->markAsSold();
        }
    }

    return 0;
}