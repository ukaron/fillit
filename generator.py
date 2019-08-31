#!/usr/bin/python

import sys
import random

pcsSize = 4
dirTab = [(0, 1), (0, -1), (1, 0), (-1, 0)]

def PrintPcs(pcs, nb = 0):
    file = open('test', 'a')
    for line in pcs:
        file.write(''.join(line) + '\n')
    if nb == 0:
        file.write('\n')
    file.close()

def GenPcs(pcs, x, y):
	pcs[y][x] = '#'
	i = 1
	while (i < pcsSize):
		while (1):
			d = random.randint(0,pcsSize - 1)
			if (((y + dirTab[d][0] >= 0) and (y + dirTab[d][0] < pcsSize))
				and ((x + dirTab[d][1] >= 0) and (x + dirTab[d][1] < pcsSize))):
					if (pcs[y + dirTab[d][0]][x + dirTab[d][1]] == '#'):
						i -= 1;
					i += 1;
					pcs[y + dirTab[d][0]][x + dirTab[d][1]] = '#'
					y += dirTab[d][0];
					x += dirTab[d][1];
					break ;

def CreatePcs(nb = 0):
	pcs = [['.' for x in range(pcsSize)] for x in range(pcsSize)]
	GenPcs(pcs, random.randint(0,pcsSize - 1), random.randint(0,pcsSize - 1))
        if nb == 0:
	    PrintPcs(pcs)
        else:
	    PrintPcs(pcs, 1)
if __name__ == '__main__':
	if (len(sys.argv) == 2):
		pcsNbr = int(sys.argv[1])
		if (pcsNbr > 0 and pcsNbr <= 26):
                            file = open('test', 'w')
                            file.close()
                            while pcsNbr:
                                if pcsNbr -1 == 0:
                                    CreatePcs(1)
                                else:
				    CreatePcs()
				pcsNbr -= 1
                            f = open('test').read()
                            print (f)
		else:
			print ("Piece number can't have to be between 1 and 26")
