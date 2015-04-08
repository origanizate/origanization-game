//
//  CSystemControl.h
//  elventProgram
//
//  Created by Student on 15-4-7.
//  Copyright (c) 2015年 Student. All rights reserved.
//

#ifndef __elventProgram__CSystemControl__
#define __elventProgram__CSystemControl__

#include <iostream>
using namespace std;
class CSystemControl
{
public:
    static CSystemControl * Instance();
    static void destroy();
public:
    ~CSystemControl();
public:
    void print();
protected:
    CSystemControl();
private:
    static CSystemControl * _instance;
    
};
#endif /* defined(__elventProgram__CSystemControl__) */
