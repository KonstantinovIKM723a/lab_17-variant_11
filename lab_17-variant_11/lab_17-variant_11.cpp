#include <iostream>
#include "windows.h"
using namespace std;


class File {
    string name;
    int size;
    string creationDate;
    int assignCount;
public:
    File() : name(""), size(0), creationDate(""), assignCount(0) {}
    File(string n, int s, string c, int a) : name(n), size(s), creationDate(c), assignCount(a) {}
    string getName() const { return name; }
    int getSize() const { return size; }
    string getCreationDate() const { return creationDate; }
    int getAssignCount() const { return assignCount; }
    void showFileInfo();
};

void File::showFileInfo() {
    cout << "Файл \"" << name << "\":" << endl;
    cout << "Розмір: " << size << endl;
    cout << "Дата створення: " << creationDate << endl;
    cout << "Кількість звернень: " << assignCount << endl;
    cout << endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    
}