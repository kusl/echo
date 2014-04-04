//
//  CBase.h
//  echo
//
//  Created by stem1 on 4/4/14.
//  Copyright (c) 2014 kushal. All rights reserved.
//

#ifndef echo_CBase_h
#define echo_CBase_h

class CBase{
protected:
    int id;
public:
    CBase(){
        id = 0;
    }
    CBase(int inputId){
        id = inputId;
    }
    
};

#endif
