/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales Tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small, and large rooms they would like cleaned
    and provide an estimate as such:
        Estimate for carpet cleaning service:
            Number of small rooms: <insert number of small rooms>
            Number of large rooms: <insert number of large rooms>
            Price per small room: <insert price per small room>
            Price per large room: <insert price per large room>
            Cost: <sum of price per small room and price per large room>
            Tax: <product of price per small room and price per large room>
            ============================================
            Total Estimate: <sum of all charges>
            This estimate is valid for 30 days.
*/

#include <iostream>

using namespace std;

int main() {
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "\nHow many small rooms do you want cleaned? ";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;

    cout << "How many large rooms do you want cleaned? ";
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;

    const double price_per_small_room {25};
    const double price_per_large_room {35};
    const float sales_tax {0.06};
    const int estimate_expiry {30}; // days

    cout << "Estimate for carpet cleaning service:" << endl;
    cout << "Number of Small Rooms: " << number_of_small_rooms << endl;
    cout << "Number of Large Rooms: " << number_of_large_rooms << endl;
    cout << "Price Per Small Room: $" << price_per_small_room << endl;
    cout << "Price Per Large Room: $" << price_per_large_room << endl;
    cout << "Cost: $" << (number_of_large_rooms * price_per_large_room) + (number_of_small_rooms * price_per_small_room) << endl;
    cout << "Tax: $" << ((price_per_large_room * number_of_large_rooms) + (price_per_small_room * number_of_small_rooms)) * sales_tax << endl;
    cout << "============================================" << endl;
    cout << "Total Estimate: $" << (number_of_small_rooms * price_per_small_room) + (number_of_large_rooms * price_per_large_room) + ((price_per_large_room * number_of_large_rooms) + (price_per_small_room * number_of_small_rooms)) * sales_tax << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days." << endl;

    return 0; 
}