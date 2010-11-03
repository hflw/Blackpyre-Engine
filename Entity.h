/*
 * Blackpyre Engine
 * Copyright (c) 2010 William Riley. All rights reserved.
 * 
 * Source available under the Academic Free License
 * See LICENSE for licensing information
 */

#ifndef Entity_h
#define Entity_h

#include "GameObject.h"

#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#else
#include <GL/gl.h>
#endif

class Entity : public GameObject{
    public:
        Entity(float x, float y, float sx, float sy, float a, const char *sprite);
        ~Entity();

        GLuint texture;
        const char *sprite;

        void render();
        void update();
};

#endif // Entity_h
