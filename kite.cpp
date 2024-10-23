//#include<iostream>
//using namespace std;
//int main()
//{
//	int height;
//	cout << "enter the height of the kite:";
//	cin >> height;
//	for (int i = 0; i < height; i++)
//	{
//		for (int j = (2 * height)-(2*i) - 2; j > 0; j--)
//		{
//			cout << " ";
//		}
//		cout << "*";
//		for (int j = 0; j < 2 * i - 1; j++)
//		{
//			if (i < height - 1)
//			{
//				cout << " ";
//			}
//			if (i == height - 1)
//				cout << "-";
//		}
//		if (i != 0)
//			cout << "|";
//		for (int j = 2 * i - 1; j > 0; j--)
//		{
//			if (i < height - 1)
//			{
//				cout << " ";
//			}
//			if (i == height - 1)
//			{
//				cout << "-";
//			}
//
//		}
//		if (i != 0)
//			cout << "*";
//		cout << endl;
//	}
//	for (int i = 1; i <= 2 * height - 2; i++)
//
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << " ";
//		}
//		cout << "*";
//		for (int j = 2 * height - i - 3; j > 0; j--)
//		{
//			cout << " ";
//		}
//		if (i != 2 * height - 2)
//			cout << "|";
//		for (int j = 2 * height - i - 3; j > 0; j--)
//		{
//			cout << " ";
//		}
//		if (i != 2 * height - 2)
//			cout << "*";
//		cout << endl;
//	}
//}