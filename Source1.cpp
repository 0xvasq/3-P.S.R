#include <iostream>
#include <random>
#include <string>

using namespace std;

int getRandomNumber(int min, int max) {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> distribution(min, max);
	return distribution(gen);
}

char getUserInput() {
	char selection;

	do {
		cout << "Please enter your Choice: " << endl;
		cin >> selection;
	} while (selection != 'p' && selection != 's' && selection != 'r');

	return selection;

}

char getComputerMove(int min, int max) {
	char computerMove;
	int randomNum;
	randomNum = getRandomNumber(min, max);

	if (randomNum == 1) {
		return computerMove = 'r';
	}
	else if (randomNum == 2) {
		return computerMove = 'p';
	}
	else {
		return computerMove = 's';
	}
}

void gameLogic(int& winCount, int& lostCount, int& tieCount) {
	char compMove;
	char usrMove;

	compMove = getComputerMove(1, 3);
	usrMove = getUserInput();

	if (compMove == 'r' && usrMove == 'p') {
		cout << "You win" << endl;
		winCount++;
	}
	else if (compMove == 'r' && usrMove == 's') {
		cout << "You lose" << endl;
		lostCount++;
	}
	else if (compMove == 'r' && usrMove == 'r') {
		cout << "its a tie" << endl;
		tieCount++;
	}
	else if (compMove == 'p' && usrMove == 'p') {
		cout << "its a tie" << endl;
		tieCount++;
	}
	else if (compMove == 'p' && usrMove == 's') {
		cout << "you win" << endl;
		winCount++;
	}
	else if (compMove == 'p' && usrMove == 'r') {
		cout << "You lose" << endl;
		lostCount++;
	}
	else if (compMove == 's' && usrMove == 'p') {
		cout << "you lose" << endl;
		lostCount++;
	}
	else if (compMove == 's' && usrMove == 's') {
		cout << "its a tie" << endl;
		tieCount++;
	}
	else if (compMove == 's' && usrMove == 'r') {
		cout << "you win" << endl;
		winCount++;
	}

}

void displayGameCount(int gameCount, int winCount, int lostCount, int tieCount) {
	cout << "The game count is : " << gameCount << endl;
	cout << "You have won: " << winCount << " games. " << "You have lost: " << lostCount << " Games. " << "and tied: " << tieCount << " games." << endl;
}

int main() {

	int a;
	int gameCount = 0;
	int winCount = 0;
	int lostCount = 0;
	int tieCount = 0;

	do {
		cout << "Lets play Rock, Paper, Scissor" << endl;
		cout << "Lets make a move" << endl;
		cout << "Please select a selection: " << endl;
		cin >> a;

		switch (a) {
		case 1: gameLogic(winCount, lostCount, tieCount);
			gameCount++;
			break;
		case 2: displayGameCount(gameCount, winCount, lostCount, tieCount);
			break;
		}

	} while (a != 5);

	return 0;
};