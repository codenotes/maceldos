/*
 *  gregsharedPriv.hpp
 *  gregshared
 *
 *  Created by Gregory Brill on 5/19/16.
 *  Copyright © 2016 Gregory Brill. All rights reserved.
 *
 */

/* The classes below are not exported */
#pragma GCC visibility push(hidden)

class gregsharedPriv
{
	public:
		void HelloWorldPriv(const char *);
};

#pragma GCC visibility pop
