// Copyright 2021 Poplavsky Anton
#ifndef MODULES_TASK_1_POPLAVSKY_A_MONTE_CARLO_MONTE_CARLO_H_
#define MODULES_TASK_1_POPLAVSKY_A_MONTE_CARLO_MONTE_CARLO_H_

#include <mpi.h>

#include <random>

double MonteCarlo(double x1, double x2, int nPoints, double (*func)(double));

#endif  // MODULES_TASK_1_POPLAVSKY_A_MONTE_CARLO_MONTE_CARLO_H_
