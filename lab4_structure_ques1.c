#include <stdio.h>
int main () {

struct student {
    int SAPID ;
    char name[50] ;
    float sgpa ;
    char subjects[5][20] ;


} ;
struct student s1 ;

int i ; 
printf("enter sapid - ") ;
scanf("%d" , &s1.SAPID );

printf("enter the name : ");
for(i=0 ; i <50 ; i++ ){
scanf("%s"  , s1.name[i]) ;}

printf("enter sgpa of your current semester : ");
scanf("%f" , &s1.sgpa) ;


printf("Enter 5 subjects : \n");
for(i=0 ; i <5 ; i++){
    scanf("%s"  , s1.subjects[i]);
}



 }





