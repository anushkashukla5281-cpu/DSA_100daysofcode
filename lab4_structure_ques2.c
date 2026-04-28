#include <stdio.h>
#include <string.h>

//max salary wala line is left complete it 

int main (){

struct employee{
    char name[50];
    float salary ;
} ;
int i ;
float max_salary  = 0 ;
struct employee e[5] ; 

for(i=0 ; i < 5 ; i++ ) {
    printf("enter employee name : ");
scanf("%s" , e[i].name);

printf("enter salary of the employees : ");
scanf("%f" , &e[i].salary);
}

for (i=1 ; i<5 ; i++) {
    if(e[i].salary < max_salary){
        i=max_salary ;
    }

}
































}