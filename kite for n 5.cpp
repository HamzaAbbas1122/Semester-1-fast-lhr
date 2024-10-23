//#include<iostream>
//using namespace std;
//int main() {
//	int n;
//	cout << "Enter number";
//	cin >> n;
//	int j, m = 2 * n + 4, k = 1, l =2*n-7 ,R=2*n-2;
//	//this loop is for first upper part
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= R; j++) {//this loop is for printing spaces is sequence like 0 2 4 6 8.We used a variabe r which has initial value 2(5)-2=8;
//			cout << " ";
//		}
//		if (R >= 0)
//		{
//			cout << "*";
//		}
//		R = R - 2;
//		if (i < 2)
//		{
//			cout << endl;
//		}
//	
//		if (i >= 2) {
//			for (int j = 1; j <= l; j++) {
//				if (i == n) {
//					cout << "-";
//				}
//				else
//					cout<<" ";
//			}
//			cout << "*";
//
//
//			if ( i <= n ) {
//				l = l + 4;
//			}
//			cout << endl;
//		}
//	}
//	for (int i = 1; i <=2*n-2;i++) {
//		for (int j = 1; j <= i; j++) {
//			cout << " ";
//		}
//		cout << "*";
//		for (int j = 1; j < 2*n-2; j = j + 1) {
//			cout << " ";
//		}
//		if (k < (2*n+6)) {
//			if (i < 2 * n - 2) {
//				cout << "*";
//			}
//		}
//		m=m-2;
//		k++;
//		cout << endl;
//		
//	}
//
//}