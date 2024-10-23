//#include<iostream>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//int main() {
//
//	///*dice roll until 7*/
//	////rand function generates any random value
//	///*we take the mod of sum by 6 and get the value between 0 to 5.*/
//	///*rand function needs to be seeded*/we have to give the calue of time to rand function because time varies continuously
//	//	and we have a library of time called ctime.It is beneficial in games.
//	int sum = 7;
//	int d1, d2;
//	int attempt = 1;
//	srand(time(0));
//	do {
//		if (attempt >= 1) {
//		d1 = (rand() % 6) + 1;
//		d2 = (rand() % 6) + 1;
//		cout << d1 << "+" << d2 << endl;
//	}
//		attempt++;
//	} while ((d1 + d2) != sum && attempt <= 3);
//	if (d1+d2 == 7) {
//		cout << "lucky";
//	}
//
//		
//		
//
//}