/*
    Game thing in C++

    FIRST COMPILE:
        - Joey Cluett March 22, 2017 @ 8:21pm
        - Ubuntu 14.04.1 Linux with
            GCC 4.8.2
*/

/*
defines __OS__WINDOWS__ or __OS__LINUX__
    depending on the target platform
use these macros to resolve cross-platform compilation issues
*/
#include <CONFIG.h>

#include <iostream>

// user-defined libraries
#include <Setup.h>

using namespace std;

int main(int argc, char* argv[]) {
    cout << "Hello World" << endl;
    InitializeGLUT(argc, argv, 800, 640, buddy);

    glutMainLoop();

    return 0;
}



