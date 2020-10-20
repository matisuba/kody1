/*
 * cw_funkcje1.cpp
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

void awans(int &staz, int &zarobek, int lata){

	for(int i=1; i<lata; i++){
		staz += 1;
		zarobek = zarobek + 0.1*zarobek;
	}
}


void drukuj(int staz, int zarobek){
	cout << "Po " << staz << " latach pracy bedziesz zarabiać: " << zarobek << endl;
}


int main(int argc, char **argv)
{
	int staz = 1;
	int zarobek = 1000;
	int lata = 0;

	cout << "Podaj przewidywane lata pracy: ";
	cin >> lata;

	awans(staz, zarobek, lata);
	drukuj(staz,zarobek);
	return 0;
}
