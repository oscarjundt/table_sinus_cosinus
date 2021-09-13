#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main() {
	float resd;
	float ress;
	float rescos;
	for (int nb = 0; nb <= 10; nb++) {
		resd = (M_PI * nb) / 180;
		ress = sin(resd);
		rescos = cos(resd);
		cout <<"le sinus de "<< nb << "=" << ress << ";" <<"le cos de "<< nb<< "=" << rescos << endl;
	}

}