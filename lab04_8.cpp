//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <cmath>
//using namespace std;
//bool F(double a, double b, double c, double* root1, double* root2);
//int main() {
//    double a, b, c;
//    cout << "a = ";
//    cin >> a;
//    cout << "b = ";
//    cin >> b;
//    cout << "c = ";
//    cin >> c;
//    double x1, x2;
//    if (F(a, b, c, &x1, &x2)) {
//        if (x1 == x2) {
//            cout << "odin koren: " << x1 << endl;
//        }
//        else {
//            cout << "korni: " << x1 << " and " << x2 << endl;
//        }
//    }
//    else {
//        cout << "kornei net";
//    }
//    return 0;
//}
//bool F(double a, double b, double c, double* root1, double* root2) {
//    if (a == 0) {
//        cout << "error:ne kvadratnoe yravnenie" << endl;
//        return false;
//    }
//    double D = b * b - 4 * a * c;
//    if (D < 0) {
//        cout << "D < 0" << endl;
//        return false;
//    }
//    double sqrtD = sqrt(D);
//    *root1 = (-b + sqrtD) / (2 * a);
//    *root2 = (-b - sqrtD) / (2 * a);
//    return true;
//}