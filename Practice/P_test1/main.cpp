#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

//Jothirmoy Sarker Shuvo
//22-46473-1

// Handler for window-repaint event. Call back when the window first appears and
//whenever the window needs to be re-painted.
void renderBitmapString(float x, float y, float z, void *font, char *string) {
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

void display() {
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);// Clear the color buffer (background)

    glBegin(GL_LINES);
    glColor3f( 0.0f, 0.0f, 0.0f );
    glVertex2f(0.0f,1.0f);
    glVertex2f(0.0f,-1.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f( 0.0f, 0.0f, 0.0f );
    glVertex2f(1.0f,0.0f);
    glVertex2f(-1.0f,0.0f);
    glEnd();

    //Flag-1 Greece

    glBegin(GL_QUADS);
    glColor3ub(13, 94, 175);//blue baground
    glVertex2f(-0.1, 0.1);
    glVertex2f(-0.1, 0.7);
    glVertex2f(-0.8, 0.7);
    glVertex2f(-0.8, 0.1);
    glEnd();

    glBegin(GL_QUADS);// wight bar long 1
    glColor3ub(255, 255, 255);
    glVertex2f(-0.1, 0.37);
    glVertex2f(-0.1, 0.3);
    glVertex2f(-0.8, 0.3);
    glVertex2f(-0.8, 0.37);
    glEnd();

    glBegin(GL_QUADS);// wight bar long 2
    glColor3ub(255, 255, 255);
    glVertex2f(-0.1, 0.235);
    glVertex2f(-0.1, 0.168);
    glVertex2f(-0.8, 0.168);
    glVertex2f(-0.8, 0.235);
    glEnd();

    glBegin(GL_QUADS);// wight bar small 1
    glColor3ub(255, 255, 255);
    glVertex2f(-0.1, 0.635);
    glVertex2f(-0.1, 0.566);
    glVertex2f(-0.54, 0.566);//
    glVertex2f(-0.54, 0.635);
    glEnd();

    glBegin(GL_QUADS);// wight bar small 2
    glColor3ub(255, 255, 255);
    glVertex2f(-0.1, 0.5);
    glVertex2f(-0.1, 0.435);
    glVertex2f(-0.54, 0.435);
    glVertex2f(-0.54, 0.5);
    glEnd();

    glBegin(GL_QUADS);//ground
    glColor3ub(255, 255, 255);
    glVertex2f(-0.54, 0.5655);
    glVertex2f(-0.54, 0.4995);
    glVertex2f(-0.8, 0.4995);
    glVertex2f(-0.8, 0.5655);
    glEnd();

    glBegin(GL_QUADS);//vertical
    glColor3ub(255, 255, 255);
    glVertex2f(-0.64, 0.365);
    glVertex2f(-0.692, 0.365);
    glVertex2f(-0.692, 0.7);
    glVertex2f(-0.64, 0.7);
    glEnd();


    //Flag-2 Norway

    glBegin(GL_QUADS);
    glColor3ub(225, 0, 0);//red baground
    glVertex2f(0.1, 0.1);
    glVertex2f(0.1, 0.7);
    glVertex2f(0.8, 0.7);
    glVertex2f(0.8, 0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);//wight bar ground
    glVertex2f(0.1, 0.31);
    glVertex2f(0.1, 0.49);
    glVertex2f(0.8, 0.49);
    glVertex2f(0.8, 0.31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);//wight bar vertical
    glVertex2f(0.3, 0.1);
    glVertex2f(0.3, 0.7);
    glVertex2f(0.47, 0.7);
    glVertex2f(0.47, 0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(13, 94, 175);//blue bar ground
    glVertex2f(0.1, 0.36);
    glVertex2f(0.1, 0.44);
    glVertex2f(0.8, 0.44);
    glVertex2f(0.8, 0.36);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(13, 94, 175);//wight bar vertical
    glVertex2f(0.35, 0.1);
    glVertex2f(0.35, 0.7);
    glVertex2f(0.42, 0.7);
    glVertex2f(0.42, 0.1);
    glEnd();

    // Flag 3 Morocco
    glBegin(GL_QUADS);
    glColor3ub(193, 39, 45);
    glVertex2f(0.8f, -0.1f);
    glVertex2f(0.8f, -0.8f);
    glVertex2f(0.1f, -0.8f);
    glVertex2f(0.1f, -0.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 98, 51);
    glVertex2f(0.374f, -0.488f);
    glVertex2f(0.34f, -0.505f);
    glVertex2f(0.56f, -0.505f);
    glVertex2f(0.528f, -0.488f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 98, 51);
    glVertex2f(0.374f, -0.488f);
    glVertex2f(0.34f, -0.505f);
    glVertex2f(0.518f, -0.31f);
    glVertex2f(0.498f, -0.352f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 98, 51);
    glVertex2f(0.498f, -0.352f);
    glVertex2f(0.518f, -0.31f);
    glVertex2f(0.451f, -0.624f);
    glVertex2f(0.451f, -0.57f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 98, 51);
    glVertex2f(0.451f, -0.57f);
    glVertex2f(0.451f, -0.624f);
    glVertex2f(0.383f, -0.31f);
    glVertex2f(0.404f, -0.352f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 98, 51);
    glVertex2f(0.404f, -0.352f);
    glVertex2f(0.383f, -0.31f);
    glVertex2f(0.56f, -0.505f);
    glVertex2f(0.528f, -0.488f);
    glEnd();

     //Flag-4 ghana

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);//yellow baground
    glVertex2f(-0.1, -0.1);
    glVertex2f(-0.1, -0.7);
    glVertex2f(-0.8, -0.7);
    glVertex2f(-0.8, -0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);//red baground
    glVertex2f(-0.1, -0.1);
    glVertex2f(-0.1, -0.3);
    glVertex2f(-0.8, -0.3);
    glVertex2f(-0.8, -0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 255, 0);//green baground
    glVertex2f(-0.1, -0.5);
    glVertex2f(-0.1, -0.7);
    glVertex2f(-0.8, -0.7);
    glVertex2f(-0.8, -0.5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0); // Black color
    glVertex2f(-0.45, -0.3);
    glVertex2f(-0.45, -0.43);
    glVertex2f(-0.39, -0.5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0); // Black color
    glVertex2f(-0.45, -0.3);
    glVertex2f(-0.45, -0.43);
    glVertex2f(-0.51, -0.5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0); // Black color
    glVertex2f(-0.45, -0.43);
    glVertex2f(-0.55, -0.38);
    glVertex2f(-0.35, -0.38);
    glEnd();






    glFlush(); // Render now
}
/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitWindowSize(640, 480); // Set the window's initial width & height
    glutInitWindowPosition(80, 50);  // Set the window's initial position according to the monitor
    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
