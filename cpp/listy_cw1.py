#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  listy_cw1.py
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


def pobierzOceny(lista, ile):
	while ile > 0:
		ocena = int(input("Podaj ocenę: "))
		if ocena > 0 and ocena <7:
			lista.append(ocena)
			ile -= 1
		else:
			print("Błędne dane")	
		

def obliczSrednia(lista):
	suma = 0
	for ocena in lista:
		suma+= ocena
	return suma/ len(lista)


def main(args):
	ile = int(input("Podaj ilość ocen: "))
	lista = [] #pusta lista
	pobierzOceny(lista , ile)
	
	print(lista)
	print("Średnia: ", obliczSrednia(lista))
	return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
