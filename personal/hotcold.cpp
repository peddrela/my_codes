#include <iostream>
#include <random>
#include <ctime>
using namespace std;

bool hot_cold(int previous_guess, int guess, int target, int count){
    if (guess < 1 || guess > 100) {
        cout << "Guess must be between 1 and 100." << endl;
        return false;
    }
    if (count == 0){
        if (guess == target) {
            cout << "Correct! You've guessed the number!" << endl;
            return true;
        } else {
            cout << "Incorrect! Try again...\n";
            return false;
        }
    }
    
    else if (count > 0){
        if (guess == target) {
            cout << "Correct! You've guessed the number!" << endl;
            return true;
        } else if (abs(target - guess) < abs(target - previous_guess)) {
            cout << "Hotter! You're getting closer." << endl;
            return false;
        } else if (abs(target - guess) > abs(target - previous_guess)) {
            cout << "Colder! You're getting further away." << endl;
            return false;
        }
    }
    return false;
}


int main(){
    int n;
    srand(time(0));
    int secret = rand() % 100 + 1;
    bool game_over = false;
    cout << "Digite um número: ";
    int count = 0;
    while (!game_over)
    {   
        int previous = n;
        cin >> n;
        if (hot_cold(previous, n, secret, count))
        {
            game_over = true;
        }
        count++;
    }
    
    return 0;
}
