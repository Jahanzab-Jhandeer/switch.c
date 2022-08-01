#include<stdio.h>
// I am using ternery operator
int main() {

    int day; // 1-MONDAY; 2-TUESDAY; 3-WEDNESDAY; 4-THURSDAY; 5-FRIDAY; 6-SATURDAY; 7-SUNDAY;
    printf("entr your day (1-7) :");
    scanf("%d" , day);

    switch (day) {
        case 1 : printf("MONDAY\n"); 
                    break;
        case 2 : printf("TUESDAY\n"); 
                    break;
        case 3 : printf("WEDNESDAY\n"); 
                    break;
        case 4 : printf("THURSDAY\n"); 
                    break;
        case 5 : printf("FRIDAY\n"); 
                    break;
        case 6 : printf("SATURDAY\n"); 
                    break;
        case 7 : printf("SUNDAY\n"); 
                    break;
        default : printf("not a valid day! \n");
    }
return 0;
}