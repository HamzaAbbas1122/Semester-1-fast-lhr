//#include<iostream>
//#include<cstdlib>
//#include<conio.h>
//#include<cmath>
//#include<cstring>
//using namespace std;
//int main() {
//	int num, rem1 = 0, sum1 = 0, sum2 = 0, odd_position = 0, rem2 = 0, rem3 = 0;
//    //for taking numbers
//	cout << "enter credit card number= " << endl;
//	cin >> num;
//
//	int m = num;
//	//for checking
//	for (int i = 8; i >= 1; i--) {
//		rem1 = (m % 10);//for getting remainder
//
//	//for even positined
//		if (i % 2 == 0) {
//			sum1 = sum1 + rem1;
//		}
//		 
//		//for odd positioned
//		else if (i % 2 != 0) {
//			odd_position = rem1 * 2;
//			if (odd_position> 4) {//if check for 10 position numbers like if we have 5 then we have to divide its multiple 10 in 1 and 0;
//				
//				rem2 = odd_position % 10;//to break the odd position number in two parts 
//
//				if (i > 1) {//necessary if to prevent the division when only 1 number of card is left because if it is not applied then the value stored will become 0
//					
//					rem3 = odd_position / 10;
//				}
//				sum2 = sum2 + rem2 + rem3;
//			}
//
//			else {//if odd position does not contain two number
//				sum2 = sum2 + odd_position;
//			}
//		}
//		m = (m / 10);//it divides the number and number reduces by 1 digit because of int
//	}
//	int sum = sum1 + sum2;//it stores the sum of even and odd positioned
//	cout << sum << endl;
//	if (sum % 10 == 0) {
//		cout << "number is valid";
//	}
//	else {
//		cout << "number is not valid" << endl;
//	}
//	int constant1 = sum % 10;//if not valid it takes modulus of sum taky jo value zyada hogi wo mil jy phr hum actual no mn sy nikal dn
//	int constant2 = 10 - constant1;//it finds the value that we have to add
//	int checkdigit = (num % 10);//we get last dig of number entered by user to get check digit
//
//	if (checkdigit + constant2 < 10) {//because agr 10 ya is sy zayada hogi to 2 digits change hojyn gy jo ky suitable ni hy
//		cout << "Check digit= " << checkdigit + constant2 << endl;//like 8+2
//		cout << "Number should be=" << num - (checkdigit + constant2) << endl;
//		cout << endl;
//	}
// if (checkdigit - constant1>0){//0 sy brha because negative value ni hoskti
//	 cout << "Check Digit= " << checkdigit - constant1 << endl;//8-8
//		cout << "Number should be=" << num - (checkdigit - constant1) << endl;
//	}
//}
