#include <iostream>
#include <vector>

using namespace std;

int main() {
//    char vowels[] {'a', 'e', 'i', 'o', 'u'};
//    cout << "\nThe first vowel is: " << vowels[0] << endl;
//    cout << "The last vowel is: " << vowels[4] <<endl;
////    cin >> vowels[5]; out of bounds!
//
//    double hi_temperature [] {90.1, 89.8, 77.5, 81.6};
//    cout << "\nThe first high temperature is : "<< hi_temperature[0] <<endl;
//    hi_temperature[0] = 100.7;
//    cout << "\nThe first high temperature is : "<< hi_temperature[0] <<endl;

//    int test_scores [5] {};
//    cout << "\nThe first score at index 0: " << test_scores[0]<<endl;
//    cout << "Enter the 5 test scores: ";
//    cin >> test_scores[0];
//    cin >> test_scores[1];
//    cin >> test_scores[2];
//    cin >> test_scores[3];
//    cin >> test_scores[4];
//    cout <<"\nThe fifth score is: " << test_scores[4] << endl;
//
//    cout << "\nNotice what the value of the name of the array is: "<< test_scores << endl;
//    const int rows {3};
//    const int cols {4};
//    int movie_rating [rows][cols] {
//            {0,4,5,6},
//            {3,5,4,8},
//            {1,1,3,5}
//    };
//    cin >> movie_rating[1][2];
//    cout << movie_rating[1][2];
//    vector <char> vowels (5);
//    vector <int> test_scores (10);
    vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
    vector<int> test_scores{100, 50, 3, 56, 60};
    vector<double> hi_temps(365, 80.0);
    cout << "The first temperature is: " << hi_temps[0] << endl;
    cout << "The first score is: " << test_scores[0] << endl;
    cout << "The second score is: " << test_scores.at(1) << endl;
    cin >> test_scores.at(0);
    cout << "The first score is: " << test_scores[0] << endl;

    test_scores.at(0) = 90;
    test_scores.push_back(80); // append
    return 0;
}
