#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>
#include <windows.h>
#include <GL/glut.h>
#include <windows.h>
#include <mmsystem.h>



// Global variables for boat position and direction
float boatPosX = 0.0f;
float boatSpeed = 0.002f;
int direction = 1; // 1 for forward, -1 for backward
bool isBoatMoving = false; // Flag to track boat movement

void drawBoat() {
    glPushMatrix(); // Save the current state of transformations
    glTranslatef(boatPosX, 0.0f, 0.0f); // Translate the boat

    glBegin(GL_POLYGON); // Hull of the boat
    glColor3ub(139, 69, 19); // Brown color for the hull
    glVertex2f(-0.2f, -0.4f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.3f, -0.2f);
    glVertex2f(-0.3f, -0.2f);
    glEnd();

    glBegin(GL_POLYGON); // Deck of the boat
    glColor3ub(205, 133, 63); // Lighter brown color for the deck
    glVertex2f(-0.15f, -0.2f);
    glVertex2f(0.15f, -0.2f);
    glVertex2f(0.1f, -0.1f);
    glVertex2f(-0.1f, -0.1f);
    glEnd();

    glBegin(GL_POLYGON); // Mast of the boat
    glColor3ub(160, 82, 45); // Darker brown color for the mast
    glVertex2f(-0.02f, -0.1f);
    glVertex2f(0.02f, -0.1f);
    glVertex2f(0.02f, 0.2f);
    glVertex2f(-0.02f, 0.2f);
    glEnd();

    glBegin(GL_TRIANGLES); // Sail of the boat
    glColor3ub(255, 255, 255); // White color for the sail
    glVertex2f(0.02f, 0.2f);
    glVertex2f(0.02f, -0.1f);
    glVertex2f(0.2f, 0.05f);
    glEnd();

    glPopMatrix(); // Restore the previous state of transformations
}

void update(int value) {
    if (isBoatMoving) {
        // Update the boat's position
        boatPosX += direction * boatSpeed;

        // Reverse direction if the boat reaches the boundary
        if (boatPosX > 0.17f || boatPosX < -1.5f) {
            direction *= -1;
        }

        glutPostRedisplay(); // Redraw the scene
        glutTimerFunc(16, update, 0); // Call update again after 16 milliseconds
    }
}



float sunY = 1.2f; // Initial Y position of the sun
float sunSpeed = 0.001f; // Speed of the sun's movement

float cloud1X = -0.9f; // Initial X position of cloud 1
float cloud2X = -0.7f;  // Initial X position of cloud 2
float cloudSpeed = 0.009f; // Speed of the clouds' movement
bool movingRight = true; // Direction of the clouds' movement

void updateClouds(int value) {
    cloud1X += cloudSpeed;
    cloud2X += cloudSpeed;

    if (cloud1X >= 1.0f) { // Right limit for cloud 1
        cloud1X = -1.5f; // Reset to initial position
    }
    if (cloud2X >= 1.0f) { // Right limit for cloud 2
        cloud2X = -1.3f; // Reset to initial position
    }

    glutPostRedisplay(); // Request a redraw
    glutTimerFunc(16, updateClouds, 0); // Call this function again after 16ms
}



void drawCircle(float cx, float cy, float r, int num_segments) {
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 205); // Light gray color for the cloud
    for (int i = 0; i <= num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float x = r * cosf(theta);
        float y = r * sinf(theta);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();
}


void updateSun(int value) {
    sunY -= sunSpeed;

    if (sunY <= 0.1f) { // Lower limit
        sunY = 1.5f; // Reset to initial position
    }

    glutPostRedisplay(); // Request a redraw
    glutTimerFunc(16, updateSun, 0); // Call this function again after 16ms
}




void drawsun(float cx, float cy, float r, int num_segments) {
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 0, 0); // Red color for the sun
    for (int i = 0; i <= num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float x = r * cosf(theta);
        float y = r * sinf(theta);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();
}

void init(){
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
  };

void renderText(const char* text, float x, float y) {
    glColor3f(1.0f, 1.0f, 1.0f); // Set text color (white)
    glRasterPos2f(x, y); // Set text position
    while (*text) {
        glutBitmapCharacter(GLUT_BITMAP_8_BY_13, *text);
        ++text;
    }
}

void display(){

    glBegin(GL_QUADS);
    glColor3ub(0, 125, 255);

    glVertex2f(-1.0f, -0.1f);
    glVertex2f(1.0f, -0.1f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);

    glEnd();

    ///sun
    drawsun(-0.7f, sunY, 0.2f, 150);



    glBegin(GL_QUADS);
    glColor3ub(153, 204, 255);

    glVertex2f(-1.0f, -1.0f);
    glVertex2f(-1.0f, 0.1f);
    glVertex2f(1.0f, 0.1f);
    glVertex2f(1.0f, -1.0f);

    glEnd();



    // Draw cloud 1
    drawCircle(cloud1X, 0.5f, 0.1f, 100);
    drawCircle(cloud1X + 0.1f, 0.5f, 0.15f, 100);
    drawCircle(cloud1X + 0.2f, 0.5f, 0.1f, 100);
    drawCircle(cloud1X - 0.05f, 0.55f, 0.12f, 100);

    // Draw cloud 2
    drawCircle(cloud2X, 0.6f, 0.1f, 100);
    drawCircle(cloud2X + 0.1f, 0.6f, 0.15f, 100);
    drawCircle(cloud2X + 0.2f, 0.6f, 0.1f, 100);
    drawCircle(cloud2X + 0.05f, 0.65f, 0.12f, 100);





    glColor3ub(0, 100, 200);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.9f, 0.1f);
    glVertex2f(-0.7f, 0.3f);
    glVertex2f(-0.5f, 0.1f);

    glVertex2f(-0.3f, 0.1f);
    glVertex2f(-0.1f, 0.3f);
    glVertex2f(0.1f, 0.1f);

    glVertex2f(0.3f, 0.1f);
    glVertex2f(0.5f, 0.3f);
    glVertex2f(0.7f, 0.1f);

    glVertex2f(0.9f, 0.1f);
    glVertex2f(1.1f, 0.3f);
    glVertex2f(1.3f, 0.1f);
    glEnd();



    ///////////////

    glColor3f(0.4f,0.2f,0.0f);///1
    glBegin(GL_TRIANGLES);
    glVertex2f(-1.1f, 0.1f);
    glVertex2f(-0.85f, 0.4f);
    glVertex2f(-0.5f, 0.1f);
    glEnd();

    glColor3f(0.4f,0.2f,0.0f);///2
    glBegin(GL_TRIANGLES);
    glVertex2f(-1.5f, 0.1f);
    glVertex2f(-0.95f, 0.38f);
    glVertex2f(-0.4f, 0.1f);
    glEnd();

    glColor3f(0.4f,0.2f,0.0f);///3
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.9f, 0.1f);
    glVertex2f(-0.55f, 0.3f);
    glVertex2f(-0.4f, 0.1f);
    glEnd();

    glColor3f(0.4f,0.2f,0.0f);///4
    glBegin(GL_TRIANGLES);
    glVertex2f(-.65f, 0.1f);
    glVertex2f(-0.375f, 0.3f);
    glVertex2f(-0.1f, 0.1f);
    glEnd();

    glColor3f(0.4f,0.2f,0.0f);///5
    glBegin(GL_TRIANGLES);
    glVertex2f(-.375f, 0.1f);
    glVertex2f(-0.15f, 0.28f);
    glVertex2f(0.1f, 0.1f);
    glEnd();

    glColor3f(0.4f,0.2f,0.0f);///6
    glBegin(GL_TRIANGLES);
    glVertex2f(-.075f, 0.1f);
    glVertex2f(0.1f, 0.25f);
    glVertex2f(0.5f, 0.1f);
    glEnd();

    glColor3f(0.4f,0.2f,0.0f);///7
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.07f, 0.1f);
    glVertex2f(0.3f, 0.25f);
    glVertex2f(0.6f, 0.1f);
    glEnd();

    glColor3f(0.4f,0.2f,0.0f);///8
    glBegin(GL_TRIANGLES);
    glVertex2f(0.1f, 0.1f);
    glVertex2f(0.3f, 0.2f);
    glVertex2f(0.8f, 0.1f);
    glEnd();

    glColor3f(0.4f,0.2f,0.0f);///9
    glBegin(GL_TRIANGLES);
    glVertex2f(0.3f, 0.1f);
    glVertex2f(0.6f, 0.2f);
    glVertex2f(0.9f, 0.1f);
    glEnd();

    glColor3f(0.4f,0.2f,0.0f);///10
    glBegin(GL_TRIANGLES);
    glVertex2f(0.6f, 0.1f);
    glVertex2f(0.8f, 0.2f);
    glVertex2f(1.0f, 0.1f);
    glEnd();

    glColor3ub(192,192,192);///G 1
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.2f, -1.0f);
    glVertex2f(1.0f, -0.3f);
    glVertex2f(1.0f, -1.0f);
    glEnd();

    glColor3ub(192,192,192);///G 2
    glBegin(GL_TRIANGLES);
    glVertex2f(0.1f, -0.5f);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(1.0f, -0.5f);
    glEnd();





    ////////////////


    glBegin(GL_QUADS);
    glColor3ub(224, 224, 224);///b box 1 whight

    glVertex2f(0.7f, 0.1f);
    glVertex2f(0.9f, 0.1f);
    glVertex2f(0.9f, 0.3f);
    glVertex2f(0.7f, 0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);///b box 2 red s

    glVertex2f(0.72f, 0.1f);
    glVertex2f(0.8f, 0.1f);
    glVertex2f(0.8f, 0.3f);
    glVertex2f(0.72f, 0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);///b box 3 red s

    glVertex2f(0.82f, 0.1f);
    glVertex2f(0.88f, 0.1f);
    glVertex2f(0.88f, 0.3f);
    glVertex2f(0.82f, 0.3f);
    glEnd();

    glLineWidth(6.0f);
    glBegin(GL_LINES);///red line b R
    glColor3ub(255, 0, 0);


    glVertex2f(0.5f, 0.1f);
    glVertex2f(0.5f, 0.8f);
    glEnd();

    glLineWidth(6.0f);
    glBegin(GL_LINES);///red line b L
    glColor3ub(255, 0, 0);


    glVertex2f(0.42f, 0.1f);
    glVertex2f(0.42f, 0.8f);
    glEnd();


    glLineWidth(4.0f);
    glBegin(GL_LINES);///red line s L
    glColor3ub(255, 0, 0);

    glVertex2f(-0.1f, 0.1f);
    glVertex2f(-0.1f, 0.5f);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINES);///red line s R
    glColor3ub(255, 0, 0);

    glVertex2f(-0.05f, 0.1f);
    glVertex2f(-0.05f, 0.5f);
    glEnd();

    glLineWidth(8.0f);
    glBegin(GL_LINES);///red line Bri m
    glColor3ub(255, 0, 0);

    glVertex2f(0.42f, 0.28f);
    glVertex2f(0.7f, 0.28f);
    glEnd();

    glLineWidth(7.0f);
    glBegin(GL_LINES);///red line Bri L
    glColor3ub(255, 0, 0);

    glVertex2f(-0.1f, 0.23f);
    glVertex2f(0.42f, 0.28f);
    glEnd();

    glLineWidth(9.0f);
    glBegin(GL_LINES);///red line Bri R
    glColor3ub(255, 0, 0);

    glVertex2f(0.84f, 0.28f);
    glVertex2f(1.0f, 0.28f);
    glEnd();

    glLineWidth(6.0f);
    glBegin(GL_LINES);///red line Bri bar R 1
    glColor3ub(255, 0, 0);

    glVertex2f(0.5f, 0.75f);
    glVertex2f(0.42f, 0.75f);
    glEnd();

    glLineWidth(6.0f);
    glBegin(GL_LINES);///red line Bri bar R 2
    glColor3ub(255, 0, 0);

    glVertex2f(0.5f, 0.65f);
    glVertex2f(0.42f, 0.65f);
    glEnd();

    glLineWidth(6.0f);
    glBegin(GL_LINES);///red line Bri bar R 3
    glColor3ub(255, 0, 0);

    glVertex2f(0.5f, 0.55f);
    glVertex2f(0.42f, 0.55f);
    glEnd();

    glLineWidth(6.0f);
    glBegin(GL_LINES);///red line Bri bar R 4
    glColor3ub(255, 0, 0);

    glVertex2f(0.5f, 0.45f);
    glVertex2f(0.42f, 0.45f);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINES);///red line Bri bar L 1
    glColor3ub(255, 0, 0);

    glVertex2f(-0.1f, 0.48f);
    glVertex2f(-0.05f, 0.48f);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINES);///red line Bri bar L 2
    glColor3ub(255, 0, 0);

    glVertex2f(-0.1f, 0.43f);
    glVertex2f(-0.05f, 0.43f);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINES);///red line Bri bar L 3
    glColor3ub(255, 0, 0);

    glVertex2f(-0.1f, 0.38f);
    glVertex2f(-0.05f, 0.38f);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINES);///red line Bri bar L 4
    glColor3ub(255, 0, 0);

    glVertex2f(-0.1f, 0.33f);
    glVertex2f(-0.05f, 0.33f);
    glEnd();

    glLineWidth(2.0f);
    glBegin(GL_LINES);///red line Bri rop L1
    glColor3ub(255, 0, 0);

    glVertex2f(0.42f, 0.8f);
    glVertex2f(0.7f, 0.3f);
    glEnd();

    glLineWidth(2.0f);
    glBegin(GL_LINES);///red line Bri rop L2
    glColor3ub(255, 0, 0);

    glVertex2f(0.5f, 0.8f);
    glVertex2f(0.78f, 0.3f);
    glEnd();

    glLineWidth(2.0f);
    glBegin(GL_LINES);///red line Bri rop M1
    glColor3ub(255, 0, 0);

    glVertex2f(0.42f, 0.8f);
    glVertex2f(0.15f, 0.26f);
    glEnd();

    glLineWidth(2.0f);
    glBegin(GL_LINES);///red line Bri rop M2
    glColor3ub(255, 0, 0);

    glVertex2f(0.5f, 0.8f);
    glVertex2f(0.19f, 0.26f);
    glEnd();

    glLineWidth(1.0f);
    glBegin(GL_LINES);///red line Bri rop L1
    glColor3ub(255, 0, 0);

    glVertex2f(-0.1f, 0.5f);
    glVertex2f(0.15f, 0.26f);
    glEnd();

    glLineWidth(1.0f);
    glBegin(GL_LINES);///red line Bri rop L2
    glColor3ub(255, 0, 0);

    glVertex2f(-0.05f, 0.5f);
    glVertex2f(0.19f, 0.26f);
    glEnd();

    glLineWidth(6.0f);
    glBegin(GL_LINES);///red line b R X
    glColor3ub(255, 0, 0);


    glVertex2f(0.5f, 0.15f);
    glVertex2f(0.42f, 0.25f);
    glEnd();

    glLineWidth(6.0f);
    glBegin(GL_LINES);///red line b R X
    glColor3ub(255, 0, 0);


    glVertex2f(0.5f, 0.25f);
    glVertex2f(0.42f, 0.15f);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINES);///red line Bri bar L X
    glColor3ub(255, 0, 0);

    glVertex2f(-0.1f, 0.13f);
    glVertex2f(-0.05f, 0.19f);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINES);///red line Bri bar L X
    glColor3ub(255, 0, 0);

    glVertex2f(-0.1f, 0.19f);
    glVertex2f(-0.05f, 0.13f);
    glEnd();

    glLineWidth(6.0f);
    glBegin(GL_LINES);///red line Bri bar G
    glColor3ub(192, 192, 192);

    glVertex2f(0.52f, 0.1f);
    glVertex2f(0.4f, 0.1f);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINES);///red line Bri bar L 4
    glColor3ub(192, 192, 192);

    glVertex2f(-0.12f, 0.1f);
    glVertex2f(-0.03f, 0.1f);
    glEnd();

    glColor3f(0.4f,0.2f,0.0f);///1
    glBegin(GL_TRIANGLES);
    glVertex2f(2.0f, -0.05f);
    glVertex2f(0.95f, 0.2f);
    glVertex2f(0.7f, -0.05f);
    glEnd();

    glColor3f(0.4f,0.2f,0.0f);///2
    glBegin(GL_TRIANGLES);
    glVertex2f(2.0f, -0.05f);
    glVertex2f(0.9f, 0.2f);
    glVertex2f(0.4f, -0.05f);
    glEnd();

    glColor3f(0.4f,0.2f,0.0f);///3
    glBegin(GL_TRIANGLES);
    glVertex2f(0.8f, -0.05f);
    glVertex2f(0.6f, 0.09f);
    glVertex2f(0.4f, -0.05f);
    glEnd();



    renderText("Press <space>, b, s or c in your keybord", 0.05f, 0.9f);



    drawBoat();
    glutSwapBuffers();

    glFlush();

};

void handleKeypress(unsigned char key, int x, int y) {
    if (key == 'b') {

        glutTimerFunc(0, update, 0);
    }
    else if (key == 'c') {

        glutTimerFunc(0, updateClouds, 0);
    }
    else if (key == 's') {
        glutTimerFunc(0, updateSun, 0);
    }
    else if (key == 32) { // Space key ASCII code is 32
        isBoatMoving = !isBoatMoving; // Toggle boat movement
        if (isBoatMoving) {
            glutTimerFunc(0, update, 0);
        }
    }

}

void sound()
{

    PlaySound("sea-waves-rocky-shore.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);


}

int main(int argc, char** argv) {

   glutInit(&argc, argv);
   glutInitWindowSize(700, 500);
   glutInitWindowPosition(80, 50);
   glutCreateWindow(" Performance");
   glutDisplayFunc(display);
   glutKeyboardFunc(handleKeypress);
   init();
   glutMainLoop();
   sound();
   glutMainLoop();

   return 0;
}

