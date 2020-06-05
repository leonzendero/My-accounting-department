#include <iostream>
#include "lab5.h"

using namespace std;

int menu();

int main() {

    Element * list = nullptr;

    int m;

    while ((m = menu())) {
        switch (m) {
            case 1: {
                print(list);
                break;
            }
            case 2: {
                cout << "Year:";
                int year;
                cin >> year;
                FindByYear(year, list);
                break;
            }
            case 3: {
                cout << "Cost:";
                int cost;
                cin >> cost;
                FindByCost(cost, list);
                break;
            }
            case 4: {
                cout << "Id:";
                int id;
                cin >> id;
                Product * p = FindByFullInfo(id, list);
                if (p) {
                    printOne(*p);
                } else {
                    cout << "Not found\n";
                }
            }
            case 5: {
                list = readFromTextFile("file.txt");
                cout << "Read not mistake!\n";
                break;
            }
            case 6: {
                cout << "Delete full string onto id:";
                int id;
                cin >> id;
                Product * p = DeleteFullString(id, list);
                if (p) {
                    printOne(*p);
                } else {
                    cout << "Not found\n";
                }
            }
            default: {
                cout << "Error\n";
            }
        }
    }
}


int menu() {
    cout << "1. Print all" << endl;
    cout << "2. List of goods whose shelf life is longer than specified." << endl;
    cout << "3. A list of goods of a given name, the price of which is not more than a given" << endl;
    cout << "4. Find all information onto id" << endl;
    cout << "5. Read from file" << endl;
    cout << "0. Exit" << endl;
    int n;
    cin >> n;
    return n;
}