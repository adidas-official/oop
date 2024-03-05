#pragma once
#include "TTrojuhelnik.h"

void vlozit_trojuhelnik(TTrojuhelnik* aTr[], int* nTr, int N_Tr);
void vypsat_trojuhelniky(TTrojuhelnik* aTr[], int nTr);
void odstranit_trojuhelnik(TTrojuhelnik* aTr[], int* nTr);
int porovnej_trojuhelniky_obvod(const void* o1, const void* o2);
void seradit_trojuhelniky_obvod(TTrojuhelnik* aTr[], int nTr);
int porovnej_trojuhelniky_obsah(const void* o1, const void* o2);
void seradit_trojuhelniky_obsah(TTrojuhelnik* aTr[], int nTr);
void ulozit_do_souboru(TTrojuhelnik* aTr[], int nTr);
