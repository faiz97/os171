/*
* Name: Maula Faiz Adli
* NPM: 1506722853
* Class: A
* Comment: What is this?
*/
#define LOOP 4//define me!
#include <stdio.h>
void main() {
 int input = 5; //define me!
 int ii,jj;
 int THE_PRODUCT = 0;
 // TO DO implement me!!
 for(ii=1;ii <= input;ii++){
	for(jj=1;jj <= LOOP;jj++){
	 THE_PRODUCT++;
	}
 }
 printf("%d times %d equals %d\n",input,LOOP,THE_PRODUCT);
}
