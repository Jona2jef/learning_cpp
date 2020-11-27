#include <iostream>


using namespace std;

int main() {
	/*
	* First input the number.
	* Check if only two factors are there.
	* A prime number must have only two factors.
	* NOTE: To check weather a number is a factor of another, use % operator.
	*/
	char prompt;					// to ask the user whether to run it again.
	do {
		int limit;
		cout << "Enter limit: ";
		cin >> limit;
		int primes;				// number of primes
		int num = 1;				// the number itself
		int factors = 0;			// its factors (number, not the factor)
		for (int j = 0; j <= limit; j++) {        // print upto the limit
			for (int count = 1; count <= num; count++) {
				if (num % count == 0)
					factors++;
				}

			if (factors == 2) {
				cout << "P";
				primes++;
				}
			else
				cout << "N";

			factors = 0;
			num++;
		}

		// print the number of prime numbers
		cout << endl << "Number of prime numbers upto " << limit << "=" << primes << endl;
		primes = 0; // make it zero.
// want to do this again?
		cout << endl << "Continue? (Y/n): ";
		cin >> prompt;
	} while (prompt != 'n');
}

