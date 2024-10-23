//// datatype array__name[size]={ind0.ind1,ind2};
////even odd
////third laegest
////reverse
////rand %2 000 in first and 111 in second
//
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	srand(time(0));
//	int a[5];
//		int sum = 0;
//		int n =sizeof(a)/sizeof(a[2]);
//	for (int i = 0; i < n; i++) {
//		//cout << "Enter" << i << "Value";
//		//cin >> a[i];
//		a[i] = (rand() % 120);
//	}
//	cout << "Original array[]= ";
//	for (int i = 0; i < n; i++) {
//		cout << a[i] << "  ";
//		sum = sum + a[i];
//	}
//	cout << endl;
//	cout << "reverse";
//
//	for (int i = 4; i >=0; i--) {
//		cout << a[i]<<" ";
//	}
//
//	cout << endl;
//	int max = a[0];
//	for (int i = 1; i < 5; i++) {
//		if (max <= a[i])
//		{
//			max = a[i];
//		}
//	}
//	cout << endl;
//	int num;
//	cout << "Enter the number=" << endl;
//	cin >> num;
//	cout << endl;
//	for (int i = 0; i < n; i++) {
//		if (num == a[i]) {
//			cout << i << endl;
//			break;
//		}
//	}
//	int sl, l;
//	if (a[0] > a[1]) {
//		l = a[0];
//		sl = a[1];
//	}
//	else {
//		sl = a[0];
//		l = a[1];
//	}
//	for (int i = 2; i < n; i++) {
//		if (a[i] > l) {
//			sl = l;
//			l = a[i];
//		}
//		else if (a[i] > sl && a[i] != l) {
//			sl = a[i];
//		}
//	}
//	if (sl == l) {
//		cout << "same elements=";
//	}
//	else
//		cout << "LARGEST NUMBER" << l << "    " << "Second largest" << sl;
//	cout << "Max value="<<max << endl;;
//	cout << "sum="<<sum;
//	cout << endl;
//}