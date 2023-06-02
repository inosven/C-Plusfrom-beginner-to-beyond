#include <iostream>
using namespace std;
int main() {
    int small_room_numbers {0};
    int large_room_numbers {0};
    const double price_per_small_room {25};
    const double price_per_large_room {35};
    const int expiration {30};
    const double tax_rate {0.06};
    cout<< "Hello, welcome to carpet clean service" << endl;
    cout << "\nHow many small rooms you would like cleaned?" << endl;
    cin >> small_room_numbers;
    cout << "\nHow many large rooms you would like cleaned?" << endl;
    cin >> large_room_numbers;
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    cout << "Number of small rooms: " << small_room_numbers << endl;
    cout << "Number of large rooms: " << large_room_numbers << endl;
    cout << "Cost: $" << price_per_small_room * small_room_numbers + price_per_large_room * large_room_numbers  << endl;
    cout << "Tax: $" << (price_per_small_room * small_room_numbers + price_per_large_room * large_room_numbers) * tax_rate << endl;
    cout << "====================================" << endl;
    cout << "Total estimate: "<< (price_per_small_room * small_room_numbers + price_per_large_room * large_room_numbers) * (1 + tax_rate) << endl;
    cout << "This extimate is valid for " << expiration << " days." << endl;
    cout << endl;
    return 0;
    }