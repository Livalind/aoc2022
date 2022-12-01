#include <iostream>
using namespace std;

int main() {
    string str = "";
    int current = 0;
    int max = 0;
    int second = 0;
    int third = 0;
    while(true) {
        getline(cin,str);
        if(str.length() == 0) {
            break;
        }
        current = 0;
        while(str.length() != 0) {
            current += stoi(str);
            getline(cin, str);
        }

        if(current > max) {
            third = second;
            second = max;
            max = current;
        }
        else if(current > second) {
            third = second;
            second = current;
        }
        else if(current > third) {
            third = current;
        }
    }
    cout << (max + second + third);
    return 0;
}