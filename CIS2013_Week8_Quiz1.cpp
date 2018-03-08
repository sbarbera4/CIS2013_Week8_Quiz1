#include <iostream>

using namespace std;

int change = 0;
int quarters = 0;
int q = 0;
int dimes = 0;
int d = 0;
int nickels = 0;
int n = 0;
int p = 0;

void counter(int a)
{
	quarters = a % 25;
	q = (a - quarters) / 25;
	dimes = quarters % 10;
	d = (quarters - dimes) / 10;
	nickels = dimes % 5;
	n = (dimes - nickels) / 5;
	p = nickels % 5;



	cout << "you have " << q << " quarters" << endl;
	cout << d << " dimes" << endl;
	cout << n << " nickels" << endl;
	cout << "and " << p << " pennies" << endl;

}


int main()
{
	
	cout << "how much money do you have (in cents)?" << endl;
	cin >> change;

	counter(change);

}