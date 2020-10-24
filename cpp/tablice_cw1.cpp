/*
 * tablice_cw1.cpp
 * 
 * Copyright 2020 nie wiem <nie wiem@DESKTOP-59CJN83>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
using namespace std;

void pobierzoceny(int t[], int ile) {
	int ocena = 0; //zmienna pomocnicza
	for (int i = 0; i < ile; i++){
		cout << "Podaj ocene: ";
		cin >> ocena;
		if (ocena > 0 && ocena <7)
			t[i] = ocena;
		else
			i--;
	}
	
}

float obliczSrednia(int t[], int ile){
	float suma = 0;
	for (int i = 0; i< ile; i++){
	suma += t[i];
	}
	return suma/ile;
}

void drukuj(int t[], int ile){
	for (int i = 0; i< ile; i++){
		cout << "Indeks: " << i << " Wartosc: " << t[i] << endl;
}
}

int main(int argc, char **argv)
{
	int ile = 0;
	cout << "Ile podasz ocen? ";
	cin >> ile;
	int oceny[ile];
	pobierzoceny(oceny, ile);
	drukuj(oceny, ile);
	cout << "Srednia podanych ocen to " << obliczSrednia(oceny, ile) << endl;
	return 0;
}
