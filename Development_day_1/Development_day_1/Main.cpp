#include<iostream>
#include "Vec3.h"

using namespace std;


int main() {

	typedef vec3 < float> fvec3;

	fvec3 test1;

	fvec3 *vec1 = new fvec3(1, 5, 18);
	cout << "Vector 1:" << endl;
	cout << vec1->x << " " << vec1->y << " " << vec1->z <<endl;

	fvec3 *vec2 = new fvec3(3, 6, 9);
	cout << "Vector 2:" << endl;
	cout << vec2->x << " " << vec2->y << " " << vec2->z << endl;
	cout << endl;

	vec1->normalize();

	cout << "Vector 1 normalized" << endl;
	cout << vec1->x << " " << vec1->y << " " << vec1->z << endl;
	cout << endl;


	cout << "Vector 1 = 0" << endl;
	vec1->zero();

	cout << vec1->x << " " << vec1->y << " " << vec1->z << endl;

	cout << endl;

	cout << "Vector  = 0 ?" << " " << vec1->is_zero() << " " << "Vector 2 = 0?" << " " << vec2->is_zero() << endl;
	cout << endl;
	float dis;
	dis = vec1->distance_to(*vec2);
	cout << "Distance between 1 and 2 = "<< dis << endl;
	system("pause");


	return 0;

}