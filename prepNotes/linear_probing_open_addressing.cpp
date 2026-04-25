#include <iostream>
using namespace std;

class HashTable {
    int size;
    int *table;

public:
    HashTable(int s) {
        size = s;
        table = new int[size];

        for(int i = 0; i < size; i++)
            table[i] = -1;
    }

    int hashFunction(int key) {
        return key % size;
    }

    void insert(int key) {
        int index = hashFunction(key);

        while(table[index] != -1) {
            index = (index + 1) % size;
        }

        table[index] = key;
    }

    void display() {
        for(int i = 0; i < size; i++) {
            cout << i << " : " << table[i] << endl;
        }
    }
};

int main() {
    HashTable ht(5);

    ht.insert(1);
    ht.insert(6);
    ht.insert(11);
    ht.insert(4);

    ht.display();

    return 0;
}