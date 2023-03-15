#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    vector<int> vector1, vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    for (int i = 0; i < vector1.size(); i++) {
        cout << "Vector 1 Element: " << vector1.at(i) << endl;
    }

    vector2.push_back(100);
    vector2.push_back(200);

    for (int i = 0; i < vector2.size(); i++) {
        cout << "Vector 2 Element: " << vector2.at(i) << endl;
    }

    vector<vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    for (int i = 0; i < vector_2d.size(); i++) {
        for (int j = 0; j < vector_2d.size(); j++) {
            cout << "2D Vector Element: " << vector_2d.at(i).at(j) <<  endl;
        }
    }

    vector1.at(0) = 1000;
    
    for (int i = 0; i < vector_2d.size(); i++) {
        for (int j = 0; j < vector_2d.size(); j++) {
            cout << "2D Vector Element after Vector 1 alteration: " << vector_2d.at(i).at(j) <<  endl;
        }
    }

    for (int i = 0; i < vector1.size(); i++) {
        cout << "Vector 1 Element after alteration: " << vector1.at(i) << endl;
    }    
}