#include<stdio.h>
#include<stdlib.h>
#include<math.h>
# define M_PI           3.14159265358979323846  /* pi */

 int main(){
 	FILE*fp1;
 	fp1 = fopen("sound.txt","r");
 	fp1 = fopen ("sound","w");



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
	 
 
 float d;
 float L[30][30],I;

 	for(r=1; r<=24; ++r){
 		fscanf(fp1,"%f", &y[r]);
 		printf(" \n %6.2f", y[r]);
 		for(c=1; c<=8; ++c){
        d = sqrt(pow((x[c]-2.5),2)+pow((y[r]-2.5),2));
         I=20/(2*M_PI*pow(d,2));
         L[r][c]=10*log10( I/pow(10,-12));
 			fscanf(fp1,"%f", &L[r][c]);
 			printf(" %6.2f",  L[r][c]);
		 }


	 }
    
    // third part //
    	printf("\n\n");
 	for(c=1; c<=8; ++c){
 		fscanf(fp1,"%f",&x[c]);
 	
 		printf(" %7.2f",x[c]);


	 }
	 // fourth part//
float M[30][30];
 	for(r=1; r<=24; ++r){
 		fscanf(fp1,"%f", &y[r]);
 		printf(" \n %6.2f", y[r]);
 		for(c=1; c<=8; ++c){
 			
 			M[r][c]=l[r][c]-L[r][c];
 			fscanf(fp1,"%f", &M[r][c]);
 			printf(" %6.2f",  M[r][c]);
		 }


	 }
    // fifth part//
    
        
printf("\n\nthe minimum number of elements in the  array\n");
   


	 
	float  minumum = M[0][0], minimum_x,minimum_y,minimum;
	 	for(r=1; r<=24; ++r){
 		fscanf(fp1,"%f", &y[r]);
 		for(c=1; c<=8; ++c){
 				fscanf(fp1,"%f",&x[c]);
 			if (M[r][c] < minimum){
           minimum = M[r][c];
		   minimum_x = x[c];
           
           minimum_y = y[r];
           
    
		 }


	 }

	 
	 



}
	 printf("%f %f and it's value is %f.\n", minimum, minimum_x, minimum_y);

// sixth part //
printf("\n\nthe maximum number of elements in the  array\n");



	 
	float  max = M[0][0], max_x,max_y;
	 	for(r=1; r<=24; ++r){
 		fscanf(fp1,"%f", &y[r]);
 		for(c=1; c<=8; ++c){
 				fscanf(fp1,"%f",&x[c]);
 			if (M[r][c] > max){
           max= M[r][c];
		   max_x = x[c];
           
           max_y = y[r];
           
    
		 }


	 }

}
	 printf("%f %f and it's value is %f.\n", max, max_x, max_y);


// seventh part //

  float Mean, sum=0,sd;

	for(r=1; r<=24; ++r){
 		
 		for(c=1; c<=8; ++c){
 			
 			sum = sum + M[r][c];
 			  Mean = sum/(8*24);
 			
		 }
		
	 }
 			  sd=sqrt(pow(M[r][c]-(sum/(8*24)),2)/((8*24)-1));

  printf("Mean               = %.2f\n", Mean);
  printf("\n%f",sd);
fclose(fp1);
}








