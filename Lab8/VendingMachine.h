// *** |Remove before submission ***
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
// *** Remove before submission| ***

#ifndef VENDING_MACHINE_H
#define VENDING_MACHINE_H

typedef struct VendingMachine_struct {
	int bottles;
} VendingMachine;

VendingMachine InitVendingMachine();
VendingMachine Purchase(int amount, VendingMachine vm);
VendingMachine Restock(int amount, VendingMachine vm);
int GetInventory(VendingMachine vm);
void Report(VendingMachine vm);

#endif