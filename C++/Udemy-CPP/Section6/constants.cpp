/* 
    Frank's Carpet Cleaning Service
    Charges $30 per room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of rooms they would like cleaned
    and provide an estimate as such:
        Estimate for carpet cleaning service:
        Number of rooms: <insert number here>
        Price per room: <rate per room>
        Cost: <total cost>
        Tax: <tax rate>
        ============================================
        Total estiamte: <sum of all expenses>
        This estimate is valid for 30 days

    Pseudocode:
        Prompt the user to enter the number of rooms
        Display number of rooms
        Display price per room

        Display cost: (number of rooms * price per room)
        Display tax: number of rooms * price per room * tax rate
        Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
        Display estimate expiration time.
*/

#include <iostream>

using namespace std;

int main() {
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned? ";

    int number_of_rooms {0};
    cin >> number_of_rooms;

    const double price_per_room {30.0};
    const float sales_tax {0.06};
    const int estimate_expiry {30}; // days

    cout << "\nEstimate for carpet cleaning service:" << endl;
    cout << "Number of Rooms: " << number_of_rooms << endl;
    cout << "Price Per Room: $" << price_per_room << endl;
    cout << "Cost: $" << price_per_room * number_of_rooms << endl;
    cout << "Tax: $" << price_per_room * number_of_rooms * sales_tax << endl;
    cout << "============================================" << endl;
    cout << "Total Estimate: $" << (number_of_rooms * price_per_room) + (number_of_rooms * price_per_room * sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days." << endl;

    // Footnote: This isn't ideal code, as it contains a lot of repetitive computations. Later sections will address this factor.
    return 0;
}