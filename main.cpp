#include <iostream>

using namespace std;

int main() {

	cout << "Hello World!" << endl << endl;

	int iPlayerGuesses = 5;
	int iGoalNum = rand() % 101;
	cout << iGoalNum;
	int iPlayerGuess;
	int iPlayerWon = 0;


	while (iPlayerGuesses > 0)
	{
		cout << "Enter your guess:";
		cin >> iPlayerGuess;

		if (iPlayerGuess == iGoalNum)
		{
			cout << "You won" << endl;
			iPlayerWon = 1;
			iPlayerGuesses = 0;
		}
		else if (iPlayerGuess < iGoalNum)
		{
			cout << "Higher" << endl;
		}
		else if (iPlayerGuess > iGoalNum)
		{
			cout << "Lower" << endl;
		}

		if (iPlayerWon != 1)
		{
			iPlayerGuesses--;
			if (iPlayerGuesses != 0)
			{
				cout << iPlayerGuesses << " guesses remaining" << endl << endl;
			}
		}
	}

	if ((iPlayerGuesses == 0) && (iPlayerWon = !1))
	{
		cout << "You lost, you loser" << endl;
	}



	system("PAUSE");

	return 0;
}