// Datei: 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*Aufgabe 8 - Schreiben sie ein Programm,
 das Sie  dezimalzahlen eingeben und bestimmen, 
 wie diese Zahlen dargestellt werden sollen. 
 Sie haben die Wahl zwischen den Zahlen systemen 
 Oktal und Hexadezimal, oder Sie lassen 
 ASCII- Zeichen zu den dezimalen Codenummern 
 0 bis 255 darstellen. Mit exit code(bspl0019)*/
int main() {
	int  zahlen;  
	char eingabe;
	
	printf("\nWaehlen Sie Hexadezimal(H), Oktal(O), ASCII(A)\n");
	eingabe = getchar();
	
	if(toupper(eingabe) != 'H' && toupper(eingabe)!= 'O'&& toupper(eingabe) != 'A'){
		printf("\nUngueltige Eingabe\n");
		exit(-1);
		
	}
	printf("\nBitte Zahlen eingeben : ");
	scanf("%i", &zahlen);
	switch(toupper(eingabe)){
		case 'H':
			printf("\nHexadezimal : %x", zahlen);
			break ;
		case 'O':
			printf("\nOktal : %o", zahlen);
			break ;
		case 65:
			printf("\nASCII : %c", zahlen);
			break ;
	}
	
	
	
	
	
	
	
	return 0;	
}
