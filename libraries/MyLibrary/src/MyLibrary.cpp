#include <MyLibrary.h>

Bone::Bone(float length) {
	boneLength = length;
}

Finger::Finger() {
	points = Matrix<float,5,3>::Zero();
}

Finger::Finger(Matrix<float,5,3> chain) {
	points = chain;
}

Finger::Finger(vector<Vector3f> chain) {
	points << chain[0], chain[1], chain[2], chain[3], chain[4];
}

Vector3f Finger::point(int i) {
	return points.row(i);
}

void Finger::point(int i, Vector3f input) {
	points.row(i) = input;
}

Finger::Finger(Vector3f position, float boneZeroLength, FingerName fName) {
	pos = position;
	bones.push_back(Bone(boneZeroLength));
	if (fName > 0) {
		bones.push_back(Bone(boneZeroLength*0.35));
		bones.push_back(Bone(boneZeroLength*0.35));
		bones.push_back(Bone(boneZeroLength*0.3));
	} else {
		bones.push_back(Bone(boneZeroLength*2.0));
		bones.push_back(Bone(boneZeroLength*1.2));
		bones.push_back(Bone(boneZeroLength*0.8));
	}
}

Hand::Hand() {
	T = Transform<float, 3, AffineCompact>::Identity();

	Vector3f basePos = T.translation();

	fingers.push_back(Finger(basePos,0.25, static_cast<FingerName>(0)));
	for (unsigned int i = 1; i < 5; ++i) fingers.push_back(Finger(basePos,1.0,static_cast<FingerName>(i)));

	// TODO setup transforms for bones

	// TODO obtain points array as required
}

Circle::Circle() {
	pos[0] = 30.0; pos[1] = 40.0; r = 3.2;
}

float Circle::DistanceSquared() {
	return pos.squaredNorm();
}

float Circle::Distance() {
	return pos.norm();
}