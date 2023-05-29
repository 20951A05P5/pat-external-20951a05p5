
/*
#include <stdio.h>
int main() {
	int var=56;
	if ((var&1)==0) printf("EVEN");
	else if((var&1)==1) printf("ODD");
	
}




#include <stdio.h>
int main() {
      int age=5, aadhar = 1, someOtherID=1;
      	if(age>=18 && (aadhar == 1|| someOtherID==1)) printf("ALLOWED");
      	else printf("NOT ALLOWED");
      }
      

 
 
 #include <stdio.h>
 int main() {
 	char grade='A';
 	if(grade=='A') printf("CAR");
	 else if (grade=='B')printf("BIKE");
	 else if (grade=='c') printf ("RTC");
	  }


#include <stdio.h>
 int main() {
 	int a=3, b=2,c=7;
 	
 	if (a>=b && a>=c) printf("A");
 	else if (b>=c) printf("B");
 	else printf("C");
 	
 	
}


#include <stdio.h>
int main(){
	int a=3,b=2,c=7;
	printf(a>=b?(a>=c?"A":"C"):(b>=c?"B":"C"));
}


//if marks are btw 700-800,A
//if marks are btw 600-699,B
//if marks are btw 400-599,C
//if marks are btw 0-399,F
/
#include <stdio.h>
int main(){
int marks=12;
switch(marks){
 	case 700...800:printf("A");break;
 	case 600...699:printf("B");break;
 	case 400...599:printf("C");break;
 	default:printf("F")
 }
}




//22-11-22
//use input
#include <stdio.h>

int main(){
	int a;
	printf("%d",a);
	scanf("%d",a);
	return 0;
}


#include <stdio.h>
int main(){
	double a;
	scanf("% lf", &a);
	printf("%lf",a);
		
	return 0;
}

#include <stdio.h>
int main(){
	//int a;
	//float b;
	//double c;
	char d;
	//scanf("%d",&a);
	//scanf("%f",&b);
	//scanf("%lf",&c);
	scanf("%c",&d);
	
	//printf("%d",a);
	//printf("%f",b);
	//printf("%lf",c);
	printf("%c",d);
	
	return 0;
}

// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array

#include <stdio.h>

int main(){

  int arr[]={1,2,3,4,5};
  int i;
  for(i=0;i<=4;i++){
  printf ("%d\n",arr[i]);
  	
  }
  return 0;
}


#include <stdio.h>
int main(){
	int arr[i][j];
	int i,j;
	
	for(i=0,i<=2,i++);{
		for(j=0,j<=2,j++);
		printf(;
		scanf("%d",&arr[i][j]);
	}
	

   for(i=0; i<=2; i++) ;{
      for(j=0;j<=2;j++); {
         printf("%d ", arr[i][j]);
         
         }
      }
   }
   return 0;
}



//to print even n odd-incomplete

//to print squares of declared array

#include <stdio.h>
int main(){

    int arr[5] = { 1, 2, 3, 4, 5 };
    int i = 0;
    
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i] * arr[i]);

    

    return 0;
}

//strings
#include<stdio.h>  
#include <string.h>    
int main(){    
char ch[]={'s','w','a','t','h','i'};    
   printf(length:"%d",strlen(ch));    
 return 0;    
}

#include<stdio.h>  
#include <string.h>    
int main(){    
  char str[20];    
  printf("Enter string: ");    
  gets(str);  
  printf("String:%s",str);    
  printf("\nReverse String: %s",strrev(str));    
 return 0;    
}   

//prime no
#include <stdio.h> 

main() {
  int n, i, c = 0;
  printf("Enter number:");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }

  if (c == 2) {
        printf("n is a Prime number");
  }
  else {
         printf("n is not a Prime number");
  }
  return 0;    
}

//prime if n=101
//for i=2;i<n;i++  98 iterations
//for i=2;i<(n/2);i++ 49 iterations
//for i=2;i<=sqrt(n),i++ 8 iteraions 

*/

//find all prime nos between given range(1,100)
#include <stdio.h>
int main(){
	int a=100;
	for(i=2;i<(n/2);i++){
		printf("%d",a)
	}
}
