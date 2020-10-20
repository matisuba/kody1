#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  cw_funkcje2.py
#  
#  Copyright 2020 nie wiem <nie wiem@DESKTOP-59CJN83>
#  
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2 of the License, or
#  (at your option) any later version.
#  
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#  
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
#  MA 02110-1301, USA.
#  
#  

import math
import statistics
def srednia(tablica, iloscliczb):
	srednia =sum(tablica)/iloscliczb
	print("Średnia wynosi: ", srednia)


def mediana(tablica):
	print("Mediana wynosi: ", statistics.median(tablica))



def main(args):
	iloscliczb = int(input("Ilość liczb: "))
	if iloscliczb >20:
		print("Maksymalna ilość ocen wynosi 20!")
		return(iloscliczb)

	tablica =[]
	for i in range(0,iloscliczb):
		f = int(input("Podaj liczbę: "))
		tablica.append(f)

		if f <=0 or f >6:
			print("Wprowadzono niepoprawną ocenę")
			return


	srednia(tablica, iloscliczb)
	mediana(tablica)

	return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

