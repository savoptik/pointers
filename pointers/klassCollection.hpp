//
//  klassCollection.hpp
//  pointers
//
//  Created by Артём Семёнов on 15/10/2018.
//  Copyright © 2018 Артём Семёнов. All rights reserved.
//

#ifndef klassCollection_hpp
#define klassCollection_hpp

#include <iostream>
#include <vector>
#include "example.hpp"

class klassCollection {
public:
    klassCollection();
    void output();
    private:
    std::vector< int *> a, b, c;
    std::vector<exampleClass> steck;
};

#endif /* klassCollection_hpp */
