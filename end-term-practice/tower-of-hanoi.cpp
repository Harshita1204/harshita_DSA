
#include <iostream>
using namespace std;

void towerOfHanoi(int n,
                  char source,
                  char auxiliary,
                  char destination) {

    if(n == 1) {

        cout << "Move Disk 1 from "
             << source
             << " to "
             << destination << endl;

        return;
    }

    towerOfHanoi(n - 1,
                 source,
                 destination,
                 auxiliary);

    cout << "Move Disk "
         << n
         << " from "
         << source
         << " to "
         << destination << endl;

    towerOfHanoi(n - 1,
                 auxiliary,
                 source,
                 destination);
}

int main() {

    towerOfHanoi(3, 'A', 'B', 'C');

    return 0;
}