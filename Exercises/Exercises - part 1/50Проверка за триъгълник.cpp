#include <iostream>
using namespace std;

int main() {
    // Деклариране на променливи за дължините на страните
    double a, b, c;

    // Четене на дължините на страните от потребителя
    cout << "Въведете дължините на трите страни на триъгълника (a, b, c): ";
    cin >> a >> b >> c;

    // Проверка дали могат да образуват триъгълник
    if (a + b > c && a + c > b && b + c > a) {
        cout << "Страните могат да образуват триъгълник." << endl;
    } else {
        cout << "Страните не могат да образуват триъгълник." << endl;
    }

    return 0;
}
