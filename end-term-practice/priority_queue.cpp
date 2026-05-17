#include <iostream>
using namespace std;

class PriorityQueue {

    int arr[100];
    int size;

    public:

    PriorityQueue() {
        size = 0;
    }

    void insert(int value) {

        int i;

        for(i = size - 1;
            i >= 0 && arr[i] < value;
            i--) {

            arr[i + 1] = arr[i];
        }

        arr[i + 1] = value;

        size++;
    }

    void deleteElement() {

        if(size == 0) {

            cout << "Queue Empty";
            return;
        }

        cout << "Deleted: "
             << arr[0] << endl;

        for(int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--;
    }

    void display() {

        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
    }
};

int main() {

    PriorityQueue pq;

    pq.insert(10);
    pq.insert(50);
    pq.insert(20);

    pq.display();

    cout << endl;

    pq.deleteElement();

    pq.display();

    return 0;
}