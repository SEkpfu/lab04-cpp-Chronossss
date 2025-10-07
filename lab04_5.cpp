//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <cmath>
//using namespace std;
//double f(int n);
//int s(int x, int n);
//int main() {
//    int a;
//    cout << "Vvedite 1 ili 2: ";
//    cin >> a;
//    if (a == 1) {
//        int n, m;
//        cout << "n = ";
//        cin >> n;
//        cout << "m = ";
//        cin >> m;
//        cout << "res = " << ((f(n) * f(m)) / f(n + m));
//    }
//    else if (a == 2) {
//        int n, x;
//        cout << "x = ";
//        cin >> x;
//        cout << "n = ";
//        cin >> n;
//        cout << "res = " << s(x, n);
//    }
//    else {
//        cout << "Error: vvedite 1 ili 2";
//    }
//}
//double f(int n) {
//    if (n < 0) {
//        cout << "Error: n < 0" << endl;
//        return 0;
//    }
//    double result = 1;
//    for (int i = 2; i <= n; i++) {
//        result *= i;
//    }
//    return result;
//}
//int s(int x, int n) {
//    if (n < 0) {
//        cout << "Error: n < 0" << endl;
//        return 0;
//    }
//    int result = 1;
//    for (int i = 0; i < n; i++) {
//        result *= x;
//    }
//    return result;
//}