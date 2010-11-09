/*
 * Blackpyre Engine
 * Copyright (c) 2010 HFLW. All rights reserved.
 * 
 * Source available under the Academic Free License
 * See LICENSE for licensing information
 */
 
#ifndef WindowGLUT_h
#define WindowGLUT_h

#include "WindowFramework.h"

#include <stdint.h>

class WindowGLUT : public WindowFramework{
    public:
        WindowGLUT(int argc = 0, char **argv = 0);
        ~WindowGLUT();

        int create(char* title);
        static void handleKeypress(unsigned char key, int x, int y);
        static void nullFunc();
        static void drawGame(int);
        uint32_t getTime();
        static int fps;
        static int frame;
    private:
        static int last_time;
        static int now_time;
};

#endif // WindowGLUT_h
