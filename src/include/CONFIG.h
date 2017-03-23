/*
    This file exists as a way to proactively try to make resolving
    cross-compilation issues a little easier
*/

#ifndef _CONFIG_OS_H_
#define _CONFIG_OS_H_

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__) // windows
    #ifndef __OS__WINDOWS__
        #define __OS__WINDOWS__      // easier macro to type out if platform is Windows
    #endif // __OS__WINDOWS__
#else // Linux
    #ifndef __OS__LINUX__
        #define __OS__LINUX__        // same
    #endif // __OS__LINUX__
#endif // defined

#endif // _CONFIG_OS_H_
