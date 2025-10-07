//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <cmath>
//using namespace std;
//bool f(double x, double& res);
//int main() {
//    double a, b, resa, resb;
//    cout << "a = ";
//    cin >> a;
//    cout << "b = ";
//    cin >> b;
//    if (f(a, resa)) {
//        double res0, res2;
//        f(0, res0);
//        f(0, res2);
//        cout << "res1: " << res2 - res0*resa  << endl;
//    }
//    if (f(a, resa) && f(b, resb)) {
//        double res2a, resab, res6;
//        f(2 * a, res2a);
//        f(6, res6);
//        f(a * b, resab);
//        cout << "res2:" << res2a - res6 + resab << endl;
//    }
//    return 0;
//}
//bool f(double x, double& res) {
//    if (x <= 2) {
//        if (x == 0 || x == 1) {
//            return false;
//        }
//        res = (2 * x + 1 / (1 - x)) / (3 * x);
//        return true;
//    }
//    else if (2 < x && x <= 5) {
//        res = 10 + 2.0 / 7;
//        return true;
//    }
//    else {
//        res = -3 - x;
//        return true;
//    }
//}