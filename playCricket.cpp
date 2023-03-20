//playCricket.cpp: A cpp program to play a game of hand cricket with computer

#include <iostream>
#include <cstdlib>
#include <random>
using namespace std;

int playerScore, compScore;

void batting();
void bowling();
void doToss(char toss)
{   
    int userToss, compToss;
    if (toss == 'h')
        {
            userToss = 0;
        }
    else
        {
            userToss = 1;
        }
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dis(0, 1);
        compToss = dis(gen);
        if (compToss==userToss)
        {
            cout << "Congrats! You won the toss." << endl;
            batting();
        }
        else
        {
            cout << "You lost the toss." << endl;
            bowling();
        }
}

void batting()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 6);
    int score, randScore;
    //srand((unsigned)time(NULL));
    //randScore = (rand() % 7);
    randScore = dis(gen);
    cout << "Start entering numbers from 0 to 6" << endl;
    do
    {
        cin >> score;
        if (score < 0 || score > 6)
        {
            cout << "Invalid input. Enter number from 0 to 6: " << endl;
            continue;
        }
        playerScore += score;
        cout << "Nice. Your score is: " << playerScore << endl;
    } while (score != randScore);
    cout << "You're out. Your total score is: " << playerScore << endl;
    bowling();
}

void bowling()
{
    int score, randScore;
    cout << "Total target for the computer is " << playerScore << ". Now the computer will bat." << endl;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 6);
    randScore = dis(gen);
    cout << "Start entering numbers from 0 to 6" << endl;
    do
    {
        cin >> score;
        if (score < 0 || score > 6)
        {
            cout << "Invalid input. Enter number from 0 to 6: " << endl;
            continue;
        }
        compScore += score;
        cout << "The computer's score is : " << compScore << endl;
    } while (score != randScore);
    cout << "The computer is out at a score of " << compScore << endl;
    return;
}

int main()
{
    char toss;
	cout << R"(
  __          __  _                            _______       _____      _      _        _           
  \ \        / / | |                          |__   __|     / ____|    (_)    | |      | |  
   \ \  /\  / /__| | ___ ___  _ __ ___   ___     | | ___   | |     _ __ _  ___| | _____| |_ 
    \ \/  \/ / _ \ |/ __/ _ \| '_ ` _ \ / _ \    | |/ _ \  | |    | '__| |/ __| |/ / _ \ __|
     \  /\  /  __/ | (_| (_) | | | | | |  __/    | | (_) | | |____| |  | | (__|   <  __/ |_ 
      \/  \/ \___|_|\___\___/|_| |_| |_|\___|    |_|\___/   \_____|_|  |_|\___|_|\_\___|\__|
                                                                                            
                                                                                             
)" << '\n';
    cout << "To start the toss, please choose (h)eads or (t)ails: " << endl;
    cin >> toss;
    doToss(toss);
    if (playerScore > compScore)
    {
        cout << "Congrats. You won." << endl;
    }
    else
    {
        cout << "You lost :(" << endl;
    }
    return 0;
}