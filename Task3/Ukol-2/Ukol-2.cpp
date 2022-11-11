#include "pch.h"
#include "p1.h"
#include <iostream>

int main()
{
	printf("/** \n* Nazev programu: Ukol 2\n");
	printf("* Autor: XXXX \n");
	printf("* Datum: DD.MM.2021\n**/ \n\n");

	const double defaultni_teplota = 0.0;
	
	double teploty_tyden[POCET_TEPLOT_TYDEN];

	// defaultni inicializace (nastaveni) hodnot dennich teplot
	for (int i = 1; i <= POCET_TEPLOT_TYDEN; i++) {
		teploty_tyden[i - 1] = defaultni_teplota;
	}

	operace(teploty_tyden);

	return 0;
}
