#include <iostream>
#include <cmath>
using namespace std;


int calcFunc (float currency, float &userMoney) {
        int currencyCount;
				if (userMoney >= .005 && userMoney < .01) {
						currencyCount = round(userMoney / currency);
				}else {
					currencyCount = userMoney / currency;
				}
				userMoney = userMoney - currencyCount * currency;
				return currencyCount;
}


int main () {
	float userMoneyIn;
	cout << "Enter amount of money: ";
	cin >>  userMoneyIn;
	int fiftyCount = calcFunc (50, userMoneyIn);
	cout << " $50: " << fiftyCount << endl;
	int twentyCount = calcFunc (20, userMoneyIn);
	cout << " $20: " << twentyCount << endl;
	int tenCount = calcFunc (10, userMoneyIn);
	cout << " $10: " << tenCount << endl;
	int fiveCount = calcFunc (5, userMoneyIn);
	cout << " $05: " << fiveCount << endl;
	int oneCount = calcFunc (1, userMoneyIn);
	cout << " $01: " << oneCount << endl;
	int quarterCount = calcFunc (.25, userMoneyIn);
	cout << " $.25: " << quarterCount << endl;
	int dimeCount = calcFunc (.10, userMoneyIn);
	cout << " $.10: " << dimeCount << endl;
	int nickelCount = calcFunc (.05, userMoneyIn);
	cout << " $.05: " << nickelCount << endl;
	int pennyCount = calcFunc (.01, userMoneyIn);
	cout << " $.01: " << pennyCount << endl;
	return 0;
}


