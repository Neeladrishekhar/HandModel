#include <Eigen/Dense>
using namespace Eigen;

#include <vector>
using namespace std;

#include <iostream>

class Bone
{
	float boneLength;
	Transform<float, 3, AffineCompact> localT, globalT;
public:
	Bone(float length);
	~Bone() {};
};

enum BoneName
{
	metacarpal, proximal_phalanges, intermediate_phalanges, distal_phalanges
};

enum FingerName
{
	thumb,pointer,middle,ring,pinky
};

class Finger
{
	Matrix<float,5,3> points;
	
	// Bone 
	Vector3f pos;
	// Bone metacarpal, proximal_phalanges, intermediate_phalanges, distal_phalanges;
	vector<Bone> bones;
public:
	Finger();	
	Finger(Matrix<float,5,3> chain);	
	Finger(vector<Vector3f> chain);
	Vector3f point(int i);
	void point(int i, Vector3f input);

	Finger(Vector3f position, float boneZeroLength, FingerName fName);
};

class Hand
{
	// Finger thumb,index,middle,ring,pinky;
	vector<Finger> fingers;
public:
	Transform<float, 3, AffineCompact> T;
	Hand();
};

class Circle
{
	float r;
	Vector2f pos;
public:
	Circle();
	float DistanceSquared();
	float Distance();
};