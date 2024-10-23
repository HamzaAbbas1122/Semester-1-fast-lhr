//#include<iostream>
//using namespace std;
//int main() {
//	const int n = 5;
//	int arr[5] = { 45,56,67,12,3 };
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n - i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		cout << " " << arr[i];
//	}
//	cout << endl;
//	int max_id =  4;
//	int min_id = 0;
//	bool print = true;
//	for (int i = 0; i < n; i++) {
//		if (print == true) {
//			arr[i] = arr[max_id--];
//		}
//		else {
//			arr[i] = arr[min_id--];
//		}
//		print = !print;
//		cout << " " << arr[i];
//	}
//}
