////#include<iostream>
////#include<ctime>
////using  namespace std;
////int main() {
////	srand(time(0));
////	const int size = 500;
////	int a[size];
////	int counter, maxcount = 0, freq = 0;
////	for (int i = 0; i <= 14; i++) {
////		a[i] = rand() % 2 + 1;
////		cout << a[i];
////	}
////	for (int i = 0; i < 15; i++) {
////		counter = 1;//to include the number itself
////		for (int j = i + 1; j < 15; j++) {
////			if (a[i] == a[j]) {
////				counter++;
////			}
////		}
////		if (counter > maxcount) {
////			maxcount = counter;
////			freq = a[i];
////
////		}
////	}
////	cout<< maxcount;
////	cout << freq;
////
////}
//#include<iostream>
//#include<ctime>
//using namespace std;
//int main() {
//	int a[5][5], maxindex = 4;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			a[i][j] = rand() % 100;
//		}
//	}
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			cout << "  " << a[i][j];
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (i == j) {
//				cout << a[i][j] << endl;;
//			}
//		}
//		cout << endl;
//	}
//	for (int i = 4; i >= 0; i--) {
//		for (int j = 0; j < 5; j++) {
//			if (i + j == maxindex) {
//				cout << a[i][j];
//			}
//		}
//		cout << endl;
//
//	}
//	for (int i = 0; i < 5; i++) {
//		for (int j = i + 1; j < 5; j++) {
//			int temp = a[i][j];
//			a[i][j] = a[j][i];
//			a[j][i] = temp;
//
//		}
//	}
//	cout << endl;
//
//	for (int i = 0; i < 5; i++) {
//		for (int j= 0; j < 5; j++) {
//			cout << "  " << a[i][j];
//		}
//		cout << endl;
//	}
//}
//
