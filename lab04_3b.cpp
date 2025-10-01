//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <cmath>
//#include <vector>
//using namespace std;
//double F(double x);
//int main() {
//	double a, mx=INT_MIN, otr=0;
//	vector< double > x;
//	vector< double > y;
//	for (int i{ 0 }; i < 7; i++) {
//		cout << i+1 << ") ";
//		cin >> a;
//		x.push_back(a);
//	}
//	for (int i{ 0 }; i < 7; i++) {
//		y.push_back(F(x[i]));
//	}
//	for (int i{ 0 }; i < 7; i++) {
//		if (y[i] < 0) {
//			otr++;
//		}
//		if (y[i] > mx) {
//			mx = y[i];
//		}
//	}
//	cout << "otr = " << otr << endl;
//	cout << "max element = " << mx;
//	x.clear();
//	x.shrink_to_fit();
//	y.clear();
//	y.shrink_to_fit();
//}
//double F(double x) {
//	if (x < 0) {
//		return 7.0 / 3.0;
//	}
//	else if (x < 2 * M_PI) {
//		return x * x - 3;
//	}
//	else {
//		return (1 + x * x * x) / (2 * x);
//	}
//}