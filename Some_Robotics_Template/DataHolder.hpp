template<typename T>
class DataHolder {
private:
    T storedValue;
    T maxValue;
    T minValue;

public:
    DataHolder(T val, T max, T min) {
        if (val <= max && val >= min) storedValue = val;
        else if (val > max) {
            std::cout << "WARNING: val is too high! Setting value to max!" << std::endl;
            storedValue = max;
        } else {
            std::cout << "WARNING: val is too low! Setting value to min!" << std::endl;
            storedValue = min;
        }
    }
    void setValue(T val) {
        if (val <= maxValue && val >= minValue) storedValue = val;
        else if (val > maxValue) {
            std::cout << "WARNING: val is too high! Setting value to max!" << std::endl;
            storedValue = maxValue;
        } else {
            std::cout << "WARNING: val is too low! Setting value to min!" << std::endl;
            storedValue = minValue;
        }
    }
    T getValue() { return storedValue; }
};

template<>
class DataHolder<std::string> {
private:
    std::string storedValue;
    public:
    DataHolder(std::string val) : storedValue(val) {}
    void setValue(std::string val) { storedValue = val; }
    std::string getValue() {
        return storedValue;
    }
};