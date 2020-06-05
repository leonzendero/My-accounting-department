#include <fstream>
#include <iostream>
#include "lab5.h"

Element * readFromTextFile(const string& filename) {
    Element * head = nullptr; // голова списка
    Element * tail = nullptr; // хвост списка
    ifstream fin;
    fin.open("file.txt");
    if (!fin.is_open()) {
        cout << "Error file open!\n";
    } else {
        int count;
        fin >> count; // сколько там элементов
        for (int i = 0; i < count; ++i) {
            auto * p = new Product;
            fin >> p->id >> p->name >> p->type >> p->producer >> p->cost >> p->year >> p->number;
            addInTail(p, &head, &tail); // передача указателя на голову и хвост
        }
        return head;
    }
}


void addInTail(Product *product, Element **pHead, Element **pTail) { // получает указатели
    auto * t = new Element; // добавление в хвост
    t->p = product;
    t->next = nullptr; // больше ничего нет
    if (*pHead == nullptr) {
        *pHead = t;
    } else {
        (*pTail)->next = t;
    }
    *pTail = t; // на последний элемент
}


void FindByCost(int cost, Element * list) { // поиск
    Element * t = list;
    while (t) {
        if (t->p->cost < cost) {
            printOne(*(t->p));
        }
        t = t->next;
    }
    cout << "=======================================" << endl;
}


void FindByYear(int year, Element * list) { // поиск
    Element * t = list;
    while (t) {
        if (t->p->year > year) {
            printOne(*(t->p));
        }
        t = t->next;
    }
    cout << "=======================================" << endl;
}

void printOne(const Product& p) { // поиск
    cout << p.id << " " << p.name << " " << p.type << " " << p.producer << " " << p.cost << " " << p.year << " " << p.number << endl;
}


void print(Element * list) { // вывод
    Element * t = list;
    while (t) {
        printOne(*(t->p));
        t = t->next;
    }
    cout << "=======================================" << endl;
}

Product * FindByFullInfo(const int& id, Element * list) {
    Element * t = list;
    while (t) {
        if (t->p->id == id) {
            return t->p;
        }
        t = t->next;
    }
    return nullptr;
}

Product * DeleteFullString(const int& id, Element * list) {
    Element * t = list;
    while (t) {
        if (t->p->id == id) {
            delete(t);
        }
        t = t->next;
    }
    return nullptr;
}
