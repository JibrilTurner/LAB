#include <iostream>
using namespace std;

bool doIhaveAWeapon;
bool isTheZombieFast;

void gameLoop(bool have_blunt_object, bool zombie_speed)
{



    if (isTheZombieFast == true) {

        cout << "DROP THAT BAG BUDDY GTFO" << endl;
        cout << "SPRINT in opposite direction" << endl;
    }
    else if (isTheZombieFast == false && doIhaveAWeapon == true) {
        cout << "Brace For Impact" << endl;
        cout << "Swing" << endl;
    }
    else if (isTheZombieFast == false && doIhaveAWeapon == false) {
        cout << "Walk Away" << endl;
        cout << "Post about it on socitcal meida" << endl;
    }
    else{
        cout << "Hide" << endl;

    }
}

int main() {

    cout << "You see a zombie approaching. Is it moving Fast or Slow? (1 = Fast, 0 = Slow): ";
    cin >> isTheZombieFast;

    cout << "Do you have a blunt object? (1 = Yes, 0 = No): ";
    cin >> doIhaveAWeapon;

    gameLoop(doIhaveAWeapon,isTheZombieFast );


    return 0;
}
