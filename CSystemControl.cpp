//
//  CSystemControl.cpp
//  elventProgram
//
//  Created by Student on 15-4-7.
//  Copyright (c) 2015年 Student. All rights reserved.
//

#include "CSystemControl.h"
CSystemControl * CSystemControl::_instance = NULL;
CSystemControl * CSystemControl::Instance()
{
    if (_instance == NULL)
    {
        _instance = new CSystemControl;
        
    }
    return _instance;
}
CSystemControl::~CSystemControl()
{
    //释放开辟空间的属性
    destroy();
    cout<<"destroy"<<endl;
}
void CSystemControl::destroy()
{
    if (_instance)
    {
        delete _instance;
        _instance = NULL;
        
    }
}
CSystemControl::CSystemControl()
{
    cout<<"Construct a SystemControl object"<<endl;
}
void CSystemControl::print()
{
    cout<<"Call thw Print method"<<endl;
}