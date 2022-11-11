#include "pch.h"
#include "p1.h"
#include <iostream>


int test_id_dne(int id_dne) {
	// otestuje (ovìøí) identifikátor dne v týdnu, pøedpokládá se hodnota identifikátoru v rozsahu <1; 7>
	// vrátí hodnotu 0 v pøípadì chybného identifikátoru, jinak hodnotu 1
	return (int)id_dne > 0 && id_dne <= POCET_TEPLOT_TYDEN;
}


char* nazev_dne(int id_dne) {
	// vrátí název dne podle identifikátoru
	char nazvyDnu[10][10] = {
		"Pondeli",
		"Utery",
		"Streda",
		"Ctvrtek",
		"Patek",
		"Sobota",
		"Nedele"
	};
	char* s;

	if (test_id_dne(id_dne)) {
		s = (char*) malloc(10 * sizeof(char));
		if (s == NULL)
			return NULL;  // chyba: nepodaøila se alokace øetìzce v pamìti

		strcpy_s(s, 10, nazvyDnu[id_dne - 1]); // kopie názvu dne odpovídající dnu urèeném jeho identifikátor v týdnu
		return s;
	}
	else {
		return NULL;
	}
}


int zapis_teplotu(double *teploty_tyden, int pocet_teplot, int id_dne, double teplota) {
	// zapíše do tabulky teplot teplotu pro zadaný den, pozice v tabulce pro odpovidající den je urèena hodnotou id_dne
	// pøedpokládá se hodnota identifikátoru dne èíslováno od 1, pøi chybných datech, pøi neplatném identifikátoru dne vrátí hodnotu 0, jinak hodnotu 1
	return 0; // todo du, využít funkce test_id_dne
}


int precti_teplotu(double *teploty_tyden, int pocet_teplot, int id_dne, double *teplota) {
	// pøeète z tabulky teplot teplotu pro zadaný den, pozice v tabulce pro odpovidající den je urèena hodnotou id_dne, hodnota teploty je zapsána do výstupního parametru teplota
	// pøedpokládá se hodnota identifikátoru dne èíslováno od 1, pøi chybných datech, pøi neplatném identifikátoru dne vrátí hodnotu 0, jinak hodnotu 1
	return 0; // todo du, využít funkce test_id_dne
}


double prumerna_teplota(double* teploty_tyden, int pocet_teplot) {
	// spoèítá prùmìrnou teplotu ze všech dnù v týdnu, výsledek vrátí návratovou hodnotou funkce
	return 0; // todo du
}


double maximalni_teplota(double* teploty_tyden, int pocet_teplot) {
	// urèí maximální teplotu ze všech dnù v týdnu, výsledek vrátí návratovou hodnotou funkce
	return 0; // todo du
}


int pozice_teploty(double* teploty_tyden, int pocet_teplot, double teplota) {
	// vrátí identifkátor dne (pozici) s hledanou teplotou, èíslováno od nuly
	return 0; // todo du
}


int pocet_dnu_teplota(double* teploty_tyden, int pocet_teplot, double teplota) {
	// spoète poèet dnù, ve kterých nastala zadaná teplota
	return 0; // todo du
}


void nacti_teplotu_den(double *teploty_tyden, int pocet_teplot) {
	// pøeète do tabulky teplot hodnotu pro zadaný den, zajisti naètení identifkátoru dne v rozsahu 1 až 7 a teploty ze standardniho vstupu, zajisti zapis do tabulky teplot
	printf("Zadej teplotu pro konkretni den ve formatu <den mezera teplota> ");
	// todo du
	// použít jeden pøíkaz scanf pro naètení všech údajù
	// + využít funkce zapis_teplotu
}

void nacti_teplotu_tyden(double *teploty_tyden, int pocet_teplot) {
	// naète do tabulky teplot data za celý týden
	printf("Zadani teplot pro cely tyden\n");
	// todo du
	// + využít funkce zapis_teplotu
}

void tisk_teploty(double *teploty_tyden, int pocet_teplot) {
	// vypíše obsah tabulky teplot
	// todo du
	// + využít funkce precti_teplotu
}

void tisk_statistika(double *teploty_tyden, int pocet_teplot) {
	// získá hodnoty pro statistku (prùmìrná teplota, maximální teplota, poèet dnù s maximální teplotou) a vytiskne výsledky na standardní výstup
	// todo du
}

void zapis_do_souboru_statistika(double* teploty_tyden, int pocet_teplot, char* nazev_souboru) {
	// získá hodnoty pro statistiku (prùmìrná teplota, maximální teplota, poèet dnù s maximální teplotou) a zapíše výsledky do textového souboru
	// todo du
}

void zapis_do_souboru_teploty(double *teploty_tyden, int pocet_teplot, char *nazev_souboru) {
	// zapise tabulku teplot do souboru
	// todo du
}


void nacti_ze_souboru_teploty(double *teploty_tyden, int pocet_teplot, char *nazev_souboru) {
	// nacte tabulku teplot ze souboru
	// todo du
}

// ------------------------

void menu() {
	printf("\n| Menu\n");
	printf("| 0 - KONEC\n");
	printf("| 1 - Zadat teploty na klavesnici\n");
	printf("| 2 - Nacist teploty ze souboru\n");
	printf("| 3 - Ulozit teploty do souboru\n");
	printf("| 4 - Zobrazit teploty\n");
	printf("| 5 - Zobrazit teplotu v zadany den\n");
	printf("| 6 - Zmena teploty v zadany den\n");
	printf("| 7 - Statistika teplot\n");
}


char volba_menu() {
	printf("\nZadej cislo volby: ");
	char volba = getchar();
	while (getchar() != '\n');
	return volba;
}


void operace(double *teploty_tyden) {
	int konec = 0;
	while (!konec) {
		menu();

		char volba = volba_menu();

		switch (volba)
		{
			case '0': {
				konec = 1;
			} break;
			case '1': {
				nacti_teplotu_tyden(teploty_tyden, POCET_TEPLOT_TYDEN);			
			} break;
			case '2': {
				char soubor[10] = "data.txt";
				// todo du - naèíst název souboru
				nacti_ze_souboru_teploty(teploty_tyden, POCET_TEPLOT_TYDEN, soubor);			
			} break;
			case '3': {
				char soubor[10] = "data.txt";
				// todo du - naèíst název souboru
				zapis_do_souboru_teploty(teploty_tyden, POCET_TEPLOT_TYDEN, soubor);			
			} break;
			case '4': {
				tisk_teploty(teploty_tyden, POCET_TEPLOT_TYDEN);
			} break;
			case '5': {
				// pøeèti den 
				int den = 0;
				double teplota = 0;
				// todo du - naèíst identifkátor dne
				precti_teplotu(teploty_tyden, POCET_TEPLOT_TYDEN, den, &teplota);
				printf("Teplota v tento den: %.4f", teplota);
			} break;
			case '6': {
				// pøeèti den a hodnotu teploty
				int den = 0;
				double teplota = 0;
				// todo du - naèíst identifikátor dne a teplotu
				zapis_teplotu(teploty_tyden, POCET_TEPLOT_TYDEN, den, teplota);
			} break;
			case '7': {
				char soubor[10] = "data.txt";			
				tisk_statistika(teploty_tyden, POCET_TEPLOT_TYDEN);

				// Není v ukázkovém exe-souboru. (!!!)
				// Dotazát se na zápis do souboru (uložení do souboru), odpovìï stiskem klávesy <A> nebo <N>. V pøípadì odpovìdi ano, naèíst název souboru. A zobrazit informaci, "Data byla zapsána do souboru nazev souboru."
				zapis_do_souboru_statistika(teploty_tyden, POCET_TEPLOT_TYDEN, soubor);
			} break;
			default: {
				printf("Neplatná hodnota volby!");
			} break;
		}

	}
}
