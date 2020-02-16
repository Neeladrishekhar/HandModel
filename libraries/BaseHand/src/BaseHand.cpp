#include <BaseHand.h>

Bone::Bone() {
	// boneLength = 1.0f;
}

Bone::Bone(BoneName boneName, float length) {
	bName = boneName;
	boneLength = length;
	localT = Tran::Identity(); 
	localT.translate(Vector3f(boneLength,0,0));
}

Bone::Bone(BoneName boneName, float length, float zRotDiv) {
	bName = boneName;
	boneLength = length;
	localT = Tran::Identity();
	localT.translate(Vector3f(boneLength,0,0));
	localT.rotate( AngleAxisf(M_PI / zRotDiv, Vector3f::UnitZ()) );
}

void Bone::setGlobalTran(Tran parentTransform) {
	globalT = Tran(localT); globalT.pretranslate(Vector3f(-boneLength,0,0));
	globalT = parentTransform * globalT;
}

void Bone::setGlobalTran(Bone parentBone) {
	globalT = Tran(localT); globalT.pretranslate(Vector3f(-boneLength,0,0));
	globalT.translate( Vector3f(parentBone.boneLength, 0, 0) );
	globalT = parentBone.globalT * globalT;
}

Vector3f Bone::getP() {
	return globalT * Vector3f(boneLength,0,0);
}

Vector3f Bone::getP(char option) {
	return globalT.translation();
}

Finger::Finger() {
	// points = Matrix<float,3,5>::Zero();
}

// Finger::Finger(Matrix<float,3,5> chain) {
// 	points = chain;
// }

// Finger::Finger(vector<Vector3f> chain) {
// 	points << chain[0], chain[1], chain[2], chain[3], chain[4];
// }

Vector3f Finger::point(unsigned int i) {
	return points.col(i);
}

// void Finger::point(unsigned int i, Vector3f input) {
// 	points.col(i) = input;
// }

Finger::Finger(FingerName fingerName, Tran handT) {
	switch (fingerName) {
		case thumb:
		bones[0] = Bone(static_cast<BoneName>(0), 0.25, 3.0); bones[0].setGlobalTran(handT);
		bones[1] = Bone(static_cast<BoneName>(1), 0.5f); bones[1].setGlobalTran(bones[0]);
		bones[2] = Bone(static_cast<BoneName>(2), 0.3f); bones[2].setGlobalTran(bones[1]);
		bones[3] = Bone(static_cast<BoneName>(3), 0.2f); bones[3].setGlobalTran(bones[2]);
		break;
		case pointer:
		bones[0] = Bone(static_cast<BoneName>(0), 1.0f, 9.0); bones[0].setGlobalTran(handT);
		bones[1] = Bone(static_cast<BoneName>(1), 0.35); bones[1].setGlobalTran(bones[0]);
		bones[2] = Bone(static_cast<BoneName>(2), 0.35); bones[2].setGlobalTran(bones[1]);
		bones[3] = Bone(static_cast<BoneName>(3), 0.3f); bones[3].setGlobalTran(bones[2]);
		break;
		case middle:
		bones[0] = Bone(static_cast<BoneName>(0), 1.0f); bones[0].setGlobalTran(handT);
		bones[1] = Bone(static_cast<BoneName>(1), 0.35); bones[1].setGlobalTran(bones[0]);
		bones[2] = Bone(static_cast<BoneName>(2), 0.35); bones[2].setGlobalTran(bones[1]);
		bones[3] = Bone(static_cast<BoneName>(3), 0.3f); bones[3].setGlobalTran(bones[2]);
		break;
		case ring:
		bones[0] = Bone(static_cast<BoneName>(0), 1.0f, -9.0); bones[0].setGlobalTran(handT);
		bones[1] = Bone(static_cast<BoneName>(1), 0.35); bones[1].setGlobalTran(bones[0]);
		bones[2] = Bone(static_cast<BoneName>(2), 0.35); bones[2].setGlobalTran(bones[1]);
		bones[3] = Bone(static_cast<BoneName>(3), 0.3f); bones[3].setGlobalTran(bones[2]);
		break;
		case pinky:
		bones[0] = Bone(static_cast<BoneName>(0), 1.0f, -4.5); bones[0].setGlobalTran(handT);
		bones[1] = Bone(static_cast<BoneName>(1), 0.35); bones[1].setGlobalTran(bones[0]);
		bones[2] = Bone(static_cast<BoneName>(2), 0.35); bones[2].setGlobalTran(bones[1]);
		bones[3] = Bone(static_cast<BoneName>(3), 0.3f); bones[3].setGlobalTran(bones[2]);
	}

	points << handT.translation(), bones[0].getP(), bones[1].getP(), bones[2].getP(), bones[3].getP();
	// cout << fingerName << " " << points << endl;
}

Hand::Hand() {
	T = Tran::Identity();

	Vector3f basePos = T.translation();

	for (unsigned int i = 0; i < FINGERS_IN_A_HAND; ++i) fingers[i] = Finger(static_cast<FingerName>(i), T);
}

Finger Hand::getFinger(unsigned int i) {
	return fingers[i];
}

Vector3f Hand::getP() {
	return T.translation();
}
