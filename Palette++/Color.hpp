#pragma once
#include <iostream>
#include <vector>
#include "ColorUtility.hpp"

class Color {
public:
    Color();
    Color(int red, int green, int blue);

    static Color fromPackedRgb(unsigned int packedRgb);
    static Color fromHexLiteral(const char* hexString);

    int red() const { return redChannel; }
    int green() const { return greenChannel; }
    int blue() const { return blueChannel; }

    int operator[](int index) const;
    Color operator+(const Color& other) const;
    Color operator+(std::vector<int> adjustments) const;
    Color& operator++();
    Color& operator--();
    Color operator*(int scale) const;
    Color operator()(int (*transform)(int)) const;
    bool operator==(const Color& other) const;

private:
    int redChannel;
    int greenChannel;
    int blueChannel;
};

std::ostream& operator<<(std::ostream& os, const Color& color);
std::istream& operator>>(std::istream& is, Color& color);