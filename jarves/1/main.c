
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
# define M_PI           3.14159265358979323846  /* pi */

 int main(){
 	FILE*fp1;
 	fp1 = fopen("sound.txt","r");



 	char text[10];  float x[30], y[30] ,l[30][30];
 	int r , c ;
 	fscanf(fp1,"%s", &text);
 	printf("  %s  ",  text);

 	for(c=1; c<=8; ++c){
 		fscanf(fp1,"%f",&x[c]);
 		printf(" %6.2f",x[c]);


	 }

 	for(r=1; r<=24; ++r){
 		fscanf(fp1,"%f", &y[r]);
 		printf(" \n %6.2f", y[r]);
 		for(c=1; c<=8; ++c){
 			fscanf(fp1,"%f", &l[r][c]);
 			printf(" %6.2f",  l[r][c]);
		 }


	 }

//first part*/
	for(c=1; c<=5; ++c){
 		fscanf(fp1,"%f",&x[c]);
 		printf(" \n%6.2f",x[c]);


   }

 /* second part */

 	for(c=1; c<=8; ++c){
 		fscanf(fp1,"%f",&x[c]);
 		printf(" %6.2f",x[c]);


	 }
 int W;
 float d;
 float L[30][30],I;

 	for(r=1; r<=24; ++r){
 		fscanf(fp1,"%f", &y[r]);
 		printf(" \n %6.2f", y[r]);
 		for(c=1; c<=8; ++c){
        W=20;
        d = pow((x[c]-2.5),2)+pow((y[r]-2.5),2;
         I=W/(2*M_PI*d);
         L[r][c]=10*log( I/pow(10,-12));
 			fscanf(fp1,"%f", &L[r][c]);
 			printf(" %6.2f",  L[r][c]);
		 }


	 }



}







