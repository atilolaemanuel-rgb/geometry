#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    double *temps = nullptr;

    //  Validate number of readings (do-while)
    do {
        cout << "Enter number of temperature readings (>=1): ";
        cin >> n;
    } while (n < 1);

    //  Dynamic memory allocation
    temps = new double[n];

    //  Accept readings (for loop)
    for (int i = 0; i < n; i++) {
        cout << "Enter temperature " << i + 1 << ": ";
        cin >> temps[i];
    }

    //  Display readings (foreach loop)
    cout << "\nTemperature Readings:\n";
    for (double t : std::vector <double>(temps, temps + n)) {
        cout << t << " ";
    }
    cout << "\n";

    //  Compute sum (while loop)
    double sum = 0;
    int i = 0;
    while (i < n) {
        sum += temps[i];
        i++;
    }

    //  Nested loops for pattern
    cout << "\nTemperature Pattern:\n";
    for (int j = 0; j < n; j++) {
        cout << temps[j] << "°C: ";
        for (int k = 0; k < (int)temps[j]; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    // Compute stats
    double avg = sum / n;
    double highest = temps[0], lowest = temps[0];
    for (int j = 1; j < n; j++) {
        if (temps[j] > highest) highest = temps[j];
        if (temps[j] < lowest) lowest = temps[j];
    }

    cout << "\nTotal: " << sum;
    cout << "\nAverage: " << avg;
    cout << "\nHighest: " << highest;
    cout << "\nLowest: " << lowest << "\n";

    // Free memory
    delete[] temps;
    return 0;
}