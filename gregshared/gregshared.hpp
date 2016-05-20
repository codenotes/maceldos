/*
 *  gregshared.hpp
 *  gregshared
 *
 *  Created by Gregory Brill on 5/19/16.
 *  Copyright © 2016 Gregory Brill. All rights reserved.
 *
 */

#ifndef gregshared_
#define gregshared_

/* The classes below are exported */
#pragma GCC visibility push(default)

int add(int x, int y);

class gregshared
{
	public:
		void HelloWorld(const char *);
};

#pragma GCC visibility pop
#endif
