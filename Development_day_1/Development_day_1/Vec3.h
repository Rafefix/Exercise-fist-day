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

	float distance_to(vec3 vector_1, vec3 vector_2) {
		float distance;
		distance = sqrt(((vector_1.x + vector_2.x)*(vector_1.x + vector_2.x)) + ((vector_1.y + vector_2.y)*(vector_1.y + vector_2.y)) + ((vector_1.z + vector_2.z)*(vector_1.z + vector_2.z)));
		return distance;
	};

	vec3 operator+(const vec3 &vec_a, const vec3 &vec_b) {
		return vec_a.x + vec_b.x, vec_a.y + vec_b.y, vec_a.z + vec_b.z;
	};
	vec3 operator-(const vec3 &vec_a, const vec3 &vec_b) {
		return vec_a.x - vec_b.x, vec_a.y - vec_b.y, vec_a.z - vec_b.z;
	};
	vec3 operator+=(const vec3 &vec_a, T v) {
		return vec_a.x + v, vec_a.y + v, vec_a.z + v;
	};
	vec3 operator-=(const vec3 &vec_a, T v) {
		return vec_a.x - v, vec_a.y - v, vec_a.z - v;
	};
	vec3 operator=(const vec3 &vec_a, const vec3 &vec_b) {
		return vec_b.x = vec_a.x, vec_b.y = vec_a.y, vec_b.z = vec_a.z;
	}

	bool operator==(const vec3 vec_a, const vec3 vec_b) {
		if (vec_b.x != vec_a.x || vec_b.y != vec_a.y || vec_b.z != vec_a.z) return false;
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