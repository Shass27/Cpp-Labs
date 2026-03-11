#include "Color.hpp"
#include <iomanip>

Color::Color() : redChannel(0), greenChannel(0), blueChannel(0) {}

Color::Color(int red, int green, int blue) {
    redChannel   = CLIP(red);
    greenChannel = CLIP(green);
    blueChannel  = CLIP(blue);
}

Color Color::fromPackedRgb(unsigned int packedRgb) {
    return Color(int((packedRgb >> 16) & 0xffu),
           int((packedRgb >> 8)  & 0xffu),
           int( packedRgb      & 0xffu));
}

Color Color::fromHexLiteral(const char* hexString) {
    if (!hexString || hexString[0] != '#') {
        throw std::invalid_argument("hex literal must start with #");
    }
    int digits[6];
    for (int i = 0; i < 6; ++i) {
        int val = ColorUtility::fromHexDigit(hexString[i + 1]);
        if (val < 0) {
            throw std::invalid_argument("invalid hex digit");
        }
        digits[i] = val;
    }
    return Color(digits[0]*16 + digits[1],
           digits[2]*16 + digits[3],
           digits[4]*16 + digits[5]);
}

int Color::operator[](int index) const {
    if (index==0) return redChannel;
    else if (index==1) return greenChannel;
    else if (index==2) return blueChannel;
    else throw std::out_of_range("Color Index");
}

Color Color::operator+(const Color& other) const {
    return Color((redChannel + other.redChannel)/2, greenChannel + other.greenChannel/2, blueChannel + other.blueChannel/2);
}

Color Color::operator+(std::vector<int> adjustments) const {
    int newRedChannel = redChannel + (adjustments.size() > 0 ? adjustments[0] : 0);
    int newGreenChannel = greenChannel + (adjustments.size() > 1 ? adjustments[1] : 0);
    int newBlueChannel = blueChannel + (adjustments.size() > 2 ? adjustments[2] : 0);
    return Color(CLIP(newRedChannel), CLIP(newGreenChannel), CLIP(newBlueChannel));
}

Color& Color::operator++() {
    redChannel = CLIP(redChannel + 1);
    greenChannel = CLIP(greenChannel + 1);
    blueChannel = CLIP(blueChannel + 1);
    return *this;
}

Color& Color::operator--() {
    redChannel = CLIP(redChannel - 1);
    greenChannel = CLIP(greenChannel - 1);
    blueChannel = CLIP(blueChannel - 1);
    return *this;
}

Color Color::operator*(int scale) const {
    int newRedChannel = CLIP(redChannel * scale);
    int newGreenChannel = CLIP(greenChannel * scale);
    int newBlueChannel = CLIP(blueChannel * scale);
    return Color(newRedChannel, newGreenChannel, newBlueChannel);
}

Color Color::operator()(int (*transform)(int)) const {
    int newRedChannel = CLIP(transform(redChannel));
    int newGreenChannel = CLIP(transform(greenChannel));
    int newBlueChannel = CLIP(transform(blueChannel));
    return Color(newRedChannel, newGreenChannel, newBlueChannel);
}

bool Color::operator==(const Color& other) const {
    return redChannel == other.redChannel && greenChannel == other.greenChannel && blueChannel == other.blueChannel;
}

std::ostream& operator<<(std::ostream& os, const Color& color) {
    os << '#' << std::hex << std::setfill('0') << std::setw(2) << color.red()
           << std::setw(2) << color.green()
           << std::setw(2) << color.blue() << std::dec;
    return os;
}

std::istream& operator>>(std::istream& is, Color& color) {
    std::string token;
    is >> token;
    color = Color::fromHexLiteral(token.c_str());
    return is;
}