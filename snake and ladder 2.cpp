//#include<iostream>;
//#include<conio.h>
//#include<cmath>
//#include<ctime>;
//using namespace std;
//int main() {
//	srand(time(0));
//	int player1, player2, no_ofturn = 5, m = 20;
//	int sum1 = 0, sum2 = 0;
//	char ch;
//
//	while (sum1 < m && sum2 < m){
//
//		cout << "\033[34mEnter any character to make a turn\033[0m";
//		cin >> ch;
//		ch = cin.get();
//		cout << endl;
//
//		player1 = ((rand() % 6) + 1);
//
//		cout << "Players 1 turn= " << player1 << endl;
//
//		sum1 = sum1 + player1;
//
//		if (sum1 > m) {
//			sum1 = sum1 - player1;
//			cout << endl;
//			cout << "\033[31mturn is discarded\033[0m" << endl << endl;
//		}
//
//		cout << "Players 1 total=" << sum1 << endl;
//		//player 2 
//	
//		cout << "\033[34mEnter any character to make a turn\033[0m";
//		cin >> ch;
//		ch = cin.get();
//		cout << endl;
//
//		player2 = ((rand() % 6) + 1);
//		cout << "Players 2 turn= " << player2 << endl;
//
//		sum2 = sum2 + player2;
//
//		if (sum2 > m) {
//			sum2 = sum2 - player2;
//			cout << endl;
//			cout << "\033[31mturn is discarded\033[0m" << endl << endl;
//		}
//		cout << "Players 2 total=" << sum2 << endl;
//
//		cout << endl << endl;
//	}
//	if (sum1 ==m) {
//		cout << "\033[42mPLAYER 1 IS WINNER\033[0m";
//	}
//	else if(sum2==m) {
//		cout << "\033[42mPLAYER 2 IS WINNER\033[0m";
//	}
//}