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

	cout << "please enter your Choise: " << endl;
	cin >> selection;

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

void gameLogic() {
	char compMove;
	char usrMove;

	compMove = getComputerMove(1, 3);
	usrMove = getUserInput();

	if (compMove == 'r' && usrMove == 'p') {
		cout << "You win" << endl;
	}
	else if (compMove == 'r' && usrMove == 's') {
		cout << "You lose" << endl;
	}
	else if (compMove == 'r' && usrMove == 'r') {
		cout << "its a tie" << endl;
	}
	else if (compMove == 'p' && usrMove == 'p') {
		cout << "its a tie" << endl;
	}
	else if (compMove == 'p' && usrMove == 's') {
		cout << "you win" << endl;
	}
	else if (compMove == 'p' && usrMove == 'r') {
		cout << "You lose" << endl;
	}
	else if (compMove == 's' && usrMove == 'p') {
		cout << "you lose" << endl;
	}
	else if (compMove == 's' && usrMove == 's') {
		cout << "its a tie" << endl;
	}
	else if (compMove == 's' && usrMove == 'r') {
		cout << "you win" << endl;
	}

}

int main() {

	int a;

	do {
		cout << "Lets play Rock, Paper, Scissor" << endl;
		cout << "Lets make a move" << endl;
		cout << "Please select a selection: " << endl;
		cin >> a;

		switch (a) {
		case 1: gameLogic();
			break;
		case 2:;
			break;
		}

	} while (a != 5);


};