//
//  example.hpp
//  pointers
//
//  Created by Артём Семёнов on 15/10/2018.
//  Copyright © 2018 Артём Семёнов. All rights reserved.
//

#ifndef example_hpp
#define example_hpp

#include <stdio.h>

class exampleClass {
public:
    exampleClass() {}
    exampleClass(const int aa, const int bb, const int cc);
    int& returnA() {return a;}
    int& returnB() {return b;}
    int& returnC() {return c;}
private:
    int a, b, c;
};

#endif /* example_hpp */
