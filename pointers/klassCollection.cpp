//
//  klassCollection.cpp
//  pointers
//
//  Created by Артём Семёнов on 15/10/2018.
//  Copyright © 2018 Артём Семёнов. All rights reserved.
//

#include "klassCollection.hpp"
using namespace std;

klassCollection::klassCollection() { 
    a.resize(10);
    b.resize(10);
    c.resize(10);
    steck.resize(10);
    for (int i = 0; i < 10; i++) {
        exampleClass ec(i, 10-i, i);
        steck[i] = ec;
        a[i] = &steck[i].returnA();
        b[i] = &steck[i].returnB();
        c[i] = &steck[i].returnC();
    }
}

void klassCollection::output() { 
    for (int i = 0; i < 10; i++) {
        cout << *a[i] << " ";
    } cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << *b[i] << " ";
    } cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << *c[i] << " ";
    } cout << endl;
}

