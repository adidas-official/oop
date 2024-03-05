#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>

typedef struct
{
	double a, b, c;
	double obvod, obsah;
	bool rovnoramenny, rovnostranny;
} TTrojuhelnik;

// dop�edn� deklarace (lze volat funkce definovan� pod m�stem vol�n�)
void spocti_trojuhelnik(TTrojuhelnik *t);
bool test_rovnoramenny(TTrojuhelnik t);
bool test_rovnostranny(TTrojuhelnik t);
bool test_trojuhelnik(TTrojuhelnik t);
