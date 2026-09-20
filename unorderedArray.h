//
//  unorderedArray.h
//  unorderedArray
//
//  Created by Nadjah Duke on 9/2/26.
//

#ifndef UNORDEREDARRAY_H
#define UNORDEREDARRAY_H
#include <iostream>
class unorderedArray
{
private:
    int *theArray;
    int capacity;
    int numOfElems;
    
public:
    unorderedArray(int size)
    {
        capacity = size;
        theArray = new int [capacity];
        numOfElems = 0;
    }
 ~unorderedArray()
    {
     delete [] theArray;
     std::cout << "Destructor ran memory free \n";
    }
    void add(int data);
    bool remove(int data);
    bool search(int data);
    bool isFull();
    bool isEmpty();
    void print();
};

#endif // !UNORDEREDARRAY_H
