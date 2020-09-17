/*
 * pole_prostokąt.cpp
 * 
 * Copyright 2020  <>
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

int main(int argc, char **argv)
{
	int bok1; //deklaracja zmiennej
	cout << "Podaj pierwszy bok prostokątu: ";
	int bok2; //deklaracja zmiennej
	cout << "Podaj drugi bok prostokątu ";
	int pole;
	bok1 = 0; //inicjacja zmiennej 
	bok2 = 0; //inicjacja zmiennej
	pole = 0; //inicjacja zmiennej
	cin >> bok1;
	cin >> bok2;
	pole = bok1 * bok2;
	cout << "Pole: " << pole; << endl;
	return 0;
}

