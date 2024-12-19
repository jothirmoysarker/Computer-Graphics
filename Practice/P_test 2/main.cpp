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

     ///1st Flag Start
    glBegin(GL_POLYGON);
    glColor3ub(0, 85, 165);

    glVertex2f(-0.1f,0.1f);
    glVertex2f(-0.1f,0.7f);
    glVertex2f(-0.8f,0.7f);
    glVertex2f(-0.8f,0.1f);


    glEnd();

    //1st star

    glBegin(GL_POLYGON);
    glColor3ub(255, 210, 3);

    glVertex2f(-0.456f, 0.605f);
    glVertex2f(-0.45f, 0.63f);
    glVertex2f(-0.443f, 0.605f);

    glVertex2f(-0.425f, 0.605f);
    glVertex2f(-0.440f, 0.591f);
    glVertex2f(-0.434f, 0.567f);
    glVertex2f(-0.450f, 0.583f);
    glVertex2f(-0.465f, 0.568f);
    glVertex2f(-0.459f, 0.591f);
    glVertex2f(-0.474f, 0.605f);


    glEnd();

    //2nd star

    glBegin(GL_POLYGON);
    glColor3ub(255, 210, 3);

    glVertex2f(-0.378f, 0.579f);
    glVertex2f(-0.372f, 0.602f);
    glVertex2f(-0.366f, 0.578f);

    glVertex2f(-0.347f,0.579f);
    glVertex2f(-0.362f,0.564f);
    glVertex2f(-0.357f,0.541f);
    glVertex2f(-0.372f,0.556f);
    glVertex2f(-0.388f,0.540f);
    glVertex2f(-0.382f,0.565f);
    glVertex2f(-0.398f,0.579f);

    glEnd();

       //3rd Star
    glBegin(GL_POLYGON);
    glColor3ub (255, 210, 3);

    glVertex2f(-0.321f, 0.506f);
    glVertex2f(-0.315f, 0.529f);
    glVertex2f(-0.309f, 0.506f);

    glVertex2f(-0.290f, 0.506f);
    glVertex2f(-0.305f, 0.492f);
    glVertex2f(-0.300f, 0.468f);
    glVertex2f(-0.315f, 0.483f);
    glVertex2f(-0.331f, 0.468f);
    glVertex2f(-0.325f, 0.491f);
    glVertex2f(-0.340f, 0.506f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (255, 210, 3);

    glVertex2f(-0.3f, 0.406f);
    glVertex2f(-0.294f, 0.429f);
    glVertex2f(-0.288f, 0.406f);
    glVertex2f(-0.269f, 0.406f);
    glVertex2f(-0.285f, 0.391f);
    glVertex2f(-0.279f, 0.368f);
    glVertex2f(-0.294f, 0.383f);
    glVertex2f(-0.310f, 0.368f);
    glVertex2f(-0.304f, 0.391f);
    glVertex2f(-0.319f, 0.406f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (255, 210, 3);

    glVertex2f(-0.321f, 0.306f);
    glVertex2f(-0.315f, 0.329f);
    glVertex2f(-0.309f, 0.306f);
    glVertex2f(-0.290f, 0.306f);
    glVertex2f(-0.305f, 0.291f);
    glVertex2f(-0.3f, 0.268f);
    glVertex2f(-0.315f, 0.282f);
    glVertex2f(-0.331f, 0.268f);
    glVertex2f(-0.325f, 0.292f);
    glVertex2f(-0.340f, 0.306f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (255, 210, 3);

    glVertex2f(-0.378f, 0.233f);
    glVertex2f(-0.372f, 0.257f);
    glVertex2f(-0.366f, 0.233f);
    glVertex2f(-0.347f, 0.233f);
    glVertex2f(-0.362f, 0.219f);
    glVertex2f(-0.359f, 0.195f);
    glVertex2f(-0.372f, 0.210f);
    glVertex2f(-0.388f, 0.196f);
    glVertex2f(-0.382f, 0.219f);
    glVertex2f(-0.397f, 0.233f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (255, 210, 3);

    glVertex2f(-0.455f, 0.206f);
    glVertex2f(-0.45f, 0.23f);
    glVertex2f(-0.443f, 0.206f);
    glVertex2f(-0.425f, 0.207f);
    glVertex2f(-0.439f, 0.192f);
    glVertex2f(-0.434f, 0.169f);
    glVertex2f(-0.45f, 0.184f);
    glVertex2f(-0.465f, 0.168f);
    glVertex2f(-0.459f, 0.193f);
    glVertex2f(-0.474f, 0.206f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (255, 210, 3);

    glVertex2f(-0.533f, 0.234f);
    glVertex2f(-0.527f, 0.258f);
    glVertex2f(-0.522f, 0.234f);
    glVertex2f(-0.502f, 0.234f);
    glVertex2f(-0.518f, 0.219f);
    glVertex2f(-0.512f, 0.196f);
    glVertex2f(-0.528f, 0.211f);
    glVertex2f(-0.543f, 0.196f);
    glVertex2f(-0.537f, 0.220f);
    glVertex2f(-0.553f, 0.234f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (255, 210, 3);

    glVertex2f(-0.590f, 0.306f);
    glVertex2f(-0.583f, 0.330f);
    glVertex2f(-0.577f, 0.306f);
    glVertex2f(-0.558f, 0.306f);
    glVertex2f(-0.573f, 0.292f);
    glVertex2f(-0.568f, 0.268f);
    glVertex2f(-0.584f, 0.284f);
    glVertex2f(-0.599f, 0.268f);
    glVertex2f(-0.593f, 0.292f);
    glVertex2f(-0.608f, 0.306f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (255, 210, 3);

    glVertex2f(-0.611f, 0.408f);
    glVertex2f(-0.605f, 0.432f);
    glVertex2f(-0.599f, 0.408f);
    glVertex2f(-0.579f, 0.408f);
    glVertex2f(-0.595f, 0.394f);
    glVertex2f(-0.595f, 0.394f);
    glVertex2f(-0.59f, 0.37f);
    glVertex2f(-0.605f, 0.384f);
    glVertex2f(-0.621f, 0.369f);
    glVertex2f(-0.615f, 0.393f);
    glVertex2f(-0.631f, 0.408f);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (255, 210, 3);

    glVertex2f(-0.589f, 0.507f);
    glVertex2f(-0.583f, 0.531f);
    glVertex2f(-0.577f, 0.507f);
    glVertex2f(-0.558f, 0.507f);
    glVertex2f(-0.573f, 0.493f);
    glVertex2f(-0.567f, 0.469f);
    glVertex2f(-0.582f, 0.485f);
    glVertex2f(-0.599f, 0.469f);
    glVertex2f(-0.593f, 0.493f);
    glVertex2f(-0.608f, 0.507f);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (255, 210, 3);

    glVertex2f(-0.533f, 0.579f);
    glVertex2f(-0.528f, 0.602f);
    glVertex2f(-0.522f, 0.579f);
    glVertex2f(-0.503f, 0.579f);
    glVertex2f(-0.519f, 0.565f);
    glVertex2f(-0.512f, 0.542f);
    glVertex2f(-0.528f, 0.556f);
    glVertex2f(-0.543f, 0.541f);
    glVertex2f(-0.538f, 0.565f);
    glVertex2f(-0.553f, 0.579f);

    glEnd();

    //2nd flag

    glBegin(GL_POLYGON);
    glColor3ub(254, 0, 0);

    glVertex2f(0.1f, 0.7f);
    glVertex2f(0.275f,0.7f);
    glVertex2f(0.274f, 0.1f);
    glVertex2f(0.1f, 0.1f);

    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(254, 0, 0);

    glVertex2f(0.625f, 0.7f);
    glVertex2f(0.8f,0.7f);
    glVertex2f(0.8f, 0.1f);
    glVertex2f(0.625f, 0.1f);

    glEnd();


     glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);

    glVertex2f(0.275f, 0.7f);
    glVertex2f(0.625f,0.7f);
    glVertex2f(0.625f, 0.1f);
    glVertex2f(0.274f, 0.1f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(254, 0, 0);

    glVertex2f(0.446, 0.291f);
    glVertex2f(0.446f, 0.193f);
    glVertex2f(0.452f,0.193f);
    glVertex2f(0.451f, 0.292f);
    glVertex2f(0.508f, 0.278f);
    glVertex2f(0.504f, 0.311f);
    glVertex2f(0.562f, 0.393f);
    glVertex2f(0.547f, 0.402f);//
    glVertex2f(0.558f, 0.470f);
    glVertex2f(0.525f, 0.459f);
    glVertex2f(0.516f, 0.489f);
    glVertex2f(0.483f, 0.436f);
    glVertex2f(0.494f, 0.551f);
    glVertex2f(0.473f, 0.533f);
    glVertex2f(0.449f, 0.607f);
    glVertex2f(0.426f, 0.533f);
    glVertex2f(0.403f, 0.552f);
    glVertex2f(0.415f, 0.436f);
    glVertex2f(0.381, 0.491f);
    glVertex2f(0.373, 0.459f);
    glVertex2f(0.340, 0.470f);
    glVertex2f(0.351, 0.401f);
    glVertex2f(0.337, 0.394f);
    glVertex2f(0.396, 0.309f);
    glVertex2f(0.391, 0.281f);



    glEnd();

    //3rd Flag

    glBegin(GL_POLYGON);
    glColor3ub(0, 27, 105);

    glVertex2f(0.1f, -0.1f);
    glVertex2f(0.1f,-0.7f);
    glVertex2f(0.8f, -0.7f);
    glVertex2f(0.8f, -0.1f);

    glEnd();



     glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);

    glVertex2f(0.1f, -0.1f);
    glVertex2f(0.1f,-0.4f);
    glVertex2f(0.45f, -0.4f);
    glVertex2f(0.45f, -0.1f);

    glEnd();





     glBegin(GL_POLYGON);
    glColor3ub(201, 7, 42);

    glVertex2f(0.257f, -0.1f);
    glVertex2f(0.257f,-0.4f);
    glVertex2f(0.292f, -0.4f);
    glVertex2f(0.292f, -0.1f);

    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(201, 7, 42);

    glVertex2f(0.1f, -0.22f);
    glVertex2f(0.45f, -0.22f);
    glVertex2f(0.45f, -0.279f);
    glVertex2f(0.1f, -0.279f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 27, 105);

    glVertex2f(0.14f, -0.1f);
    glVertex2f(0.245f,-0.190f);
    glVertex2f(0.245f, -0.1f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0, 27, 105);

    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.177f,-0.2f);
    glVertex2f(0.1f, -0.133f);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(201, 7, 42);

    glVertex2f(0.1f, -0.1f);
    glVertex2f(0.216f,-0.2f);
    glVertex2f(0.19f, -0.2f);
    glVertex2f(0.1f, -0.122f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0, 27, 105);

    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.177f,-0.299f);
    glVertex2f(0.1f, -0.365f);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 27, 105);

    glVertex2f(0.14f, -0.4f);
    glVertex2f(0.245f,-0.309f);
    glVertex2f(0.245f, -0.4f);


    glEnd();


     glBegin(GL_POLYGON);
    glColor3ub(201, 7, 42);

    glVertex2f(0.1f, -0.4f);
    glVertex2f(0.217f,-0.299f);
    glVertex2f(0.242f, -0.299f);
    glVertex2f(0.125f, -0.4f);

    glEnd();


     glBegin(GL_POLYGON);
    glColor3ub(0, 27, 105);

    glVertex2f(0.304f, -0.4f);
    glVertex2f(0.304f,-0.308f);
    glVertex2f(0.409f, -0.4f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0, 27, 105);

    glVertex2f(0.45f, -0.366f);
    glVertex2f(0.373f,-0.300f);
    glVertex2f(0.45f, -0.3f);


    glEnd();



     glBegin(GL_POLYGON);
    glColor3ub(201, 7, 42);

    glVertex2f(0.45f, -0.4f);
    glVertex2f(0.333f,-0.300f);
    glVertex2f(0.36f, -0.3f);
    glVertex2f(0.45f, -0.378f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0, 27, 105);

    glVertex2f(0.45f, -0.2f);
    glVertex2f(0.372f,-0.200f);
    glVertex2f(0.45f, -0.134f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0, 27, 105);

    glVertex2f(0.304f, -0.190f);
    glVertex2f(0.41f,-0.1f);
    glVertex2f(0.304f, -0.1f);


    glEnd();


     glBegin(GL_POLYGON);
    glColor3ub(201, 7, 42);

    glVertex2f(0.424f, -0.1f);
    glVertex2f(0.45f,-0.1f);
    glVertex2f(0.333f, -0.199f);
    glVertex2f(0.307f, -0.199f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(0.538f, -0.344f);
    glVertex2f(0.544f, -0.311f);
    glVertex2f(0.550f, -0.344f);
    glVertex2f(0.570f, -0.344f);
    glVertex2f(0.554f, -0.365f);
    glVertex2f(0.560f, -0.398f);
    glVertex2f(0.544f, -0.378f);
    glVertex2f(0.527f, -0.399f);
    glVertex2f(0.533f, -0.365f);
    glVertex2f(0.517f, -0.344f);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(201,7,42);

    glVertex2f(0.54f, -0.35f);
    glVertex2f(0.544f, -0.326f);
    glVertex2f(0.548f, -0.35f);
    glVertex2f(0.561f, -0.349f);
    glVertex2f(0.550f, -0.363f);
    glVertex2f(0.554f, -0.384f);
    glVertex2f(0.544f, -0.371f);
    glVertex2f(0.533f, -0.384f);
    glVertex2f(0.537f, -0.363f);
    glVertex2f(0.527f, -0.349f);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(0.618f, -0.205f);
    glVertex2f(0.624f, -0.172f);
    glVertex2f(0.631f, -0.205f);
    glVertex2f(0.651f, -0.205f);
    glVertex2f(0.635f, -0.225f);
    glVertex2f(0.641f, -0.258f);
    glVertex2f(0.625f, -0.238f);
    glVertex2f(0.608f, -0.259f);
    glVertex2f(0.614f, -0.225f);
    glVertex2f(0.598f, -0.205f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(201,7,42);

    glVertex2f(0.620f, -0.211f);
    glVertex2f(0.625f, -0.188f);
    glVertex2f(0.629f, -0.211f);
    glVertex2f(0.642f, -0.210f);
    glVertex2f(0.631f, -0.224f);
    glVertex2f(0.635f, -0.245f);
    glVertex2f(0.625f, -0.231f);
    glVertex2f(0.614f, -0.245f);
    glVertex2f(0.618f, -0.224f);
    glVertex2f(0.607f, -0.211f);



    glEnd();





    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(0.688f, -0.309f);
    glVertex2f(0.694f, -0.279f);
    glVertex2f(0.7f, -0.309f);
    glVertex2f(0.718f, -0.309f);
    glVertex2f(0.703f, -0.328f);
    glVertex2f(0.709f, -0.358f);
    glVertex2f(0.694f, -0.339f);
    glVertex2f(0.679f, -0.358f);
    glVertex2f(0.685f, -0.328f);
    glVertex2f(0.670f, -0.309f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(201,7,42);

    glVertex2f(0.690f, -0.314f);
    glVertex2f(0.694f, -0.297f);
    glVertex2f(0.697f, -0.314f);
    glVertex2f(0.708f, -0.314f);
    glVertex2f(0.7f, -0.325f);
    glVertex2f(0.703f, -0.344f);
    glVertex2f(0.694f, -0.332f);
    glVertex2f(0.685f, -0.344f);
    glVertex2f(0.689f, -0.326f);
    glVertex2f(0.679f, -0.314f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(0.617f, -0.563f);
    glVertex2f(0.625f, -0.527f);
    glVertex2f(0.632f, -0.563f);
    glVertex2f(0.654f, -0.563f);
    glVertex2f(0.636f, -0.586f);
    glVertex2f(0.643f, -0.623f);
    glVertex2f(0.625f, -0.6f);
    glVertex2f(0.606f, -0.623f);
    glVertex2f(0.613f, -0.586f);
    glVertex2f(0.595f, -0.563f);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(201,7,42);


    glVertex2f(0.620f, -0.568f);
    glVertex2f(0.625f, -0.543f);
    glVertex2f(0.630f, -0.568f);
    glVertex2f(0.645f, -0.568f);
    glVertex2f(0.632f, -0.584f);
    glVertex2f(0.637f, -0.608f);
    glVertex2f(0.624f, -0.592f);
    glVertex2f(0.612f, -0.608f);
    glVertex2f(0.617f, -0.584f);
    glVertex2f(0.604f, -0.568f);

    glEnd();




    //3rd Flag

    glBegin(GL_POLYGON);
    glColor3ub(191, 10, 48);

    glVertex2f(-0.1f, -0.1f);
    glVertex2f(-0.1f,-0.7f);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.8f, -0.1f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 27, 105);

    glVertex2f(-0.45f, -0.1f);
    glVertex2f(-0.45f,-0.4f);
    glVertex2f(-0.8f, -0.4f);
    glVertex2f(-0.8f, -0.1f);

    glEnd();
/// 1
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.58, -0.14);
    glVertex2f(-0.66, -0.14);
    glVertex2f(-0.62, -0.16);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.6, -0.18);
    glVertex2f(-0.62, -0.12);
    glVertex2f(-0.64, -0.18);
    glVertex2f(-0.62, -0.16);
    glEnd();
  /// 2
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.58, -0.34);
    glVertex2f(-0.66, -0.34);
    glVertex2f(-0.62, -0.36);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.6, -0.38);
    glVertex2f(-0.62, -0.32);
    glVertex2f(-0.64, -0.38);
    glVertex2f(-0.62, -0.36);
    glEnd();
    /// 3
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.67, -0.24);
    glVertex2f(-0.75, -0.24);
    glVertex2f(-0.71, -0.26);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.69, -0.28);
    glVertex2f(-0.71, -0.22);
    glVertex2f(-0.73, -0.28);
    glVertex2f(-0.71, -0.26);
    glEnd();
    /// 4
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.48, -0.22);
    glVertex2f(-0.56, -0.22);
    glVertex2f(-0.52, -0.24);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.5, -0.26);
    glVertex2f(-0.52, -0.2);
    glVertex2f(-0.54, -0.26);
    glVertex2f(-0.52, -0.24);
    glEnd();
    /// 5
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.55, -0.3);
    glVertex2f(-0.59, -0.3);
    glVertex2f(-0.57, -0.315);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.555, -0.33);
    glVertex2f(-0.57, -0.28);
    glVertex2f(-0.585, -0.33);
    glVertex2f(-0.57, -0.31);
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
