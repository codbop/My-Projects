#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salary,rate;
    int hour;


    while(hour > 0){
    printf("Enter # of hours worked (-1 to end): ");

    scanf("%d", &hour);

    while(hour < 1){
        printf("\n\nSaati yanlis girdiniz.Lütfen tekrar deneyin: ");
    scanf("%d", &hour);

    }

    printf("Enter hourly rate of worker: ");
    scanf("%f", &rate);

    if(hour <= 40){
    salary = hour * rate;
        }
        else{
        salary =  (hour - 40) * rate * 1.5 + ( 40 * rate );
        }

    printf("Salary is : %.2f\n\n", salary);


    }




        return 0;

}
