#include "functions.hpp"
#include "DataHolder.hpp"

using namespace std;

void runToolkitDemo() {
    cout << midpoint(100, 200) << endl;
    string part1 = "chassis";
    string part2 = "engine";
    swapValues(part1, part2);
    cout << part1 << " " << part2 << endl;
    DataHolder specialNumber(2.71, 9.8, 1.618);
    cout << specialNumber.getValue() << endl;
    DataHolder<string> robotName("R2D2");
}

int main() {
    runToolkitDemo();
}