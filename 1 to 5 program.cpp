//#include<iostream>
//#include<cstdlib>
//#include<conio.h>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//int main() {
//	char ch;
//	cout << "Enter 1 For factorial" << endl;
//	cout << "Enter 2 For nPr" << endl;
//	cout << "Enter 3 For nCr" << endl;
//	cout << "Enter 4 For nCr" << endl;
//	cout << "Enter 5 for exit" << endl;
//	cout << endl << endl;
//	cin >> ch;
//	cout << endl;
//	int n, r, fact = 1, factresult = 1, factr = 1;;
//	if (ch == '1') {
//		cout << endl;
//		cout << "Enter the number whose factorial is to be calculated= " << endl;
//		cin >> n;
//		for (int i = 1; i <= n; i++) {
//			fact = fact * i;
//		}
//		cout << "Factorial=   " << fact << endl;;
//	}
//	else if (ch == '2') {
//		cout << endl;
//		cout << "Enter The number n and remainder r to calculate nPr=";
//			cin >> n >> r;
//			for (int i = 1; i <= n; i++) {
//				fact = fact * i;
//			}
//			int result = n - r;
//			for (int j = 1; j <= result; j++) {
//				factresult = factresult * j;
//			}
//			int nPr = (fact / factresult);
//			cout << "The reult of nPr= " << nPr;
//	}
//	else if (ch == '3') {
//		cout << endl;
//		cout << "Enter The number n and remainder r to calculate nCr=";
//		cin >> n >> r;
//		for (int i = 1; i <= n; i++) {
//			fact = fact * i;
//		}
//		int result = n - r;
//		for (int j = 1; j <= result; j++) {
//			factresult = factresult * j;
//		}
//		for (int k = 1; k <= r; k++) {
//			factr = factr * k;
//		}
//		int nCr = (fact/(factr*factresult));
//		cout << "The reult of nCr= " << nCr;
//	}
//	else if (ch == '4') {
//		cout << endl;
//		cout << "Enter The number n and remainder r to calculate nCr'=";
//		cin >> n >> r;
//		for (int i = 1; i <= n; i++) {
//			fact = fact * i;
//		}
//		int result = n - r;
//		for (int j = 1; j <= result; j++) {
//			factresult = factresult * j;
//		}
//		for (int k = 1; k <= r; k++) {
//			factr = factr * k;
//		}
//		int nPr = (fact / factresult);
//		int nCr = (nPr / factr);
//		cout << "The result of nCr= " << nCr;
//	}
//	else if (ch == '5') {
//		cout << endl;
//		cout << "The program is terminating.............. ";
//		cout << endl;
//		exit(0);
//	}
//}