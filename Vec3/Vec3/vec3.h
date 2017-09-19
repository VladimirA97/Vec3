#include <cmath>
#ifndef VEC3_H
#define VEC3_H

template <class Type>
class Vec3 {
private:
	Type _x, _y, _z;
public:
	Vec3() {
	}
	Vec3(Type x, Type y, Type z) {
		_x = x;
		_y = y;
		_z = z;
	}
	Vec3(Type x, Type y) {
		_x = x;
		_y = y;
		_z = 0;
	}
	~Vec3() {
	}
	Vec3 operator +(const Vec3 num) {
		Vec3 result = {
			_x + num._x,
			_y + num._y,
			_z + num._z
		};
		return result;
	}
	Vec3 operator -(const Vec3 num) {
		Vec3 result = {
			_x - num._x,
			_y - num._y,
			_z - num._z
		};
		return result;
	}
	Vec3& operator +=(const Vec3 num) {
		_x += num._x;
		_y += num._y;
		_z += num._z;
		return *this;
	}
	Vec3& operator -=(const Vec3 num) {
		_x -= num._x;
		_y -= num._y;
		_z -= num._z;
		return *this;
	}
	Vec3 operator =(const Vec3 num) {
		_x = num._x;
		_y = num._y;
		_z = num._z;
		return *this;
	}
	bool operator ==(const Vec3 num) {
		return (_x == num.x && _y = num.y && _z = num.z);
	}

	Vec3<float> Normalise() {
		float module = sqrt(_x*_x + _y*_y + _z*_z);

		Vec3<float> result = {
			(float)_x / module,
			(float)_y / module,
			(float)_z / module
		};
		return result;
	}
	Vec3 Zero() {
		Vec3 result = {
			0,
			0,
			0
		};
		return result;
	}
	bool isZero() {
		return this == (0, 0, 0);
	}
	float distanceTo(const Vec3 num) {
		Vec3 sub = *this - num;
		float module = sqrt(sub._x*sub._x + sub._y*sub._y + sub._z*sub._z);
		return module;
	}
};

#endif // VEC_3
