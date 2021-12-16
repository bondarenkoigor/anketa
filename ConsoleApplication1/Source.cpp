#include <iostream>
#include"c_person.h"

using namespace std;

int lessthan18(c_person* arr, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i].getage() < 18) count++;
    }
    return count;
}
int main()
{
    const int size = 10;
    c_person arr[size];
    for (int i = 0; i < size; i++)
    {
        char name[100];
        int age;
        cout << i+1 << "/" << size << "\n";
        cout << "enter name:";
        gets_s(name, 100);
        arr[i].setname(name);
        cout << "enter age:";
        cin >> age;
        arr[i].setage(age);
        cin.ignore();
        system("cls");
    }
    std::cout << "people less than 18yo:" << lessthan18(arr, size);
}


