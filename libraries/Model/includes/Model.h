#include<BaseHand.h>

// class Cylinder: protected Bone
class Cylinder
{
	float rBase, rEnd;
	Vector3f posBase, posEnd;
public:
	Cylinder() {};
	Cylinder(Vector3f base, Vector3f end);
	// Cylinder(Bone bone);
	~Cylinder() {};
};

class Sphere
{
	float radius;
	Vector3f pos;
public:
	Sphere() {};
	Sphere(Vector3f centre);
	~Sphere() {};
};

// class ChainY: protected Finger
class ChainY
{
	vector<Cylinder> cyls = vector<Cylinder>(BONES_IN_A_FINGER);
	vector<Sphere> sphs = vector<Sphere>(BONES_IN_A_FINGER);
public:
	ChainY() {};
	ChainY(Finger finger);
	~ChainY() {};
};

class ModelHand
{
	vector<ChainY> chains = vector<ChainY>(FINGERS_IN_A_HAND);
	Sphere baseSphere;
public:
	ModelHand() {};
	ModelHand(Hand hand);
	~ModelHand() {};
};