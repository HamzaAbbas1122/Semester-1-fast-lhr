//#include<iostream>
//#include<ctime>
//using namespace std;
//int main() {
//	int const rows = 100;
//	int const columns = 100;
//	int arr[rows][columns];
//	int urows, ucolumns;
//	cout << "Enter the number of rows" << endl << "Enter the number of coulmns";
//	cin >> urows;
//	cin >> ucolumns;
//	int left = 0, right = urows-1, top = 0, bottom = ucolumns-1;
//	int num = 0;
//	int i, j;
//	while (top <= bottom && left <= right) {
//		for (i = left; i <= right; i++) {
//			arr[top][i] = num + 1;
//			num++;
//		}
//		top++;
//		for (j = top; j <= bottom; j++) {
//			arr[j][right] = num + 1;
//			num++;
//
//		}
//		right--;
//		if (top <= bottom){
//			for (i = right; i >= left; i--) {
//				arr[bottom][i] = num + 1;
//				num++;
//			}
//		}
//		bottom--;
//		if (left <= right) {
//			for (j = bottom; j >= top; j--) {
//				arr[j][left]= num + 1;
//				num++;
//			}
//			left++;
//		}
//	}
//
//	for (int i = 0; i < urows; i++) {
//		for (int j = 0; j < ucolumns; j++) {
//			cout << arr[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	cout << "Enter the coordinates=";
//	cin >> i >> j;
//	cout << "your coordinates are=" << i << " " << j << endl;;
//	if (i < 5 && j < 5)
//		cout << "............number at that coordinate is=  " << arr[i][j];
//	else
//		cout << "coordinates not found";
//}