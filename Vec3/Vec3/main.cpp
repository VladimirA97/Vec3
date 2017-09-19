#include <iostream>
#include "vec3.h"

using namespace std;

int main() {
	Vec3<int> v1 = { 1,2,3 };
	Vec3<int> v2 = { 4,5 };
	Vec3<int> v3 = { 6,7,8 };

	Vec3<int> va = v1 + v2;
	Vec3<int> vb = v1 - v2;

	//Vec3<int> vb = { 2,4,6 };
	//vb += v1;
	//Vec3<int> vc = { 9,6,3 };
	//vc -= v1;

	Vec3<int> vd = { 4,6,8 };
	vd = v3;

	Vec3<int> ve = { 1,2,3 };
	return (ve == v1);

	Vec3<float> normaliseVec = v1.Normalise();
	normaliseVec.Normalise();

	Vec3<int> vf = vf.Zero();

	Vec3<int> vg = { 0,0,0 };
	return (vg.isZero());

	float dist = v1.distanceTo(v2);

	system("pause");
	return 0;
}