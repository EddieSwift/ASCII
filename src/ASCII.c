/*
 * ascii_table.c
 *
 *  Created on: Sep 14, 2018
 *      Author: eddie
 */

#include <stdio.h>

void print_ascii(int first, int last);

int main() {

	int first = 33; // first code
	int last = 126; // last code

	printf("\tPrinting ASCII  table from %c to %c\n\n", first, last);

	print_ascii(first, last);

	return 0;
}

void print_ascii(int first, int last) {

	int columns = 0;

	do {

		for (columns = 0; (columns < 4) && first <= 126; columns++) {

			printf("code %d => symbol %c;\t", first, first);
			first++;

		}

		printf("\n");
		columns = 0;

	} while (first <= last);
}

