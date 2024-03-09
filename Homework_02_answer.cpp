#include <iostream>

using namespace std;

struct Student {
    string name;
    int age;
    int id;
};

void fill(Student *arr, int size) {
    cout << "Enter the data of the " << size << " Student you have\n";
    for (int i = 0; i < size; ++i) {
        cout << "\nEnter the name of the student " << i + 1 << ":";
        cin >> arr[i].name;
        cout << "\nEnter the age of the student " << i + 1 << ":";
        cin >> arr[i].age;
        cout << "\nEnter the id of the student " << i + 1 << ":";
        cin >> arr[i].id;
        cout << "------------------------------------------";
    }
}

void print(Student *arr, int size) {
    cout << "The data of the " << size << " Student you have\n";
    for (int i = 0; i < size; ++i) {
        cout << "\nThe name of the student " << i + 1 << " is: ";
        cout << arr[i].name;
        cout << "\nThe age of the student " << i + 1 << " is: ";
        cout << arr[i].age;
        cout << "\nThe id of the student " << i + 1 << " is: ";
        cout << arr[i].id;
        cout << "\n------------------------------------------\n";
    }
}

int main() {
    Student arr[2];
    fill(arr, 2);
    cout << "\n*****************************************************\n";
    print(arr, 2);
    return 0;
}
