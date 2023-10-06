#include <iostream>
using namespace std;
void printMove(int disc, char from, char to) {
    cout << "Move disc " << disc << " from rod " << from << " to rod " << to << endl;
}


void towerOfHanoi(int n, char from, char aux, char to) {
    if (n == 1) {
        printMove(n, from, to);
        return;
    }
    towerOfHanoi(n-1, from, to, aux);
    printMove(n, from, to);

    towerOfHanoi(n-1, aux, from, to);
}

int main() {

    int n = 5;
    char A = 'A';
    char B = 'B';
    char C = 'C';

    towerOfHanoi(n, A, B, C);
    return 0;
}

