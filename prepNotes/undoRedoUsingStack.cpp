#include <iostream>
using namespace std;

class TextEditor {
private:
    string text;

    string undo[100];
    string redo[100];

    int uTop;
    int rTop;

public:
    TextEditor() {
        text = "";
        uTop = -1;
        rTop = -1;
    }

    void insert(string value) {

        // Overflow check
        if (uTop >= 99) {
            cout << "Undo Stack Overflow\n";
            return;
        }

        undo[++uTop] = text;   // save old state
        text = text + value;

        rTop = -1;  // clear redo
    }

    void undoText() {

        // Underflow check
        if (uTop < 0) {
            cout << "Nothing to Undo\n";
            return;
        }

        if (rTop >= 99) {
            cout << "Redo Stack Overflow\n";
            return;
        }

        redo[++rTop] = text;
        text = undo[uTop--];
    }

    void redoText() {

        // Underflow check
        if (rTop < 0) {
            cout << "Nothing to Redo\n";
            return;
        }

        if (uTop >= 99) {
            cout << "Undo Stack Overflow\n";
            return;
        }

        undo[++uTop] = text;
        text = redo[rTop--];
    }

    void show() {
        cout << "Current Text: " << text << endl;
    }
};

int main() {

    TextEditor editor;

    editor.insert("Rupinder ");
    editor.insert("Singh");

    editor.show();

    editor.undoText();
    editor.show();

    editor.redoText();
    editor.show();

    return 0;
}
