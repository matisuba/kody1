#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  cw_funkcje1.py
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


def awans(lata, zarobek, staz):

    for i in range (lata-1):
        staz+=1
        zarobek = zarobek + 0.1*zarobek
    return zarobek, staz

def drukuj(staz, zarobek):
    print("Po ", staz ," latach stażu bedziesz zarabiał: ", zarobek)

def main(args):
    staz = 1
    zarobek = 1000

    lata = int(input("Podaj przewidywaną ilość lat pracy: "))
    
    zarobek, staz = awans(lata, zarobek, staz)
    
    drukuj(staz, zarobek)

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
