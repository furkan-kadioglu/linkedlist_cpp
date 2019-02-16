#ifndef LinkedList_H
#define LinkedList_H

#include <iostream>
#include "Node.h"

class LinkedList {
public:
    int length;
    // pointer to the first element of LinkedList
    Node *head = 0;
    // pointer to the last element of LinkedList
    Node *tail = 0;

    LinkedList();

    LinkedList(const LinkedList& list);

    //copy assigment operator 
    LinkedList & operator=(const LinkedList& list);

    //move constructor 
    LinkedList(LinkedList&& list);

    // move asigment operator
    LinkedList & operator=(LinkedList&& list);

    // add a new element to the back of LinkedList
    void pushTail(string _name, float _amount);

    // update an existing element
    void updateNode(string _name, float _amount);

    //void print();

    ~LinkedList();
};

#endif

