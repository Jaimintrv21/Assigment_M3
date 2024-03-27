/*
project 10
10.find the area of a rectangular prism formula : A=2(wl+hl+hw)
*/
 #include<stdio.h>
 main()
 {
 		float A,w,l,h;
 	printf("enter the value of w l and h:");
 	scanf("%f %f %f ",&w,&l,&h);
 	
	A = 2 * l*w+ 2 * l*h+ 2 * w*h;
	 printf("enter the value of A and h is %.2f\n :",A); 
 	
 }
