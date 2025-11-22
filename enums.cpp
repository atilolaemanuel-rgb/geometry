#include <iostream>
using namespace std;

enum class TrafficLight { Red, Yellow, Green };

string getSignalMeaning(TrafficLight signal) {
    switch (signal) {
        case TrafficLight::Red: return "Stop";
        case TrafficLight::Yellow: return "Caution";
        case TrafficLight::Green: return "Go";
    }
    return "Invalid";
}

int main() {
    TrafficLight signal = TrafficLight::Yellow;
    cout << "Signal meaning: " << getSignalMeaning(signal) << endl;
    return 0;
}