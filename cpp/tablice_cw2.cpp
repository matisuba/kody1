/*
 * tablice_cw2.cpp
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

void pobierzliczby(int t[]) {
    int liczba1 = 0;
    for (int i = 0; i<5; i++){
        cout << "Podaj liczbe: ";
        cin >> liczba1;
        t[i] = liczba1;
    }
}

int suma(int t[]){
    float suma = 0;
    for (int i = 0; i<5; i++){
        suma+= t[i];      
    }
    return suma;
}

int main(int argc, char **argv)
{
	int i = 5;
    int t1[i];
    int t2[i];
    int suma1;
    int suma2;
    pobierzliczby(t1);
    cout << "Teraz seria druga liczb!" << endl;
    pobierzliczby(t2);
    suma1 = suma(t1);
    suma2 = suma(t2);
    cout << "Suma 1 wynosi: " << suma1 << endl;
    cout << "Suma 2 wynosi: " << suma2 << endl;
	if(suma1>suma2)
		cout << "Suma 1 jest wieksza od sumy 2" << endl;
	else
		cout << "Suma 2 jest wieksza od sumy 1" << endl;
		
}
