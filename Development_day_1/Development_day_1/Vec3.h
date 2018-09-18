#ifndef VEC3
#define VEC3


template <class T>


class vec3 {
public:

	T x, y, z;

	vec3() : x(0), y(0), z(0) {};
	vec3(T vec) : x(vec), y(vec), z(vec) {};
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

	bool is_zero() const {
	if (x != 0 || y != 0 || z != 0) return false;
	else return true;
	} ;

	float distance_to(vec3 vec) {
		/*float distance;
		distance = sqrt(((x + vec.x)*(x + vec.x)) + ((y + vec.y)*(y + vec.y)) + ((z + vec.z)*(z + vec.z)));
		return distance;*/
		return sqrt(((x + vec.x)*(x + vec.x)) + ((y + vec.y)*(y + vec.y)) + ((z + vec.z)*(z + vec.z)));
	};

	vec3 operator+(const vec3 &vec) {
		vec3 aux;
		aux.x = x + vec.x;
		aux.y = y + vec.y;
		aux.z = z + vec.z;
		return aux;
		/*return x + vec.x, y + vec.y, z + vec.z;*/
	};
	vec3 operator-(const vec3 &vec) {
		vec3 aux;
		aux.x = x - vec.x;
		aux.y = y - vec.y;
		aux.z = z - vec.z;
		return aux;
		/*return x - vec.x, y - vec.y, z - vec.z;*/
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
		/*if (x != vec.x || y != vec.y || z != vec.z) return false;
		else return true;*/
		return (x != vec.x || y != vec.y || z != vec.z);
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