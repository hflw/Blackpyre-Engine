/*
 * Blackpyre Engine
 * Copyright (c) 2010 HFLW. All rights reserved.
 * 
 * Source available under the Academic Free License
 * See LICENSE for licensing information
 */

#ifndef Global_h
#define Global_h


class WindowFramework;
class GlUtil;
class ObjectManager;
class ResourceManager;

class Global {
    public:
	~Global();

        int init(int argc = 0, char **argv = 0);
        void setupGame();
	    static Global *getInstance();
	
    	static WindowFramework  *window;
        static GlUtil           *glUtil;
        static ObjectManager    *objectManager;
        static ResourceManager  *resourceManager;

    private:
        static Global *instance;
	
	Global();
};

#endif // Global_h
