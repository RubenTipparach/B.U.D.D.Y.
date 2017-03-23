#ifndef _SETUP_H_
#define _SETUP_H_

#ifndef buddy
    #define buddy "B.U.D.D.Y."
#endif // buddy

#include <CONFIG.h>

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void InitializeGLUT(int argc, char* argv[], int screenWidth, int screenHeight, char* screenTitle);

#endif // _SETUP_H_
