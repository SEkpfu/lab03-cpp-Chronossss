//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	double x1, y1, x2, y2, x0, y0, n, p = 0;
//	cout << "n = ";
//	cin >> n;
//	cout << "x1 = ";
//	cin >> x1;
//	cout << "y1 = ";
//	cin >> y1;
//	x0 = x1;
//	y0 = y1;
//	for (int i{ 2 }; i <= n; i++) {
//		x2 = x1;
//		y2 = y1;
//		cout << "x" << i << " = ";
//		cin >> x1;
//		cout << "y" << i << " = ";
//		cin >> y1;
//		p += sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//	}
//	p += sqrt((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0));
//	cout << "Perimetr = " << p;
//	return 0;
//}