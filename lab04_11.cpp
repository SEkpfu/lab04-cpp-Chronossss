//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <cmath>
//using namespace std;
//int triangleArea(int a, int h);
//double triangleArea(int a, int b, double al);
//double triangleArea(double a, double b, double c);
//int main() {
//    int n;
//    cout << "vvedi 1, 2 or 3: ";
//    cin >> n;
//    if (n == 1) {
//        int a, h;
//        cout << "a = ";
//        cin >> a;
//        cout << "h = ";
//        cin >> h;
//        cout << "S: " << triangleArea(a, h) << endl;
//    }
//    else if (n == 2) {
//        int a, b;
//        double al;
//        cout << "a = ";
//        cin >> a;
//        cout << "b = ";
//        cin >> b;
//        cout << "al = ";
//        cin >> al;
//        
//        cout << "S: " << triangleArea(a, b, al) << endl;
//    }
//    else if (n == 3) {
//        double a, b, c;
//        cout << "a = ";
//        cin >> a;
//        cout << "b = ";
//        cin >> b;
//        cout << "c = ";
//        cin >> c;
//        cout << "S: " << triangleArea(a, b, c) << endl;
//    }
//    else {
//        cout << "error: nado vvesti 1, 2 ili 3";
//    }
//    return 0;
//}
//int triangleArea(int a, int h) {
//    return (a * h) / 2;
//}
//double triangleArea(int a, int b, double al) {
//    al = al * M_PI / 180.0;
//    return 0.5 * a * b * sin(al);
//}
//double triangleArea(double a, double b, double c) {
//    double s = (a + b + c) / 2.0;
//    return sqrt(s * (s - a) * (s - b) * (s - c));
//}