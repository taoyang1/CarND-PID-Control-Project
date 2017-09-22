#include "PID.h"
#include <cmath>
#include <iostream>


using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	PID::Kp = Kp;
	PID::Ki = Ki;
	PID::Kd = Kd;

	p_error = d_error = i_error = 0.0;

	step = 1;

	// best_error = std::numeric_limits<double>::max();
	// curr_error = 0.0;
}

void PID::UpdateError(double cte) {
	if (step == 1) {
		p_error = cte;
	}

	d_error = cte - p_error;
	p_error = cte;
	i_error += cte;

	step++;
	// curr_error = pow(cte,2);

	// for (int i = 0; i<3; i++) {
	// 	if (curr_error < best_error) {
	// 		best_error = curr_error;
	// 		dp[i] *= 1.1;
	// 		add_flag = sub_flag = false;
	// 		i = (i + 1) % 3;
	// 	} 

	// 	if
	// 	else
	// 		p[i] -= 2 * dp[i]
	// 	}
	// }

}

double PID::TotalError() {

}

