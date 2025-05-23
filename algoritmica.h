#ifndef MASTER_H
#define MASTER_H
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
/* STRUCTURES */
#define daca if 																				/* if */
#define altfel }else{ 																			/* else */
#define cat_timp while 																			/*while*/
#define repeta do{ 																				/* do ... while */
#define pentru(i, nr_initial, nr_final, pas) for(int i = (nr_initial); ((pas) > 0) ? (i <= (nr_final)) : (i >= (nr_final)); i += (pas)) 		/* for */
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
#define cuvant string																			/* string */
/* TRUE FALSE*/
#define adevarat true 																			/* true */
#define fals false 																				/* false */
/*START - STOP*/
#define Inceput int main(){   																	/* Start */
#define Final return 0;																			/* Stop --- kinda deprecated*/
#define Sfarsit return 0;}																		/* End */
#define de_la_inceput return main() 															/* from_the_beginning */

/* OPERATORS */
#define egal ==																					/* equals - FOR CONDITIONS */
#define dif !=																					/* different - FOR CONDITIONS */
#define si and																					/* and */
#define sau or																					/* or */
#define rest %																					/* modulo */
//#define x *																					/* multiplication */
#define radical sqrt
#define devine =
/* FISIERE */
#define fisier fstream
/* work in progress */


#endif

