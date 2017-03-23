#include <Setup.h>
#include <CONFIG.h>

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include <iostream>

void InitializeGLUT(int argc, char* argv[], int screenWidth, int screenHeight, char* screenTitle) {
    // initialize GLUT
    glutInitWindowSize(screenWidth, screenHeight);
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);

    // verify GLUT window was created
    if(glutCreateWindow(screenTitle) < 1)
        std::cout << "Could not create GLUT window" << std::endl;
}
