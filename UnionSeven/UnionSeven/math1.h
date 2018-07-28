#pragma once
#include <cmath>
namespace math1 {
	int x;
	const double C = 3 * pow(10, 6);
	double add(double a, double b) {
		return a + b;
	}
}

namespace math2 {
	double add(double a, double b) {
		return (a + b) < 0 ? abs(a + b): a + b;
	}
}

