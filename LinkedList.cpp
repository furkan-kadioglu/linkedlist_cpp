#include "LinkedList.h"

using namespace std;
//Constructor 
LinkedList::LinkedList(){
    this->length = 0;
    this->head = NULL;
    this->tail = NULL;
};

//Copy Constructor 
LinkedList::LinkedList(const LinkedList& list){
    this->length = list.length;
    Node* temp = list.head;
    while(temp){
        this->pushTail(temp->name,temp->amount);
        temp = temp->next;
    }
};

//Copy Assignment Operator
LinkedList& LinkedList::operator=(const LinkedList& list){
    delete this->head;
    this->length = list.length;
    Node* temp = list.head;
    while(temp){
        this->pushTail(temp->name,temp->amount);
        temp = temp->next;
    }
    return *this;
};

//Move Constructor
LinkedList::LinkedList(LinkedList&& list){
    this->length = move(list.length);
    
    this->head = list.head;
    this->tail = list.tail;
    list.length = 0;
    list.head = NULL;
    list.tail = NULL;

};

//Move Assignment
LinkedList& LinkedList::operator=(LinkedList&& list){
    this->head = list.head;
    this->tail = list.tail;
    list.length = 0;
    list.head = NULL;
    list.tail = NULL;
    return *this;
};

//Destructor
LinkedList::~LinkedList(){
    this->length=0;
    delete head;
};

void  LinkedList::pushTail(string _name, float _amount){
    if(this->tail == NULL){
        this->tail = new Node(_name,_amount);
        this->head = this->tail;
    }else {
        this->tail->next = new Node(_name,_amount);
        this->tail = this->tail->next;
    }
    
    
    this->length ++;
};

void LinkedList::updateNode(string _name, float _amount){
    Node* temp = this->head;
    while(temp != NULL){
        if (temp->name == _name){
            temp->amount = _amount;
            break;
        }else {
            temp = temp->next;
        }
    };
}
/*
void LinkedList::print(){
    Node* temp = this->head;
    
    while(temp != NULL){
        cout<<temp->name<<" "<<temp->amount<<endl;
        temp = temp->next;
    };
    
}*/
