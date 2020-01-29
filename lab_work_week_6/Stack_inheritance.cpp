#include "Stack_inheritance.h"
List::Element::Element(int data) {
    this->data = data;
    this->next = nullptr;
}
List::List()
{
    this->head = nullptr;
}
void Stack::Add(int data) {
    if (this->head == nullptr) {
        head = new Element(data);
        head->next = nullptr;
    }
    else {
        Element* temp = this->head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new Element(data);
    }
}
int Stack::Top() {
    if (this->head == nullptr) {
        return -1;
    }
    else {
        Element* temp = this->head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        return temp->data;
    }
}
void Stack::Delete() {
    if (this->head == nullptr) {

    }
    else if (this->head->next == nullptr) {
        Element* temp = this->head;
        delete temp;
        temp = nullptr;
        this->head = temp;
    }
    else {
        Element* temp = this->head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }
}
void Stack::Delete_all() {
    while (this->head != nullptr) {
        this->Delete();
    }
}
void Line_inh::Add(int data) {
    if (this->head == nullptr) {
        head = new Element(data);
        head->next = nullptr;
    }
    else {
        Element* temp = this->head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new Element(data);
    }
}
int Line_inh::Top() {
    if (this->head == nullptr) {
        return -1;
    }
    else {
        return this->head->data;
    }
}
void Line_inh::Delete() {
    if (this->head == nullptr) {

    }
    else if (this->head->next == nullptr) {
        Element* temp = this->head;
        delete temp;
        temp = nullptr;
        this->head = temp;
    }
    else {
        Element* temp = this->head;
        Element* temp_2 = this->head->next;
        delete temp;
        temp = nullptr;
        this->head = temp_2;
    }
}
void Line_inh::Delete_all() {
    while (this->head != nullptr) {
        Line_inh::Delete();

    }
}
