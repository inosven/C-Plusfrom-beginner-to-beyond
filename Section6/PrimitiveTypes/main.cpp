#include <iostream>
using namespace std;
int main() {
    char middle_inital {'J'}; // single quote for char!
    cout<< middle_inital << endl;
    
    unsigned short int exam_score {55};
    cout << exam_score << endl;

    int countries_represented {65};
    cout << countries_represented << endl;
    
    long long people_on_earth {7'600'000'000};
    cout << "There are about " << people_on_earth << " on earth" << endl;
    
    long people_in_florida {20610000};
    cout << "There are about " << people_in_florida << " in FL" << endl;
    
    long long distance_to_alpha_centauri {9'461'000'000'000};
    
    cout << distance_to_alpha_centauri << " kilometers" <<endl;
    
     /*
      * Floating point
      */
    float car_payment {401.23};
    cout << "My car payment is " << car_payment <<endl;
    
    
    double pi {3.1415926};
    cout << "PI is " << pi <<endl;
    
    long double large_number {2.1e120};
    cout << large_number << endl;
    
    
    /*
     *  Boolean
     */
    bool game_over {false};
    cout << "The value of game over is " << game_over << endl;
    
    /*
     * Overflow 
     */
    
    short value1 {30000};
    short value2 {1000};
    short product {value1 * value2};
    
    cout << "Product of " << value1 <<" and " << value2 << " is " << product << endl;
    return 0;
    }