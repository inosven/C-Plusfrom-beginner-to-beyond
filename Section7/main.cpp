#include <iostream>
using std::endl;
using std::cout;
using std::cin;
int main() {
    int test_scores [5] {100, 95, 99, 87, 88};
    int high_score_per_level [10] {3, 5};
    const int days_in_year {365};
    double hi_temperatures [days_in_year] {0};
    int another_array [] {1,2,3,4,5};
    cin >> test_scores[0];
    cout << "First element at index 0: " << test_scores[0] << endl;
    return 0;
}
