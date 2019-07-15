#include<stdio.h>
#include<stdlib.h>
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


	for(c=1; c<=5; ++c){
 		fscanf(fp1,"%f",&x[c]);
 		printf(" \n%6.2f",x[c]);


   }
   


 }
