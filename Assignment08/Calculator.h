#ifndef CALCULATOR_H
#define CALCULATOR_H

typedef struct Calculator_struct {
	double value;
} Calculator;

Calculator InitCalculator(Calculator aCalc);
Calculator Add(double val, Calculator aCalc);
Calculator Subtract(double val, Calculator aCalc);
Calculator Multiply(double val, Calculator aCalc);
Calculator Divide(double val, Calculator aCalc);
Calculator Clear(Calculator aCalc);
double GetValue(Calculator aCalc);

#endif