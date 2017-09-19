#include <iostream>
#include "vec3.h"

using namespace std;

int main() {
	Vec3<int> v1 = { 1,2,3 };
	Vec3<int> v2 = { 4,5 };

	Vec3<int> v3 = v1 + v2;
	Vec3<int> v4 = v1 - v2;

	Vec3<int> v5 = { 2,4,6 };
	v5 += v1;
	Vec3<int> v6 = { 9,6,3 };
	v6 -= v1;

	Vec3<float> normaliseVec = v1.Normalise();
	normaliseVec.Normalise();

	float dist = v1.distanceTo(v2);

	system("pause");
	return 0;
}