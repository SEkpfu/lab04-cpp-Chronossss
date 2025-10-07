#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
bool isLuckyTicket(int number);
bool isLuckyTicket(int d1, int d2, int d3, int d4, int d5, int d6);
bool isLuckyTicket(int firstHalf, int secondHalf);
int main() {
    int choice;
    cout << "vvedite 1, 2 ili 3: " << endl;
    cin >> choice;

    switch (choice) {
    case 1: {
        int number;
        cout << "vvedite 6znachnoe chislo: ";
        cin >> number;
        cout << (isLuckyTicket(number) ? "LuckyTicket" : "Not LuckyTicket") << endl;
        break;
    }
    case 2: {
        int d1, d2, d3, d4, d5, d6;
        cout << "vvedite 6 cifer: ";
        cin >> d1 >> d2 >> d3 >> d4 >> d5 >> d6;
        cout << (isLuckyTicket(d1, d2, d3, d4, d5, d6) ? "LuckyTicket" : "Not LuckyTicket") << endl;
        break;
    }
    case 3: {
        int firstHalf, secondHalf;
        cout << "vvedite 2 3znachnih chisel: ";
        cin >> firstHalf >> secondHalf;
        cout << (isLuckyTicket(firstHalf, secondHalf) ? "LuckyTicket" : "Not LuckyTicket") << endl;
        break;
    }
    default:
        cout << "nevernii vibor" << endl;
        break;
    }
    return 0;
}
bool isLuckyTicket(int number) {
    if (number < 100000 || number > 999999) return false;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 3; ++i) {
        sum1 += number % 10;
        number /= 10;
    }
    for (int i = 0; i < 3; ++i) {
        sum2 += number % 10;
        number /= 10;
    }
    return sum1 == sum2;
}
bool isLuckyTicket(int d1, int d2, int d3, int d4, int d5, int d6) {
    if (d1 > 9 || d2 > 9 || d3 > 9 || d4 > 9 || d5 > 9 || d6 > 9) return false;
    return (d1 + d3 + d5) == (d2 + d4 + d6);
}
bool isLuckyTicket(int firstHalf, int secondHalf) {
    if (firstHalf < 100 || firstHalf > 999 || secondHalf < 100 || secondHalf > 999) return false;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 3; ++i) {
        sum1 += firstHalf % 10;
        firstHalf /= 10;
    }
    for (int i = 0; i < 3; ++i) {
        sum2 += secondHalf % 10;
        secondHalf /= 10;
    }
    return sum1 == sum2;
}

