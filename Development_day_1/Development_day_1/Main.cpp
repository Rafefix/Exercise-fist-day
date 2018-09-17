#include<iostream>
#include "Vec3.h"

using namespace std;


int main() {

	typedef vec3 < float> fvec3;

	fvec3 test1;

	fvec3 *vec1 = new fvec3(1, 1, 1);
	cout << "Vector 1:" << endl;
	cout << vec1->x << vec1->y << vec1->y <<endl;


	system("pause");


	return 0;

}