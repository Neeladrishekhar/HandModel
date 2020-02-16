#include <Model.h>

// Cylinder::Cylinder(Bone bone) {
// 	posBase= bone.getP('b');
// 	posEnd = bone.getP();
// 	rBase = 0.2; rEnd = 0.2;
// }

Cylinder::Cylinder(Vector3f base, Vector3f end) {
	posBase= base;
	posEnd = end ;
	rBase = 0.2; rEnd = 0.2;
}

Sphere::Sphere(Vector3f centre) {
	pos = centre;
	radius = 0.2;
	// cout << pos << endl;
}

ChainY::ChainY(Finger finger) {
	for (unsigned int i = 0; i < BONES_IN_A_FINGER; ++i) {
		cyls[i] = Cylinder(finger.point(i), finger.point(i+1));
		sphs[i] = Sphere(finger.point(i+1));
	}
}

ModelHand::ModelHand(Hand hand) {
	for (unsigned int i = 0; i < FINGERS_IN_A_HAND; ++i)
		chains[i] = ChainY(hand.getFinger(i));
	baseSphere = Sphere(hand.getP());
}