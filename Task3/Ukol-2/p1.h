#pragma once

// modul dennich teplot v tydnu

// -- funkce pro práci s teplotami bìhem týdne

/// <summary>
/// Poèet dnù pro mìøení teploty. Identifikátor dne je pak dán hodnotou poøadí dne v týdnu, tedy 1 až 7.
/// </summary>
const int POCET_TEPLOT_TYDEN = 7;


int test_id_dne(int id_dne);


char* nazev_dne(int id_dne);


// -- funkce pro práci s teplotami (unierzální funkce pro jakýkoliv poèet teplot)
// double *teploty_tyden - pole teplot, int pocet_teplot - velikost pole teplot (poèet hodnot)


int zapis_teplotu(double *teploty_tyden, int pocet_teplot, int id_dne, double teplota);


int precti_teplotu(double *teploty_tyden, int pocet_teplot, int id_dne, double *teplota);


double prumerna_teplota(double* teploty_tyden, int pocet_teplot);


double maximalni_teplota(double* teploty_tyden, int pocet_teplot);


int pozice_teploty(double* teploty_tyden, int pocet_teplot, double teplota);


int pocet_dnu_teplota(double* teploty_tyden, int pocet_teplot, double teplota);


// -- funkce pro zprostredkvani operaci, funkce vstupu a vystupu


void nacti_teplotu_den(double *teploty_tyden, int pocet_teplot);


void nacti_teplotu_tyden(double *teploty_tyden, int pocet_teplot);


void tisk_teploty(double *teploty_tyden, int pocet_teplot);


void tisk_statistika(double *teploty_tyden, int pocet_teplot);


void zapis_do_souboru_statistika(double* teploty_tyden, int pocet_teplot, char* nazev_souboru);


void zapis_do_souboru_teploty(double *teploty_tyden, int pocet_teplot, char *nazev_souboru);


void nacti_ze_souboru_teploty(double *teploty_tyden, int pocet_teplot, char *nazev_souboru);


// -- funkce pro realizaci práce s týdeními teplotami

void menu();

char volba_menu();

void operace(double *teploty_tyden);