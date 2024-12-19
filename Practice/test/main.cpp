#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void renderBitmapString(float x, float y, float z, void *font, char *string) {
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

void Quadrilateral(float x,float y,float horigontal,float vertical)
{
    glVertex2f(x,y);
    glVertex2f(x*vertical,y);
    glVertex2f(x*vertical,y*horigontal);
    glVertex2f(x,y*horigontal);

}


void display() {
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    //glPointSize(250.0);
    //glLineWidth(2);


    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(-1.0f,0.0f);
    glVertex2f(1.0f,0.0f);
    glVertex2f(0.0f,1.0f);
    glVertex2f(0.0f,-1.0f);


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




    // 3rd flag

    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    glVertex2f(-0.8f, -0.1f);
    glVertex2f(-0.1f, -0.1f);
    glVertex2f(-0.1f, -0.7f);
    glVertex2f(-0.8f, -0.7f);

    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    glVertex2f(-0.8f, -0.1f);
    glVertex2f(-0.57f, -0.1f);
    glVertex2f(-0.57f, -0.422f);
    glVertex2f(-0.8f, -0.422f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(191, 11, 48);

    glVertex2f(-0.7f, -0.1f);
    glVertex2f(-0.668f, -0.1f);
    glVertex2f(-0.668f, -0.422f);
    glVertex2f(-0.7f, -0.422f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(191, 11, 48);

    glVertex2f(-0.8f, -0.286f);
    glVertex2f(-0.8f, -0.235f);
    glVertex2f(-0.57f, -0.235f);
    glVertex2f(-0.57f, -0.286f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0, 39, 104);

    glVertex2f(-0.663f, -0.19f);
    glVertex2f(-0.6f, -0.1f);
    glVertex2f(-0.663f, -0.1f);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 39, 104);

    glVertex2f(-0.637f, -0.227f);
    glVertex2f(-0.573f, -0.136f);
    glVertex2f(-0.573f, -0.227f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0, 39, 104);

    glVertex2f(-0.637f, -0.294f);
    glVertex2f(-0.573f, -0.385f);
    glVertex2f(-0.573f, -0.294f);


    glEnd();


     glBegin(GL_POLYGON);
    glColor3ub(0, 39, 104);

    glVertex2f(-0.663f, -0.331f);
    glVertex2f(-0.599f, -0.422f);
    glVertex2f(-0.663f, -0.422f);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 39, 104);

    glVertex2f(-0.709f, -0.422f);
    glVertex2f(-0.709f, -0.331f);
    glVertex2f(-0.774f, -0.422f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0, 39, 104);

    glVertex2f(-0.8f, -0.384f);
    glVertex2f(-0.736f, -0.294f);
    glVertex2f(-0.8f, -0.294f);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 39, 104);

    glVertex2f(-0.8f, -0.227f);
    glVertex2f(-0.736f, -0.227f);
    glVertex2f(-0.8f, -0.136f);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 39, 104);

    glVertex2f(-0.774f, -0.1f);
    glVertex2f(-0.710f, -0.19f);
    glVertex2f(-0.71, -0.1f);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(191, 11, 48);

    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.8f, -0.652f);
    glVertex2f(-0.1f, -0.652f);
    glVertex2f(-0.1, -0.7f);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(191, 11, 48);

    glVertex2f(-0.1f, -0.604f);
    glVertex2f(-0.1f, -0.56f);
    glVertex2f(-0.8f, -0.559f);
    glVertex2f(-0.8, -0.604f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(191, 11, 48);

    glVertex2f(-0.8f, -0.513f);
    glVertex2f(-0.8f, -0.468f);
    glVertex2f(-0.1f, -0.468f);
    glVertex2f(-0.1f, -0.513f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(191, 11, 48);

    glVertex2f(-0.573f, -0.422f);
    glVertex2f(-0.573f, -0.375f);
    glVertex2f(-0.1f, -0.375f);
    glVertex2f(-0.1f, -0.422f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(191, 11, 48);

    glVertex2f(-0.573f, -0.329f);
    glVertex2f(-0.573f, -0.282f);
    glVertex2f(-0.1f, -0.282f);
    glVertex2f(-0.1f, -0.329f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(191, 11, 48);

    glVertex2f(-0.573f, -0.238f);
    glVertex2f(-0.573f, -0.191f);
    glVertex2f(-0.1f, -0.191f);
    glVertex2f(-0.1f, -0.238f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(191, 11, 48);

    glVertex2f(-0.573f, -0.146f);
    glVertex2f(-0.573f, -0.1f);
    glVertex2f(-0.1f, -0.1f);
    glVertex2f(-0.1f, -0.146f);


    glEnd();


    //2nd Flag

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(0.1f, 0.7f);
    glVertex2f(0.8f, 0.7f);
    glVertex2f(0.8f, 0.1f);
    glVertex2f(0.1f, 0.1);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,39,104);

    glVertex2f(0.1f, 0.7f);
    glVertex2f(0.324f, 0.7f);
    glVertex2f(0.324f, 0.381f);
    glVertex2f(0.1f, 0.381);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(191, 11, 48);

    glVertex2f(0.1f, 0.1f);
    glVertex2f(0.1f, 0.14f);
    glVertex2f(0.8f, 0.14f);
    glVertex2f(0.8f, 0.1f);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(191, 11, 48);

    glVertex2f(0.1f, 0.179f);
    glVertex2f(0.1f, 0.22f);
    glVertex2f(0.8f, 0.22f);
    glVertex2f(0.8f, 0.179f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(191, 11, 48);

    glVertex2f(0.1f, 0.261f);
    glVertex2f(0.1f, 0.301f);
    glVertex2f(0.8f, 0.301f);
    glVertex2f(0.8f, 0.261f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(191, 11, 48);

    glVertex2f(0.1f, 0.342f);
    glVertex2f(0.1f, 0.381f);
    glVertex2f(0.8f, 0.381f);
    glVertex2f(0.8f, 0.342f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(191, 11, 48);

    glVertex2f(0.324f, 0.423f);
    glVertex2f(0.324f, 0.461f);
    glVertex2f(0.8f, 0.461f);
    glVertex2f(0.8f, 0.423f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(191, 11, 48);

    glVertex2f(0.324f, 0.502f);
    glVertex2f(0.324f, 0.539f);
    glVertex2f(0.8f, 0.539f);
    glVertex2f(0.8f, 0.502f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(191, 11, 48);

    glVertex2f(0.324f, 0.581f);
    glVertex2f(0.324f, 0.619f);
    glVertex2f(0.8f, 0.619f);
    glVertex2f(0.8f, 0.581f);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(191, 11, 48);

    glVertex2f(0.324f, 0.660f);
    glVertex2f(0.324f, 0.7f);
    glVertex2f(0.8f, 0.7f);
    glVertex2f(0.8f, 0.660f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(0.126f, 0.667f);
    glVertex2f(0.130f, 0.685f);
    glVertex2f(0.134f, 0.667f);
    glVertex2f(0.147f, 0.667f);
    glVertex2f(0.137f, 0.656f);
    glVertex2f(0.141f, 0.637f);
    glVertex2f(0.130f, 0.648f);
    glVertex2f(0.119f, 0.637f);
    glVertex2f(0.122f, 0.655f);
    glVertex2f(0.112f, 0.667f);

    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(0.192f, 0.667f);
    glVertex2f(0.196f, 0.685f);
    glVertex2f(0.201f, 0.667f);

    glVertex2f(0.214f, 0.667f);
    glVertex2f(0.204f, 0.656f);
    glVertex2f(0.207f, 0.637f);
    glVertex2f(0.196f, 0.648f);
    glVertex2f(0.185f, 0.637f);
    glVertex2f(0.189f, 0.655f);
    glVertex2f(0.179f, 0.667f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(0.258f, 0.667f);
    glVertex2f(0.263f, 0.685f);
    glVertex2f(0.267f, 0.667f);

    glVertex2f(0.280f, 0.667f);
    glVertex2f(0.270f, 0.656f);
    glVertex2f(0.274f, 0.637f);
    glVertex2f(0.263f, 0.648f);
    glVertex2f(0.252f, 0.637f);
    glVertex2f(0.255f, 0.655f);
    glVertex2f(0.245f, 0.667f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(0.125f, 0.547f);
    glVertex2f(0.130f, 0.565f);
    glVertex2f(0.134f, 0.547f);
    glVertex2f(0.148f, 0.547f);
    glVertex2f(0.137f, 0.535f);
    glVertex2f(0.141f, 0.517f);
    glVertex2f(0.130f, 0.528f);
    glVertex2f(0.119f, 0.517f);
    glVertex2f(0.129f, 0.535f);
    glVertex2f(0.112f, 0.547f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(0.192f, 0.547f);
    glVertex2f(0.196f, 0.565f);
    glVertex2f(0.201f, 0.547f);
    glVertex2f(0.214f, 0.547f);
    glVertex2f(0.204f, 0.535f);
    glVertex2f(0.207f, 0.517f);
    glVertex2f(0.196f, 0.528f);
    glVertex2f(0.185f, 0.517f);
    glVertex2f(0.189f, 0.535f);
    glVertex2f(0.178f, 0.547f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(0.258f, 0.547f);
    glVertex2f(0.263f, 0.565f);
    glVertex2f(0.267f, 0.547f);
    glVertex2f(0.280f, 0.547f);
    glVertex2f(0.270f, 0.535f);
    glVertex2f(0.274f, 0.517f);
    glVertex2f(0.263f, 0.528f);
    glVertex2f(0.252f, 0.517f);
    glVertex2f(0.255f, 0.535f);
    glVertex2f(0.245f, 0.547f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(0.126f, 0.427f);
    glVertex2f(0.130f, 0.445f);
    glVertex2f(0.134f, 0.427f);
    glVertex2f(0.147f, 0.427f);
    glVertex2f(0.137f, 0.415f);
    glVertex2f(0.141f, 0.396f);
    glVertex2f(0.130f, 0.408f);
    glVertex2f(0.119f, 0.397f);
    glVertex2f(0.122f, 0.415f);
    glVertex2f(0.112f, 0.427f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(0.192f, 0.427f);
    glVertex2f(0.196f, 0.445f);
    glVertex2f(0.201f, 0.427f);
    glVertex2f(0.214f, 0.427f);
    glVertex2f(0.204f, 0.415f);
    glVertex2f(0.207f, 0.396f);
    glVertex2f(0.196f, 0.408f);
    glVertex2f(0.185f, 0.397f);
    glVertex2f(0.189f, 0.415f);
    glVertex2f(0.178f, 0.427f);


    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(0.258f, 0.427f);
    glVertex2f(0.263f, 0.445f);
    glVertex2f(0.267f, 0.427f);
    glVertex2f(0.281f, 0.427f);
    glVertex2f(0.270f, 0.415f);
    glVertex2f(0.274f, 0.396f);
    glVertex2f(0.263f, 0.408f);
    glVertex2f(0.252f, 0.397f);
    glVertex2f(0.255f, 0.415f);
    glVertex2f(0.245f, 0.427f);


    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    Quadrilateral(0.1, -0.1,7,8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(191, 10, 48);
    glVertex2f(0.1,-0.7);
    glVertex2f(0.1,-0.65);
    glVertex2f(0.8,-0.65);
    glVertex2f(0.8,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(191, 10, 48);
    glVertex2f(0.1,-0.61);
    glVertex2f(0.1,-0.56);
    glVertex2f(0.8,-0.56);
    glVertex2f(0.8,-0.61);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(191, 10, 48);
    glVertex2f(0.1,-0.51);
    glVertex2f(0.1,-0.46);
    glVertex2f(0.8,-0.46);
    glVertex2f(0.8,-0.51);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(191, 10, 48);
    glVertex2f(0.1,-0.41);
    glVertex2f(0.1,-0.36);
    glVertex2f(0.8,-0.36);
    glVertex2f(0.8,-0.41);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(191, 10, 48);
    glVertex2f(0.1,-0.31);
    glVertex2f(0.1,-0.26);
    glVertex2f(0.8,-0.26);
    glVertex2f(0.8,-0.31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(191, 10, 48);
    glVertex2f(0.1,-0.21);
    glVertex2f(0.1,-0.16);
    glVertex2f(0.8,-0.16);
    glVertex2f(0.8,-0.21);
    glEnd();




    glBegin(GL_QUADS);
    glColor3ub(0, 40, 104);
    Quadrilateral(0.1, -0.1,4.2,3.3);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(0.2136, -0.1472);
    glVertex2f(0.2167, -0.1324);
    glVertex2f(0.2197, -0.1472);
    glVertex2f(0.2293, -0.1473);
    glVertex2f(0.2216, -0.1565);
    glVertex2f(0.2245, -0.1715);
    glVertex2f(0.2167, -0.1624);
    glVertex2f(0.20885, -0.17155);
    glVertex2f(0.2118, -0.1566);
    glVertex2f(0.204, -0.1473);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(0.2726, -0.1924855096766);
    glVertex2f(0.2819817073734, -0.1880229927424);
    glVertex2f(0.2761817680218, -0.2006667907227);
    glVertex2f(0.2815520822362, -0.2136824651142);
    glVertex2f(0.2725729168697, -0.2084018200754);
    glVertex2f(0.266644089977, -0.220822492209);
    glVertex2f(0.2668589025456, -0.2052036829392);
    glVertex2f(0.2576219620967, -0.1998486626181);
    glVertex2f(0.2668589025456, -0.1953117704017);
    glVertex2f(0.2668589025456, -0.1953117704017);
    glVertex2f(0.267245565169, -0.1795442105674);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(0.2786735938173, -0.2912558844875);
    glVertex2f(0.2867075838821, -0.282628351748);
    glVertex2f(0.2833135452986, -0.2975034081954);
    glVertex2f(0.2908319851988, -0.3073209454507);
    glVertex2f(0.2812083821265, -0.3065771926283);
    glVertex2f(0.277814343543, -0.3216009996402);
    glVertex2f(0.2751506676926, -0.3061309409349);
    glVertex2f(0.2655270646204, -0.3053871881125);
    glVertex2f(0.2736899422263, -0.2966852800908);
    glVertex2f(0.2736899422263, -0.2966852800908);
    glVertex2f(0.2711121914034, -0.2814383472322);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(0.2312859411892, -0.3578217620897);
    glVertex2f(0.2375155056779, -0.3458473416495);
    glVertex2f(0.2367851429448, -0.3614661509193);
    glVertex2f(0.2457213457976, -0.3675649240627);
    glVertex2f(0.2363125552939, -0.3713580634568);
    glVertex2f(0.2356681175882, -0.3868281221621);
    glVertex2f(0.2305126159423, -0.3737380724884);
    glVertex2f(0.2212327129798, -0.377382461318);
    glVertex2f(0.2272474648999, -0.3652592903134);
    glVertex2f(0.2222208507952, -0.3517973642285);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(0.1764050909759, -0.3358109852088);
    glVertex2f(0.1859619058449, -0.337321893126);
    glVertex2f(0.1775833284255, -0.3452541596914);
    glVertex2f(0.1796779727804, -0.3608165112386);
    glVertex2f(0.1723903559625, -0.350315701214);
    glVertex2f(0.1640117785431, -0.358399058571);
    glVertex2f(0.1678955982844, -0.3438943425659);
    glVertex2f(0.1604770661944, -0.3333179871455);
    glVertex2f(0.1702520731836, -0.3348288950627);
    glVertex2f(0.1741358929249, -0.3206263606409);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(0.1532767262246, -0.2409259680085);
    glVertex2f(0.1627462642454, -0.2379041521741);
    glVertex2f(0.1564623311809, -0.2496892339282);
    glVertex2f(0.1610007272831, -0.2635140413707);
    glVertex2f(0.1521068546055, -0.2564308697705);
    glVertex2f(0.1455090867421, -0.2681223105181);
    glVertex2f(0.1466000473435, -0.2526355043668);
    glVertex2f(0.1379160009558, -0.2459119641352);
    glVertex2f(0.1473855389766, -0.2429656936967);
    glVertex2f(0.1485637764262, -0.2272522513578);
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
