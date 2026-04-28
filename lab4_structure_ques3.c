// question no. 3 display detail of the student using fuction and use typedef program also tell us the usage of it 

#include <stdio.h>

typedef struct {
    int roll ; 
    char name [50];
    float marks ;
} student ;

void display (student s ) {
    printf("student details : ");
    printf("student roll_no" , s.roll);
    printf("student name" , s.name);
    printf("student marks" , s.marks);
}
int main() {
    student s1 ; 
    int i ; 
printf("enter roll_no - ") ;
scanf("%d" , &s1.roll);

printf("enter the name : ");
for(i=0 ; i <50 ; i++ ){
scanf("%s"  , s1.name[i]) ;}

printf("enter marks : ");
scanf("%f" , s1.marks );

display(s1)

return 0;


}


