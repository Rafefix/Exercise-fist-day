#ifndef VEC3
#define VEC3


template <class T>


class vec3 {
public:

	T x, y, z;

	vec3() : x(0), y(0), z(0) {};
	vec3(T v) : x(v), y(v), z(v) {};
	vec3(T X, T Y, T Z) : x(X), y(Y), z(Z) {};

	//Operators + , -, +=, -=, =, ==

	void normalize() {
		float lenght;
		lenght = sqrt((x * x) + (y * y) + (z * z));
		x = x / lenght;
		y = y / lenght;
		z = z / lenght;
	};

	void zero() {
		x = 0;
		y = 0;
		z = 0;
	};

	const bool is_zero() {
	if (x != 0 || y != 0 || z != 0) return false;
	else return true;
	} ;

	float distance_to(vec3 vector_2) {
		float distance;
		distance = sqrt(((x + vector_2.x)*(x + vector_2.x)) + ((y + vector_2.y)*(y + vector_2.y)) + ((z + vector_2.z)*(z + vector_2.z)));
		return distance;
	};

	vec3 operator+(const vec3 &vec) {
		return x + vec.x, y + vec.y, z + vec.z;
	};
	vec3 operator-(const vec3 &vec) {
		return x - vec.x, y - vec.y, z - vec.z;
	};
	vec3 operator+=(const vec3 &vec) {
		return x += vec.x, y += vec.y, z += vec.z;
	};
	vec3 operator-=(const vec3 &vec) {
		return x -= vec.x, y -= vec.y, z -= vec.z;
	};
	vec3 operator=(const vec3 &vec) {
		return x = vec.x, y = vec.y, z = vec.z;
	}

	bool operator==(const vec3 vec) {
		if (x != vec.x || y != vec.y || z != vec.z) return false;
		else return true;
	}
};
/*

vec3<float> operator+(const vec3<float> &vec_a, const vec3<float> &vec_b) {
	return vec_a.x + vec_b.x, vec_a.y + vec_b.y, vec_a.z + vec_b.z;
}
vec3<float> operator-(const vec3<float> &vec_a, const vec3<float> &vec_b) {
	return vec_a.x - vec_b.x, vec_a.y - vec_b.y, vec_a.z - vec_b.z;
}
vec3<float> operator+=(const vec3<float> &vec_a, float v) {
	return vec_a.x + v, vec_a.y + v, vec_a.z + v;
}

vec3<float> operator-=(const vec3<float> &vec_a, float v) {
	return vec_a.x - v, vec_a.y - v, vec_a.z - v;
}

vec3<float> operator==(const vec3<float> &vec_a, const vec3<float> &vec_b) {
	return vec_a.x + vec_b.x, vec_a.y + vec_b.y, vec_a.z + vec_b.z;
}
*/




#endif