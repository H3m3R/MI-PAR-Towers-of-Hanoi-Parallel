/*
 * state_printer.c
 *
 */

#include "tower.h"
#include <stdio.h>

void printState(Tower towers[], int size) {
	int i;
	for(i = 0; i < size; i++) {
		Disc *disc;
		printf("\nTower: %i\n", towers[i].number);
		disc = towers[i].top;
		while(disc != NULL) {
			int j;
			printf("%i\n", disc->size);
			for(j = 0; j < disc->size; j++) {
				printf("-");
			}
			printf("\n");
			disc = disc->next;
		}
	}
	return;
}
