/// Copyright 2021 Cheremushkin Kirill
#ifndef MODULES_TASK_3_CHEREMUSHKIN_INTEGLRA_PRIMOUGOLNIK_INTEGRAL_H_
#define MODULES_TASK_3_CHEREMUSHKIN_INTEGLRA_PRIMOUGOLNIK_INTEGRAL_H_
#include <math.h>
#include "mpi.h"
#include "vector"

const double eps = 0.01;
double linelintegral(const std::vector<std::pair<double, double>>& limits);
double Parallelintegral(const std::vector<std::pair<double, double>>& limits);
double f(double x);
double ff(double* xx);
double fff(double* xx);
#endif  // MODULES_TASK_3_CHEREMUSHKIN_INTEGLRA_PRIMOUGOLNIK_INTEGRAL_H_
