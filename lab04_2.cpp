//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <cmath>
//using namespace std;
//double R(double x1, double x2, double y1, double y2);
//double S(double R1, double R2, double R3);
//double S4(double R1, double R2, double R3, double R4, double RS);
//int main() {
//	double x1, x2, y1, y2;
//	cout << "x1 = ";
//	cin >> x1;
//	cout << "y1 = ";
//	cin >> y1;
//	cout << "x2 = ";
//	cin >> x2;
//	cout << "y2 = ";
//	cin >> y2;
//	cout << "a) R = " << R(x1, x2, y1, y2) << endl;
//	cout << "b) R1 = " << R(x1, 0, y1, 0) << endl;
//	cout << "R2 = " << R(x2, 0, y2, 0) << endl;
//	double x3, y3, p = 0, R1, R2, R3;
//	cout << "x3 = ";
//	cin >> x3;
//	cout << "y3 = ";
//	cin >> y3;
//	R1 = R(x1, x2, y1, y2);
//	R2 = R(x3, x2, y3, y2);
//	R3 = R(x1, x3, y1, y3);
//	p = (R1 + R2 + R3) / 2.0;
//	cout << "c) S = " << S(R1,R2,R3) << endl;
//	double x4, y4, R4, R5;
//	cout << "x4 = ";
//	cin >> x4;
//	cout << "y4 = ";
//	cin >> y4;
//	R4 = R(x3, x4, y3, y4);
//	R5 = R(x4, x1, y4, y1);
//	cout << "d) S4 = " << S4(R1, R2, R4, R5, R3);
//}
//double R(double x1, double x2, double y1, double y2) {
//	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
//}
//double S(double R1, double R2, double R3) {
//	double p = 0;
//	p = (R1 + R2 + R3) / 2.0;
//	return sqrt(p * (p - R1) * (p - R2) * (p - R3));
//}
//double S4(double R1, double R2, double R3, double R4, double RS) {
//	return S(R1,R2,RS) + S(R4,R3,RS);
//}