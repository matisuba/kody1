/*
 * cwiczenie1.cpp
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

int staz = 1;
int zarobek = 1000;
int lata = 0;

void awans()
{

    for(int a=1; a<lata; a++){
        staz += 1;
        zarobek = zarobek + 0.1*zarobek;
    }

}

void drukuj(){
    cout << "Pracjuesz " << staz << " lat i zarabiasz " << zarobek << "złotych" << endl;

}
int main(int argc, char **argv)
{

    cout << "Podaj przewidywane lata pracy: ";
    cin >> lata;
    awans();
    drukuj();

    return 0;
}


