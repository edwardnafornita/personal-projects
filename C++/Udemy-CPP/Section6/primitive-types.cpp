#include <iostream>

using namespace std;

int main() {
    // Character Type
    char first_initial {'E'};
    cout << "My first initial is " << first_initial << endl;

    // Integer Types
    unsigned short int exam_score {90};
    cout << "My exam score was " << exam_score << endl;

    int countries_represented {65};
    cout << "There were " << countries_represented << "countries represented in my meeting." << endl;

    long people_in_florida {21'220'000};
    cout << "There are about " << people_in_florida << " people in Florida." << endl;

    long long people_on_earth {7'700'000'000};
    cout << "There are about " << people_on_earth << " people on Earth." << endl;

    long long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;

    // Floating Point Types
    float car_payment {401.23};
    cout << "My car payment is " << car_payment << endl;

    double pi {3.14159265};
    cout << "Pi is " << pi << endl;

    long double large_amount {2.7e120};
    cout << large_amount << " is a very big number" << endl;

    // Boolean Type
    bool game_over {false};
    cout << "The value of game_over is " << game_over << endl;

    return 0;
}