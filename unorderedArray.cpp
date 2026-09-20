//
//  unorderedArray.cpp
//  unorderedArray
//
//  Created by Nadjah Duke on 9/2/26.
//

#include "unorderedArray.h"
#include <iostream>

bool unorderedArray::isFull()
{
    return (numOfElems == capacity);
}
bool unorderedArray::isEmpty()
{
    return (numOfElems == 0);
}
void unorderedArray::add(int data)
{
    if(isFull())
    {
        //try to implement try catch
        std::cout << "Cannot Add To Full Array \n";
        return;
    }
    
    theArray[numOfElems] = data;
    numOfElems++;
}

void unorderedArray::print()
{
    for(int i = 0; i < numOfElems; i++)
    {
        std::cout << theArray[i] << "\n";
    }
}

bool unorderedArray::search(int data)
{
    if(isEmpty())
    {
        return false;
    }
   
    for(int i = 0; i < numOfElems; i++)
    {
        if(theArray[i] == data)
        {
            return true;
        }
    }
    return false;
}

bool unorderedArray:: remove(int data)
{
    if(isEmpty())
    {
        return false;
    }
    
    int i;
    for(i = 0; i < numOfElems; i++)
    {
        if(theArray[i] == data)
        {
            for(int j = i; j < numOfElems-1; j++)
            {
                theArray[j] = theArray[j+1];
            }
            
            numOfElems--;
            return true;
        }
    }
    return false;
}


