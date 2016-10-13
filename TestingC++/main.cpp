//
//  main.cpp
//  TestingC++
//
//  Created by Terry Johnson on 10/12/16.
//  Copyright © 2016 Terry Johnson. All rights reserved.
//

#include <iostream>
#include <iomanip>

int main(int argc, const char * argv[]) {
    int year = 2016, mon = 10, day = 12;
    
    
    // insert code here...
    std::cout << "Hello, World!\n";
    
    std::cout << "Today is : "
    << std::setw (2) << std::setfill ('0') << day
    << "."
    << std::setw (2) << std::setfill ('0') << mon
    << "."
    << year << ".\n" << std::endl;
    
    return 0;
}
