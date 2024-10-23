//#include<iostream>
//#include<conio.h>
//#include<cstdlib>
//#include<cmath>
//#include<ctime>;
//#include<iomanip>
//using namespace std;
//int main() {
//	srand(time(0));
//	int human_pile, size_of_pile_smart_mode, Actual_Size_of_Pile;
//	int size_to_compare_actual = 0, remaining_pile = 0, turn, comp;
//	int stupid_mode, smart_mode;
//	int j = 0,i=2, index, size1, size_to_compare_comp = 0, size_to_compare_human = 0;
//    int power[5];
//	cout << "\033[41m                           WELCOME TO THE GAME                           \033[0m" << endl;
//
//	Actual_Size_of_Pile = (rand() % 91) + 10;
//	cout << "SIZE OF MARBLE PILE = " << Actual_Size_of_Pile << endl;
//	do{
//		turn = (rand() % 2);
//
//		if (turn == 0) {
//
//			cout << "COMPUTER TURN" << endl<<endl;
//
//			comp = (rand() % 2);
//
//			if (comp == 0) {
//
//				cout << "SMART MODE =)" << endl<<endl;
//
//
//				while (i <= 6) {
//
//					for (int j = 0; j < 5; j++) {
//
//						power[j] = ((pow(2, i)) - 1);
//
//						i++;
//					}
//				}
//
//				index = rand() % 5;
//
//				if (Actual_Size_of_Pile == power[index]) {
//
//					size_of_pile_smart_mode = rand() % Actual_Size_of_Pile;
//
//					cout << "size of pile =" << size_of_pile_smart_mode << endl;
//
//					size_to_compare_comp = size_to_compare_comp + size_of_pile_smart_mode;
//
//					cout << "Sum of piles of computer= " << size_to_compare_comp << endl;
//				}
//				else {
//
//					cout << "size of pile=" << (power[index]) << endl;
//
//					size_to_compare_comp = size_to_compare_comp + power[index];
//
//					cout << "Sum of piles of computer= " << size_to_compare_comp << endl;
//				}
//			}
//			else if (comp == 1) {
//
//				cout << "STUPID MODE" << endl<<endl;
//
//				stupid_mode = (rand() % (Actual_Size_of_Pile / 2)) + 1;
//
//				cout << "Size of PILE =" << stupid_mode << endl;
//
//				size_to_compare_comp = size_to_compare_comp + stupid_mode;
//
//				cout << "Sum of of piles of computer= " << size_to_compare_comp << endl;
//			}
//
//			size_to_compare_actual = size_to_compare_actual + size_to_compare_comp;
//
//			remaining_pile = Actual_Size_of_Pile - size_to_compare_actual - size_to_compare_human;
//
//			cout << "Sum of comp actual= " << size_to_compare_actual << endl;
//
//			cout << "Remainig marbles=" << remaining_pile << endl;
//		}
//		else if (turn == 1) {
//
//			cout << "HUMAN TURN" << endl<<endl;
//
//			cout << "Enter size of pile=" << endl;
//
//			cin >> human_pile;
//
//			if (human_pile <= (Actual_Size_of_Pile / 2)) {
//
//				size_to_compare_human = size_to_compare_human + human_pile;
//
//				cout << "Sum of human pile= " << size_to_compare_human << endl;
//
//				remaining_pile =  Actual_Size_of_Pile- size_to_compare_actual- size_to_compare_human;
//
//				cout << "Remainig marbles=" << remaining_pile << endl;
//			}
//			else
//
//				cout << "\033[46mINVALID INPUT\033[0m" << endl;
//		}
//	} while (Actual_Size_of_Pile > size_to_compare_actual && Actual_Size_of_Pile > size_to_compare_human);
//
//	if (Actual_Size_of_Pile <= size_to_compare_actual) {
//
//		cout << "COMPUTER LOSES" << endl;
//	}
//    if (Actual_Size_of_Pile <= size_to_compare_human) {
//
//		cout << "Human Loses" << endl;
//	}
//}