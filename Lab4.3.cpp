#include <iostream>
#include <string>
using namespace std;


const int engineTemp = 800;
const double windSpeed = 15.2;
const char directorSignal = 'N';


string LaunchCheck(int engineTemp, double windSpeed, char directorSignal) {
    if (directorSignal == 'A') {
        return "MANUAL OVERRIDE";}
    else if (directorSignal == 'G') {
        return "Status: ALL SYSTEMS GO - Manual Override";}
    else if (directorSignal == 'N') {
        if (engineTemp > 950 || windSpeed > 35.5) {
            return "CRITICAL ABORT - Unsafe Conditions";}
        else if ((engineTemp >= 850 && engineTemp <= 950) ||(windSpeed >= 25.0 && windSpeed <= 35.5)) {
            return "Status: HOLD COUNTDOWN - Evaluating Weather/Sensors.";}
        else if (engineTemp < 850 && windSpeed < 25.0) {
            return "Status: ALL SYSTEMS GO";}
 }
    return "Status: control reaches end of non-void function [-Wreturn-type]";
}

int main() {
    string result = LaunchCheck(engineTemp, windSpeed, directorSignal);
    cout << result << endl;
    return 0;
}

