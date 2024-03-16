Simple Home Drawing using OpenGL (GLEW + FreeGLUT)

This project demonstrates how to draw a simple scene of a home using OpenGL, GLEW, and FreeGLUT libraries. The scene consists of a filled rectangle representing the house, a triangle representing the roof, and a circle representing the sun. The project is developed using Visual Studio.

Prerequisites

Visual Studio
GLEW Library
FreeGLUT Library

How to Run

Clone the repository to your local machine.
Open the project in Visual Studio.
Make sure the GLEW and FreeGLUT libraries are properly linked to the project.
Build and run the project.

Files Included

main.cpp: Contains the main code for drawing the scene.
glew.h: GLEW header file.
freeglut.h: FreeGLUT header file.

Code Explanation

drawScene(): Function to draw the scene with a house, roof, and sun.
setup(): Function to set up the OpenGL environment.
resize(): Function to handle window resizing.
keyInput(): Function to handle keyboard input (exit on pressing the escape key).
main(): Main function to initialize the OpenGL window and enter the main event loop.

Controls

Press Esc to exit the program.
Additional Notes
The project uses an orthographic projection with a viewport of 100x100 units.
Colors for different elements are specified using RGB values.
The circle representing the sun is approximated using a triangle fan with 100 segments.
