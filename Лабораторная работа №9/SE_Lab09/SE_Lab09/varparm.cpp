#include "varparm.h"

	int Varparm::ivarparm(int kol, ...) {
		int* p = &kol;
		p++;
		int mul = 1;
		for (int i = 0; i < kol; i++) {
			mul *= (*p);
			p++;
		}
		return mul;
	}

	int Varparm::svarparm(short kol, ...) {
		int* p = (int*)(&kol);
		p++;
		int max = *p;
		for (int i = 0; i < (int)kol; i++) {
			if (*p > max) {
				max = *p;
			}
			p++;
		}
		return max;
	}

	double Varparm::fvarparm(float n, ...) {
		double sum = (double)n;
		double* p = (double*)(&n + 1);
		for (int i = 0; p[i] != (double)FLT_MAX; i++) {
			sum += p[i];
		}
		return sum;
	}

	double Varparm::dvarparm(double first, ...) {
		double* p = &first;
		double sum = 0;
		while (*p != DBL_MAX) {
			sum += *p;
			p++;
		}
		return sum;
	}