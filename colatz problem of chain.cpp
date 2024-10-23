//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	int num, div, l, lmax = 0, maxnum = 0;
//	cin >> num;
//	int i;
//	for (i = 1; i <= num; i++) {
//		l = 0;
//		if (i % 2 == 0) {
//			div = i / 2;
//			//cout << div << endl;
//			while (div > 1) {
//;
//				if (div % 2 == 0) {
//					div = div / 2;
//				}
//				else {
//					div = 3 * div + 1;
//				}
//				l++;
//				//cout << div << endl;
//
//			}
//		}
//		if (i % 2 != 0) {
//			div = (3 * i) + 1;
//			//cout << div << endl;
//			while (div > 1) {
//
//				if (div % 2 == 0) {
//					div = div / 2;
//				}
//				else {
//					div = (3 * div) + 1;
//				}
//				l++;
//				//cout << div << endl;
//
//			}
//			if (l > lmax) {
//				lmax = l;
//				maxnum = i;
//			}
//		}
//	}
//	cout << "largest lentgh is =" << lmax << endl;
//	cout << "largest number is=" << maxnum;
//}
//
