# LinkedList Implementation with C++

## 1 Description

I implemented a C++ program for generating the
statistics on the expense records of a group of people. The expense records
will be provided in the input file. My program reads the input file
and stores the valuable information in the records in a LinkedList. As a final
step, my program calculates the expected statistics over the LinkedList.

## 2 Details of the Code

### 2.1 Node

This class consists of two data fields for storing the data and a Node
pointer to the next node which will be used to construct LinkedList. The copy
constructor and destructor and some operator overloading are implemented.

### 2.2 LinkedList

This class consists of two Node instances that represent the head and
the tail of the list and an integer to keep the length of the list. 

- pushTail function: Adds a new node to the end of the
    list
- updateNode function: Updates the amount of money in
    a given node
- constructor
- copy constructor
- copy assignment operator
- move constructor
- move assignment operator
- destructor

### 2.3 SurveyClass

This class contains a pointer to
a LinkedList object, which is used to represent the group of people
reads. 


- handleNewRecord function: Adds a new Node object to
    the linked list or updates a corresponding Node
-  the minimum function: Calculates and returns the minimum
amount of money for the input expense records. The minimum
amount can have up to two decimal points.
- the maximum function: Calculates and returns the maxi-
    mum amount of money for the input expense records. The maximum
amount can have up to two decimal points.
- the average function: Calculates and returns the average
    amount of money for the input expense records. The average amount
    can have up to two decimal points.
- constructor
- copy constructor
- copy assignment operator
- move constructor
- move assignment operator
- destructor


### 2.4 main.cpp

This class is handling input and output.

## 3 Input/Output Format

### 3.1 Input Format

The first line of the input file holds an integer, N, showing the number
of data lines.
In the following N lines, the expense records are given, one per line.
Each record is a sentence which starts with the name of the group member
and contains the amount of money starting with symbol ’$’. Note that the
amounts can have decimal values.
The assignment is to read in each expense record and tokenize it for two
fields: the name of the group member and the amount of money. The tokens
will be stored in a Node in the LinkedList. If it is the first expense record of
the member, create a new Node. If the name was already in the linked list,
update the amount with the new one.

### 3.2 Output Format

My program calculates and prints out the three statistics in one
single line separated with a single space in the output file.

- Min: The minimum amount of expenses.
- Max: The maximum amount of expenses.
- Avg: The average amount of expenses.

## 4 Examples

```
For the input data:

5

Ali bought a pencil with $
Ayse spent $80 for clothing
Mine ordered a course book for $
Ahmet spent $100 for his new bag
Ali bought a notebook with $

The correct result is:
20 100 75
```
