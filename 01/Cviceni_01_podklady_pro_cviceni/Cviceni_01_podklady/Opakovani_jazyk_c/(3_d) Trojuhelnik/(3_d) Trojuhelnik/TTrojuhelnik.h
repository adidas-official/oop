#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>

// dopøedná deklarace (lze volat funkce definované pod místem volání)
double spocti_obvod(double a, double b, double c);
double spocti_obsah(double a, double b, double c);
bool test_rovnoramenny(double a, double b, double c);
bool test_rovnostranny(double a, double b, double c);
void tisk_trojuhelnik(double a, double b, double c, double obvod, double obsah, bool rovnoramenny, bool rovnostranny);
bool test_trojuhelnik(double a, double b, double c);
void nacti_strany_trojuhelnika(double* a, double* b, double* c);
