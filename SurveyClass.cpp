#include "SurveyClass.h"
SurveyClass::SurveyClass(){
    this->members = new LinkedList();
}
SurveyClass::SurveyClass(const SurveyClass& other){
    this->members = other.members;
}
SurveyClass& SurveyClass::operator=(const SurveyClass& list){
    this->members = list.members;
    return *this;
}
SurveyClass::SurveyClass(SurveyClass&& other){
    this->members = other.members;
    other.members = NULL;
}
SurveyClass& SurveyClass::operator=(SurveyClass&& list){
    this->members = list.members;
    list.members = NULL;
    return *this;
}
SurveyClass::~SurveyClass(){
    delete this->members;
}
void SurveyClass::handleNewRecord(string _name, float _amount){
    this->members->pushTail(_name,_amount);
}
float SurveyClass::calculateMinimumExpense(){
    Node* temp = this->members->head;
    float min_expense;
    while(temp){
        if(!min_expense){
            min_expense = temp->amount;
        }else {
            min_expense>temp->amount ? min_expense = temp->amount:min_expense;
        }
        temp = temp->next;
    }
    return ((int)((min_expense)*100.0 + 0.5F)) / 100.0F;
}

float SurveyClass::calculateMaximumExpense(){
    Node* temp = this->members->head;
    float max_expense;
    while(temp){
        if(!max_expense){
            max_expense = temp->amount;
        }else {
            max_expense<temp->amount ? max_expense = temp->amount:max_expense;
        }
        temp = temp->next;
    }

    return ((int)((max_expense)*100.0 + 0.5F)) / 100.0F;
}

float SurveyClass::calculateAverageExpense(){
    Node* temp = this->members->head;
    float total_expense;
    while(temp){
        total_expense += temp->amount;
        temp = temp->next;
    }
    return ((int)((total_expense/this->members->length)*100.0 + 0.5F)) / 100.0F;
}
