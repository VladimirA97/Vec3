#include <iostream>
#include "vec3.h"

using namespace std;

int main() {
	Vec3<int> v1 = { 1,2,3 };
	Vec3<int> v2 = { 4,5 };
	Vec3<int> v3 = { 6,7,8 };

	Vec3<int> va = v1 + v2;
	Vec3<int> vb = v1 - v2;

	Vec3<int> vc = { 2,4,6 };
	vc += v1;
	Vec3<int> vd = { 9,6,3 };
	vd -= v1;

	Vec3<int> ve = { 4,6,8 };
	ve = v3;

	Vec3<int> vf = { 1,2,3 };
	return (vf == v1);

	Vec3<float> normaliseVec = v1.Normalise();
	normaliseVec.Normalise();

	Vec3<int> vg = vg.Zero();

	Vec3<int> vh = { 0,0,0 };
	return (vh.isZero());

	float dist = v1.distanceTo(v2);

	system("pause");
	return 0;
}