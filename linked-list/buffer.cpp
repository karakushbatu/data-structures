#include <iostream>
#include <string>
using namespace std;

struct Line {
    string content;
    Line* next;

    Line(string c) : content(c), next(nullptr) {}
};

class TextBuffer {
private:
    Line* head;
public:
    TextBuffer() : head(nullptr) {}

    void addLine(const string& text) {
        Line* newLine = new Line(text);
        if (!head) {
            head = newLine;
            return;
        }
        Line* curr = head;
        while (curr->next)
            curr = curr->next;
        curr->next = newLine;
    }

    void insertLineAt(int index, const string& text) {
        if (index < 0) return;
        Line* newLine = new Line(text);
        if (index == 0) {
            newLine->next = head;
            head = newLine;
            return;
        }

        Line* curr = head;
        for (int i = 0; i < index - 1 && curr; i++) {
            curr = curr->next;
        }

        if (!curr) return;

        newLine->next = curr->next;
        curr->next = newLine;
    }

    void deleteLineAt(int index) {
        if (index < 0 || !head) return;

        if (index == 0) {
            Line* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Line* curr = head;
        for (int i = 0; i < index - 1 && curr->next; i++) {
            curr = curr->next;
        }

        Line* toDelete = curr->next;
        if (toDelete) {
            curr->next = toDelete->next;
            delete toDelete;
        }
    }

    void displayBuffer() {
        Line* curr = head;
        int lineNum = 1;
        while (curr) {
            cout << lineNum++ << ": " << curr->content << endl;
            curr = curr->next;
        }
    }

    ~TextBuffer() {
        while (head) {
            Line* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    TextBuffer buffer;
    buffer.addLine("This is the first line.");
    buffer.addLine("This is the second line.");
    buffer.insertLineAt(1, "This line was inserted in between.");
    buffer.deleteLineAt(0);

    buffer.displayBuffer();

    return 0;
}
