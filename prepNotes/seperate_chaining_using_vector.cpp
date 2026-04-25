#include <iostream>
#include <vector>
using namespace std;

class HashTable {
    int size;
    vector<vector<int>> table;

public:
    HashTable(int s) {
        size = s;
        table.resize(size);
    }

    int hashFunction(int key) {
        return key % size;
    }

    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    void display() {
        for(int i = 0; i < size; i++) {
            cout << i << " : ";
            for(int val : table[i]) {
                cout << val << " -> ";
            }
            cout << "NULL\n";
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