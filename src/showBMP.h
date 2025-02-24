#ifndef SHOWBMP_H
#define SHOWBMP_H

//sudo apt-get install freeglut3-dev
//http://www.cs.ucdavis.edu/~amenta/s04/image/files.html
#include <GL/glut.h>    // Header File For The GLUT Library
#include <GL/gl.h>	// Header File For The OpenGL32 Library
#include <GL/glu.h>	// Header File For The GLu32 Library
#include <stdio.h>      // Header file for standard file i/o.
#include <stdlib.h>     // Header file for malloc/free.
#include <string.h>

#include "writeBMP.h"

// Measure Performance
#include <sys/time.h>
#include <sys/resource.h>
#include "myfunction.h"
#include "readBMP.h"

/* ascii code for the escape key */
#define ESCAPE 27

// title for result image window
#define WINDOW_TITLE "result"

// Your code here
int window;  // id of glut window
Image *image; // data structure for image
unsigned long n, m; // width and height
char picName[80];
char flag; // chooses which kernel to execute

#endif // SHOWBMP_H
