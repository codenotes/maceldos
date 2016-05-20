/*
 *  gregshared.cpp
 *  gregshared
 *
 *  Created by Gregory Brill on 5/19/16.
 *  Copyright © 2016 Gregory Brill. All rights reserved.
 *
 */

#include <iostream>
#include "gregshared.hpp"
#include "gregsharedPriv.hpp"

void gregshared::HelloWorld(const char * s)
{
	 gregsharedPriv *theObj = new gregsharedPriv;
	 theObj->HelloWorldPriv(s);
	 delete theObj;
};

void gregsharedPriv::HelloWorldPriv(const char * s) 
{
	std::cout << s << std::endl;
};

int add(int x, int y)
{
    
    
    return x+y;
}