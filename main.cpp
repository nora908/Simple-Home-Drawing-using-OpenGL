//cr. code: Sumanta Guha.
////////////////////////

//importing the header files
#include <glew.h>
#include <freeglut.h> 
#include <cmath>
// Drawing routine.
void drawScene(void)
{
	// Clear the buffer and set the background color
	glClear(GL_COLOR_BUFFER_BIT);

	// Draw a filled rectangle
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.5, 0.7); // Light blue color
	glVertex2f(20.0, 20.0);
	glVertex2f(80.0, 20.0);
	glVertex2f(80.0, 80.0);
	glVertex2f(20.0, 80.0);
	glEnd();

	// Draw a triangle
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0); // Red color
	glVertex2f(50.0, 80.0);
	glColor3f(0.0, 1.0, 0.0); // Green color
	glVertex2f(80.0, 20.0);
	glColor3f(0.0, 0.0, 1.0); // Blue color
	glVertex2f(20.0, 20.0);
	glEnd();

	// Draw a circle
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0, 0.5, 0.0); // Orange color
	glVertex2f(50.0, 50.0); // Center of the circle
	int numSegments = 100; // Number of segments to approximate the circle
	for (int i = 0; i <= numSegments; ++i) {
		float angle = 2.0 * 3.14159 * i / numSegments;
		float x = 30.0 * cos(angle) + 50.0; // Radius of 30.0
		float y = 30.0 * sin(angle) + 50.0;
		glVertex2f(x, y);
	}
	glEnd();

	// execute the drawing
	glFlush();
}

// Initialization routine.
void setup(void)
{
	// Set the clearing color of the OpenGL window (background)
	glClearColor(1.0, 1.0, 1.0, 0.0); // White color
}

// OpenGL window reshape routine.
void resize(int w, int h)
{
	// Drawing the entire window
	glViewport(0, 0, w, h);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	// Setting up an orthographic viewing box
	glOrtho(0.0, 100.0, 0.0, 100.0, -1.0, 1.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

// Keyboard input processing routine.
void keyInput(unsigned char key, int x, int y)
{
	switch (key)
	{
		// ASCII of escape key
	case 27:
		exit(0);
		break;
	default:
		break;
	}
}

// Main routine.
int main(int argc, char** argv)
{
	glutInit(&argc, argv);	// Initializes the FreeGLUT library.

	glutInitContextVersion(3, 3);
	glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);

	glutInitWindowSize(400, 400);
	glutInitWindowPosition(200, 200);

	glutCreateWindow("Best Scene");

	glutDisplayFunc(drawScene);
	glutReshapeFunc(resize);
	glutKeyboardFunc(keyInput);

	glewExperimental = GL_TRUE;
	glewInit();

	setup();

	glutMainLoop();

	return 0;
}