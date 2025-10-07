//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <cmath>
//using namespace std;
//void printSquare4x4();
//void printSquare(int n);
//void printSquareWithIndent(int n, int m);
//void printChessBoard(int n, int m);
//int main() {
//    int a;
//    cout << "vvedite 1,2,3 ili 4: ";
//    cin >> a;
//    if (a == 1) {
//        printSquare4x4();
//    }
//    else if (a == 2) {
//        int n;
//        cout << "n = ";
//        cin >> n;
//        printSquare(n);
//    }
//    else if (a == 3) {
//        int n, m;
//        cout << "n = ";
//        cin >> n;
//        cout << "m = ";
//        cin >> m;
//        printSquareWithIndent(n, m);
//    }
//    else if (a == 4) {
//        int n, m;
//        cout << "n = ";
//        cin >> n;
//        cout << "m = ";
//        cin >> m;
//        printChessBoard(n, m);
//    }
//    else {
//        cout << "error: vvedite 1,2,3 ili 4";
//    }
//    return 0;
//}
//void printSquare4x4() {
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 4; j++) {
//            cout << " * ";
//        }
//        cout << endl;
//    }
//}
//void printSquare(int n) {
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cout << " * ";
//        }
//        cout << endl;
//    }
//}
//void printSquareWithIndent(int n, int m) {
//    for (int i = 0; i < n; i++) {
//        for (int k = 0; k < m; k++) {
//            cout << "   ";
//        }
//        for (int j = 0; j < n; j++) {
//            cout << " * ";
//        }
//        cout << endl;
//    }
//}
//void printChessBoard(int n, int m) {
//    for (int i = 0; i < n; i++) {
//        for (int row = 0; row < m; row++) {
//            for (int j = 0; j < n; j++) {
//                for (int col = 0; col < m; col++) {
//                    if ((i + j) % 2 == 0) {
//                        cout << " * ";
//                    }
//                    else {
//                        cout << "   ";
//                    }
//                }
//            }
//            cout << endl;
//        }
//    }
//}