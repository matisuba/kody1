/*
 * cw_funkcje2.cpp
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


void srednia(float suma, float iloscliczb){
    float srednia = suma / iloscliczb;
    cout <<"Średnia wynosi: "<< srednia <<endl;
}



void med(float *tab, int iloscliczb){
    float med;
    if(iloscliczb % 2 ==0){
        med = (tab[iloscliczb/2 - 1]+tab[iloscliczb/2])/2;
    } else {
        med = tab[iloscliczb/2];
    }
    cout <<"med wynosi: " << med << endl;
}


int main(int argc, char **argv)
{

	int t =0;
	int iloscliczb =0;
	int *tab = new int [iloscliczb];
	cout <<"Ilość liczb: ";
	cin >>iloscliczb;

	if(iloscliczb >20){
		cout <<"Maksymalna ilość ocen wynosi 20" <<endl;
		return 0;
}

	float tablica[iloscliczb];
	int suma = 0;
	for (int i = 0; i < iloscliczb; ++i)
    {
		cout <<"Podaj ocenę  "<<(i+1)<<" : ";
		cin >>tablica[i];
		if(tablica[i] <1 || tablica[i] >6){
			cout <<"Wprowadzono niepoprawną ocenę"<<endl;
			return 0;
        }
		suma += tablica[i];
    }
	int v;
	int x;
	for(v=0;v<iloscliczb;v++)
    	{
			for(x=v+1;x<iloscliczb;x++)
    		{
    			if(tablica[v]>tablica[x])
    			{
    				t  =tablica[v];
    				tablica[v]=tablica[x];
    				tablica[x]=t;
    			}
    		}
    	}
    srednia(suma, iloscliczb);
    med(tablica, iloscliczb);


	return 0;
}
