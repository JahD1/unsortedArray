//
//  main.cpp
//  unorderedArray
//
//  Created by Nadjah Duke on 9/2/26.
//

#include <iostream>
#include "unorderedArray.h"

int main() {
    
    unorderedArray array1(3);
    
    array1.add(5);
    array1.add(10);
    array1.add(20);
    
    array1.print();
    
    bool found =  array1.search(50);
    std::cout << found << "\n";
    
    std:: cout <<"\n\n";
    array1.remove(5);
    array1.print();
    return 0;
}
