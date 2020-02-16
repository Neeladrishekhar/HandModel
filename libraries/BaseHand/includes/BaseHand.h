#include <Eigen/Dense>
using namespace Eigen;

#include <vector>
using namespace std;

#include <iostream>

#define BONES_IN_A_FINGER 4
#define FINGERS_IN_A_HAND 5
typedef Transform<float, 3, AffineCompact> Tran;

enum BoneName
{
	metacarpal, proximal_phalanges, intermediate_phalanges, distal_phalanges
};

enum FingerName
{
	thumb,pointer,middle,ring,pinky
};

class Bone
{
	BoneName bName;
	float boneLength;
	Tran localT, globalT;
public:
	Bone();
	Bone(BoneName boneName, float length);
	Bone(BoneName boneName, float length, float zRotDiv);
	~Bone() {};

	void setGlobalTran(Tran parentTransform);
	void setGlobalTran(Bone parentBone);
	Vector3f getP();
	Vector3f getP(char option);
};

class Finger
{
	Matrix<float,3,5> points;
	
	FingerName fName;
	vector<Bone> bones = vector<Bone>(BONES_IN_A_FINGER);
public:
	Finger();	
	// Finger(Matrix<float,3,5> chain);	
	// Finger(vector<Vector3f> chain);
	// void point(unsigned int i, Vector3f input);

	Finger(FingerName fingerName, Tran handT);
	Vector3f point(unsigned int i);
};

class Hand
{
	vector<Finger> fingers = vector<Finger>(FINGERS_IN_A_HAND);
	Tran T;
public:
	Hand();
	Finger getFinger(unsigned int i);
	Vector3f getP();
};