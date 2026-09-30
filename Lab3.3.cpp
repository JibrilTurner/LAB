#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int PADDING = 15;


struct cargo {
    string name;
    string destination;
    double weight;
};

double WeightCalc(cargo a, cargo b, cargo c, cargo d, string option) {
if (option == "avg") {
        return (a.weight + b.weight + c.weight + d.weight) / 4.0;
    }
    else if (option == "sum") {
        return a.weight + b.weight + c.weight + d.weight;
    }

    return 0;
}

void Header() {
    cout << left
         << setw(PADDING) << "Item Name"
         << setw(PADDING) << "Weight (kg)"
         << setw(PADDING) << "Destination";

}

void printCargo(cargo s) {
    cout << left
         << setw(PADDING) << s.name
         << setw(PADDING) << s.weight
         << setw(PADDING) << s.destination
         << endl;
}


void printReceiptHeader()
{cout << "\nCargo Manifest:\n";}
void printSeparator()
{cout << "\n-------------------------------------------\n";}

int main() {

    cargo s1 = {"HydroCells", "Mars",  120.50};
    cargo s2 = {"NanoFiber", "Venus", 85.30};
    cargo s3 = {"QuantumCores", "Mars", 200.00};
    cargo s4 = {"BioGel", "Jupiter", 45.7};

    printReceiptHeader();
    printSeparator();
    Header();
    printSeparator();
    printCargo(s1);
    printCargo(s2);
    printCargo(s3);
    printCargo(s4);

    double total = WeightCalc(s1, s2, s3, s4, "sum");
    double average = WeightCalc(s1, s2, s3, s4, "avg");

    cout << "\nTotal Weight: " << total << " kg" << endl;
    cout << "Average Weight: " << average << " kg" << endl;

    return 0;
}
