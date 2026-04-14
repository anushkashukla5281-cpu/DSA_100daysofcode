#include<stdio.h>
int main()
{ 
    //write a program to input two numbers and display their sum
float a,b,sum;
 printf("please enter the first number - ");
 scanf("%f" , &a);
 printf("please enter the second number - ");
 scanf("%f" , &b);
 sum = a+b ;
 printf("the sum is %f" , sum);


 // write a program to input two numbers and display their sum diff and quoitent  
 /*float a,b,sum,diff,quotient,product;
 printf("please enter the fisrt number - ");
 scanf("%f",&a);
 printf("please enter the second number - ");
 scanf("%f",&b);
 sum = a+b;
 diff = a-b;
 quotient = a/b;
 product = a*b
 printf("the sum is - %f",sum);
 printf("the diff is - %f" , diff);
 printf("the quotient is -%f" , quotient);
 printf("the product is - %f" , product)*/
 


 //write a program to calculate the area and perimeter of a rectangle given its length and breath 
/*float length,breath,area,circumference ; 
printf("enter the lenghth - ");
scanf("%f",&length);
printf("enter the breath - ");
scanf("%f",&breath);
area = length*breath;
circumference = 2(l+b);
printf("the circumference of the rectangle is - %f",circumference);
printf("the area of the rectangle is - %f " , area);*/


 //write a program to calculate the area and circumference of a circle given its radius
 
/* float radius , pi=3.14 , area ,circumference ;
 printf("please enter the radius- ");
 scanf("%f",&radius);
 area = pi*radius*radius;
 circumference = 2*pi*radius ; 
 printf("the area and of the circle is - %f ,",area);
 printf("the circumference is - %f", circumference);*/



 //converting celcius into fehrenhite 

/*int celcius , fehrenhite ;
 printf("enter the temp in celcius - ");
 scanf("%d" , &celcius);
 fehrenhite = (celcius*9/5)+32;
 printf("the temp in fehrenhite is -%d ", fehrenhite );*/


 //write a program to swap two numbers using a third variable 

/*int a,b,temp;
 printf("enter two numbers : ");
 scanf("%d %d", &a , &b );
 printf("before swapping - a= %d , b = %d\n" , a,b);
 temp=a;
 a=b;
 b=temp;
 printf("after swapping - a = %d , b=%d\n" , a,b);*/

 
 
 //write a program to swap two numbers without using third variable 
/*int a,b;
 printf("enter two numbers - ");
 scanf("%d %d ,&a , &b");
 printf("before swapping : a = %d , b = %d\n" ,a, b);

 a = a+b ; 
 b = a-b ;
 a = a-b ;
 printf("after swapping : a = %d , b = %d\n" , a, b);*/



 // write a program to display and calculate the  sum of first n natural numbers 
/*int n , sum = 0 ;
printf("enter a positive number n : ");
scanf("%d" , &n);

for(int i=1 ; i<=n ; i++){
sum+=i;
}
printf("sum of first %d natural numbers = %d\n" , n,sum);*/





//write a program to calculate SI 
/*float SI , r , t , p ;
printf("enter the rate - ");
scanf("%f" , &r);
printf(" enter the pricipal amt - ");
scanf("%f" , &p );
printf("enter the time - ");
scanf("%f",&t);
SI = (p*r*t)/100;
printf("the simple interest is - %f" , SI);*/



// write a program to input time in seconds and convert it to hours:minutes:seconds format .
/*int sec , hours ,minutes ,seconds , remainingseconds ;
printf("enter time in seconds - ");
scanf("%d" , &seconds );
hours = seconds / 3600;
seconds = seconds % 3600;
minutes = seconds / 60 ;
remainingseconds = seconds % 60 ;

printf("time : %d hours : %d minutes - %d seconds\n", hours , minutes , remainingseconds);
return 0;

// 2nd method 
/*int hours,minute,seconds,time;
printf("enter time in seconds -");
scanf("%d" , &time );
hours= time/3600;
minute = (time % 3600 ) / 60 ;
seconds = time % 60; 
printf("time is %d hours , %d minutes and %d seconds\n" , hours , minute , seconds );*/




// write program to check if a number is odd or even using if else 
/*int num;
printf("enter an integer - ");
scanf("%d" , &num);

if (num % 2 == 0 ){printf("%d is even . \n", num );
}
else { printf("%d is odd. \n" , num ) ; 
}*/

//write a program to input an integer and check whether it is positive , negative or zero using nested if-else 



//write a program to input a year and check whether it is a leap year or not using conditional statements . 
/*int year ; 
printf("enter a year : ");
scanf("%d" , &year );
 if (year % 400 ==0) {
printf("%d is a leap year \n ",year );

 }
else if (year % 100 == 0 ){
printf("%d is not a leap yeaar \n" , year );

}
else if ( year % 4 == 0 ){
printf("%d is a leap year \n", year);

}
else {
    printf("%d is not a leap year . \n" , year);
}*/



//write a program to input a chracter and check whether it is a vowel or consonant using if-else 
/*char  name ;
printf("entera character");
scanf("%c", &name);
if(name=='a'|| name =='A'||
    name=='e'||name=='E'||
    name=='i'||name='I'||
    name=='o'||name=='O'||
    name=='u'||name=='U'|| )
{
    printf("vowel\n");
}
else {
    printf("consonant\n");
}*/


}