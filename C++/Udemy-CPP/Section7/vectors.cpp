#include <iostream>
#include <vector>

// can implement "using namespace std" since vectors are in the std namespace

int main(void) {
    std::vector<char> vowels(5);
    // or using curly braces
    // std::vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    std::vector<int> test_scores(10);
    // or initializing values into test_scores, the above only allocates space and sets them to 0
    // std::vector <int> test_scores {100, 98, 89, 85, 93};
    std::vector<double> high_temperatures(365, 80.0);

    std::cout << "Vowel at index number 1: " << vowels.at(0) << std::endl;
    // utilisation of vector_name.at(index number) which grabs the element in the vector at that index

    test_scores.push_back(23);
    // utilisation of vector_name.push_back(element) which pushes the element passed in the parentheses to the end of the vector
    // vectors automatically allocate required space for this increase in size

    test_scores.size();
    // will return the number of elements in the vector test_scores

    // you can implement a 2D-vector
    std::vector<std::vector<int>> ratings {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    /*
    Similar to Java ArrayList:
        import java.util.ArrayList;
        public static void main(String[] args) {
            ArrayList<ArrayList<Integer>> ratings = new ArrayList<ArrayList<Integer>>();
        }
    */
}