#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petle_cw6.py
#  
#  Copyright 2020  <>



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
