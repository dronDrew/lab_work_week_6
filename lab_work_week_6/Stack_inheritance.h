#pragma once
#include "dependies.h"
class List
{
protected:
    class Element {
    public:
        int data;
        Element* next;
        Element(int data);
    };
    Element* head;
public:
    List();
    void virtual Add(int data) = 0;
    void virtual Delete() = 0;
    void virtual Delete_all() = 0;
    int virtual Top() = 0;

};
class Stack :protected List {
public:
    void Add(int data)override;
    void  Delete()override;
    void Delete_all()override;
    int Top()override;
};
class Line_inh :protected List {
public:
    void  Add(int data)override;
    void Delete()override;
    void Delete_all()override;
    int Top()override;

};
