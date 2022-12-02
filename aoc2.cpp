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
        char yourPlay = str[2];
        if(yourPlay == 'X') {
            totalScore += 1;
            if(opponentPlay == 'A') {
                totalScore += 3;
            }
            else if(opponentPlay == 'C') {
                totalScore += 6;
            }
        }
        else if(yourPlay == 'Y') {
            totalScore += 2;
            if(opponentPlay =='A') {
                totalScore += 6;
            }
            else if(opponentPlay == 'B') {
                totalScore += 3;
            }
        }
        else if(yourPlay == 'Z') {
            totalScore += 3;
            if(opponentPlay == 'B') {
                totalScore += 6;
            }
            else if(opponentPlay == 'C') {
                totalScore += 3;
            }
        }
    }
    cout << totalScore << endl;
    return 0;
}