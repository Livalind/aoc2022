#include <iostream>
using namespace std;

int main() {
    string str;
    int totalScore = 0;

    while(getline(cin, str)) {
        if(str.empty()) {
            break;
        }

        char opponentPlay = str[0];
        char outcome = str[2];
        if(outcome == 'X') {
            if(opponentPlay == 'A') {
                totalScore += 3;
            }
            else if(opponentPlay == 'B') {
                totalScore += 1;
            }
            else if(opponentPlay == 'C') {
                totalScore += 2;
            }
        }
        else if(outcome == 'Y') {
            totalScore += 3;
            if(opponentPlay == 'A') {
                totalScore += 1;
            }
            else if(opponentPlay == 'B') {
                totalScore += 2;
            }
            else if(opponentPlay == 'C') {
                totalScore += 3;
            }
        }
        else if(outcome == 'Z') {
            totalScore += 6;
            if(opponentPlay == 'A') {
                totalScore += 2;
            }
            else if(opponentPlay == 'B') {
                totalScore += 3;
            }
            else if(opponentPlay == 'C') {
                totalScore += 1;
            }
        }
    }
    cout << totalScore << endl;
    return 0;
}