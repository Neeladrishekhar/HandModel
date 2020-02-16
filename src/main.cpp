// #include <BaseHand.h>
#include <Model.h>

#include <iostream>

// #include <Graphics_old.h>
#include <Graphics.h>

int main(int argc, char **argv) {
	cout << " ... main ... " << endl;
	Hand hand;
	ModelHand modelHand(hand);

	initSharedMem();

	initGLUT(argc, argv);
	initGL();

	initCustomMain();

	glutMainLoop();

	return 0;
}

/*
int main(int argc, char **argv)
{
    // init global vars
    initSharedMem();

    // init GLUT and GL
    initGLUT(argc, argv);
    initGL();

    //texId = loadTexture("icosa_earth.bmp", true);
    texId = loadTexture("icosahedron_template1.bmp", true);
    //texId = loadTexture("icosahedron_template2.bmp", true);

    // the last GLUT call (LOOP)
    // window will be shown and display callback is triggered by events
    // NOTE: this call never return main().
    glutMainLoop(); // Start GLUT event-processing loop //

    return 0;
}
*/