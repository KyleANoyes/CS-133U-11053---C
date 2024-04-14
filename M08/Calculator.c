#include <stdio.h>
#include "Calculator.h"

Calculator InitCalculator(Calculator aCalc) {
	aCalc.value = 0.0;

	return aCalc;
}


Calculator Add(double val, Calculator aCalc) {
	aCalc.value = aCalc.value + val;

	return aCalc;
}


Calculator Subtract(double val, Calculator aCalc) {
	aCalc.value = aCalc.value - val;

	return aCalc;
}


Calculator Multiply(double val, Calculator aCalc) {
	aCalc.value = aCalc.value * val;

	return aCalc;
}


Calculator Divide(double val, Calculator aCalc) {
	aCalc.value = aCalc.value / val;

	return aCalc;
}


Calculator Clear(Calculator aCalc) {
	aCalc.value = 0.0;

	return aCalc;
}


double GetValue(Calculator aCalc) {
	return aCalc.value;
}