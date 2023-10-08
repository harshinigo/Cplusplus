#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    int playerChoice, computerChoice;
    int playerScore = 0, computerScore = 0;
    int rounds;

    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "How many rounds do you want to play? ";
    cin >> rounds;

    for (int round = 1; round <= rounds; ++round) {
        cout << "\nRound " << round << endl;
        cout << "Choose (1) Rock, (2) Paper, or (3) Scissors: ";
        cin >> playerChoice;

        // Generate a random choice for the computer (1 for Rock, 2 for Paper, 3 for Scissors)
        computerChoice = rand() % 3 + 1;

        cout << "Computer chose: ";
        switch (computerChoice) {
            case 1:
                cout << "Rock" << endl;
                break;
            case 2:
                cout << "Paper" << endl;
                break;
            case 3:
                cout << "Scissors" << endl;
                break;
        }

        // Determine the winner for this round
        if (playerChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((playerChoice == 1 && computerChoice == 3) ||
                   (playerChoice == 2 && computerChoice == 1) ||
                   (playerChoice == 3 && computerChoice == 2)) {
            cout << "You win this round!" << endl;
            playerScore++;
        } else {
            cout << "Computer wins this round!" << endl;
            computerScore++;
        }
    }

    cout << "\nGame Over!" << endl;
    cout << "Your score: " << playerScore << " Computer's score: " << computerScore << endl;

    if (playerScore > computerScore) {
        cout << "Congratulations, you win!" << endl;
    } else if (playerScore < computerScore) {
        cout << "Sorry, computer wins!" << endl;
    } else {
        cout << "It's a tie game!" << endl;
    }

    return 0;
}
