#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "Vector3.h"

int main() {

	Vector3 v1;
	Vector3 v2;
	Vector3 v3;

	v1.x = 2;
	v1.y = 2;
	v1.z = 2;

	v2.x = 1;
	v2.y = 1;
	v2.z = 1;

	v3 = v1 + v2;
	v3 = v1 - v2;
	v3 += v2;
	v3 -= v1;
	v3 = v2;
	bool x = v3 == v1;
	std::cout << x;
	system("pause");
	return 0;
}
