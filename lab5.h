#ifndef UNTITLED5_LAB5_H
#define UNTITLED5_LAB5_H

#include <string>

using namespace std;

struct Product {
    int id{};
    string name;
    string type;
    string producer;
    int cost{};
    int year{};
    int number{};
};

struct Element {
    Product * p;
    Element * next;
};

void print(Element * list);

void FindByCost(int cost, Element * list);

void FindByYear(int year, Element * list);

void printOne(const Product& product);

Element * readFromTextFile(const string& filename);

void addInTail(Product * product, Element **pHead, Element **pTail);

Product * FindByFullInfo(const int& id, Element * list);

Product * DeleteFullString(const int& id, Element * list);

#endif //UNTITLED5_LAB5_H