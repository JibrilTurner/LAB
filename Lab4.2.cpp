#include <iostream>
#include <string>
using namespace std;

string possibleNames[] = {
    "Stormcaller Hood",
    "Chrono Cap",
    "Shadow Veil",
    "Flame Crown",
    "Nature Antlers",
    "Generic Wizard Hat"
};

void collectInput(string answer[]) {
    cout << "Do you prefer day or night? ";
    cin >> answer[0];

    while (answer[0] != "day" && answer[0] != "night") {
        cout << "Invalid Input. Please enter day or night: ";
        cin >> answer[0];
    }


    cout << "Do you work best alone or in a team? ";
    cin >> answer[1];

    while (answer[1] != "alone" && answer[1] != "team") {
        cout << "Invalid Input. Please enter alone or team: ";
        cin >> answer[1];
    }


    cout << "Which element do you feel most connected to? ";
    cout << "air, water, earth, shadow, or fire? ";
    cin >> answer[2];

    while (answer[2] != "air" &&
           answer[2] != "water" &&
           answer[2] != "earth" &&
           answer[2] != "shadow" &&
           answer[2] != "fire") {

        cout << "Invalid Input. Please enter air, water, earth, "
             << "nature, or fire: ";

        cin >> answer[2];
    }



    cout << "Which value do you identify with? ";
    cout << "power or knowledge or stealth? ";
    cin >> answer[3];

    while (answer[3] != "power" &&
           answer[3] != "knowledge" &&
           answer[3] != "stealth") {

        cout << "Invalid Input. Please enter power or knowledge: ";
        cin >> answer[3];
    }
    
    cout << "Day or Night: " << answer[0] << endl;
    cout << "Alone or Team: " << answer[1] << endl;
    cout << "Element: " << answer[2] << endl;
    cout << "Value: " << answer[3] << endl;
}


void assembleData(string answer[]) {

    // Shadow Veil
    if (answer[0] == "night" &&
        answer[1] == "alone" &&
        answer[2] == "shadow") {

        cout << "\nYour wizard hat is: "
             << possibleNames[2] << endl;
    }

    // Chrono Cap
    else if (answer[0] == "day" &&
             answer[1] == "team" &&
             (answer[2] == "air" || answer[2] == "nature")) {

        cout << "\nYour wizard hat is: "
             << possibleNames[1] << endl;
    }

    // Flame Crown
    else if (answer[2] == "fire" &&
             answer[3] == "power") {

        cout << "\nYour wizard hat is: "
             << possibleNames[3] << endl;
    }

    // Nature Antlers
    else if ((answer[2] == "earth" || answer[2] == "water") &&
             answer[3] == "knowledge") {

        cout << "\nYour wizard hat is: "
             << possibleNames[4] << endl;
    }

    // Stormcaller Hood
    else if ((answer[2] == "air" || answer[2] == "water") &&
             answer[3] == "power") {

        cout << "\nYour wizard hat is: "
             << possibleNames[0] << endl;
    }

    // Generic
    else {

        cout << "\nYour wizard hat is: "
             << possibleNames[5] << endl;
    }
}


int main() {

    string answer[4];

    collectInput(answer);
    assembleData(answer);

    return 0;
}
