#ifndef MASTER_H
#define MASTER_H
#include <iostream>
#include <fstream>
using namespace std;
/* STRUCTURES */
#define daca if 																				/* if */
#define altfel }else{ 																			/* else */
#define cat_timp while 																			/*while*/
#define repeta do{ 																				/* do ... while */
#define pentru(i, a, b, c) for(int i = (a); ((c) > 0) ? (i <= (b)) : (i >= (b)); i += (c)) 		/* for */
#define executa { 																				/* execute/run */
#define atunci { 																				/* then */
#define sfarsit_daca } 																			/* end_if */
#define sfarsit_cat_timp } 																		/* end_while */
#define sfarsit_pentru } 																		/* end_for */
/* READ WRITE */
#define citeste cin>>  																			/* read */
#define scrie cout<<   																			/* write */
#define rand_nou '\n'  																			/* new_line */
/* DATA TYPES */
#define nr_natural unsigned int  																/* natural - i.e. positivie_integer */
#define nr_intreg int  																			/* integer */
#define nr_rational float 																		/* rational_number/rational */
#define logic bool  																			/* boolean */
/* TRUE FALSE*/
#define adevarat true 																			/* true */
#define fals false 																				/* false */
/*START - STOP*/
#define Inceput int main(){   																	/* Start */
#define Final return 0;																			/* Stop --- kinda deprecated*/
#define Sfarsit return 0;}																		/* End */
#define de_la_inceput return main() 															/* from_the_beginning */

/* FISIERE */
#define fisier fstream
/* work in progress */

#endif

