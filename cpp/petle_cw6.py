#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petle_cw6.py
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


def main(args):
	liczba = 1
	suma=liczba+liczba
	
	while liczba > 0:
		liczba = int(input("Podaj liczbę: "))
		suma = suma + liczba
	
	if liczba == 0:
		print(suma)
    
	return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
