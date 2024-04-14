// *** |Remove before submission ***
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
// *** Remove before submission| ***

#include <stdio.h>

#include "VendingMachine.h"

int main() {
	VendingMachine data;

	int num1;
	int num2;
	int qty;

	scanf("%d", &num1);
	scanf("%d", &num2);


	data = InitVendingMachine();
	data = Purchase(5, data);
	data = Restock(2, data);

	qty = GetInventory(data);

	Report(data);

	return 0;
}