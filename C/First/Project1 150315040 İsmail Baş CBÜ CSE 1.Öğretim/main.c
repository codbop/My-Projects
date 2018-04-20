#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define SIZE 20

int selection, x;
int function_secondsmallest( int[], size_t );
void function_exit();
void function_selection();
void function_equation();
void function_diamondshape();
void function_reverse_sentence();
void function_second_smallest_element();
void function_different_random_numbers();

int main(){

    function_selection();

    while( selection == selection ){

    switch (selection){

    case 0:
        printf("Are you sure to exit from the program(0 no 1 yes): ");
        scanf("%d", &x);
        if(x == 1)
        exit(0);
        else if(x == 0){
        printf("\n");
        function_selection();
        }
        else{
            while(x != 0 && x!= 1){
            printf("You entered wrong number.Are you sure to exit from the program(0 no 1 yes): ");
            function_exit();
            }
         }
    break;

    case 1:
    function_equation();
    function_selection();
    break;

    case 2:
    function_diamondshape();
    function_selection();
    break;

    case 3:
    printf("Enter a sentence.(Enter 0 after sentence and press enter to end the program.) : ");
    function_reverse_sentence();
    printf("\n");
    function_selection();
    break;

    case 4:
    function_second_smallest_element();
    function_selection();
    break;

    case 5:
    function_different_random_numbers();
    printf("\n\n");
    function_selection();
    break;

    case 6:

    printf( "Ismail Bas - 150315040 - CSE I.Ogretim - CBU University\n" );
    puts("");
    function_selection();
    break;

    default:
    printf( "You selected wrong selection please try again!!!");
    puts( "\n" );
    function_selection();

    }

  }

    return 0;
}

void function_reverse_sentence()
{
    char c;
    scanf("%c", &c);
    if(c != '0')
    {
        function_reverse_sentence();
        printf("%c", c);
    }

}


void function_exit()
{
    scanf("%d", &x);
    if(x == 1)
    exit(0);
    else if(x == 0){
    printf("\n");
    function_selection();
    }
}
void function_selection()
{
    printf("    0. Exit\n");
    printf("    1. Solving the mathematical equation\n");
    printf("    2. Drawing the diamond shape\n");
    printf("    3. Printing keyboard inputs in reverse\n");
    printf("    4. Finding the second smallest element\n");
    printf("    5. Distinct random number generation\n");
    printf("    6. About\n");
    printf("\nEnter your selection : ");
    scanf("%d", &selection);
}


void function_equation()
{
    int N, R, S;
    int i, j, k;
    int a=0;
    float b=1, c=0, sonuc;

    printf("Enter values for N, R and S: ");
    scanf("%d%d%d", &N, &R, &S);

    while(N < 1 || R < 1 || S < 1){
    printf("Invalid value or values.You must enter again: ");
    scanf("%d%d%d", &N, &R, &S);
    }

    for(i = 1; i <= N; i++){
          a = i + a;
    }

    for(k = 1; k <= R; k++){
          b = (3 * k + 5 / (float)pow (k,2)) * b;
    }

    for(j = 1; j <= S; j++){
          c = sqrt(3 * pow(j,3) + j + 2) / (2 * j) + c;
    }

    sonuc = (float)a * (b / c);

    printf("\nFor i=1 to N the sum is %d\n", a);
    printf("For k=1 to R the product is %.2f\n", b);
    printf("For j=1 to S the sum is %.2f\n", c);
    printf("The result of equation is %.2f\n\n", sonuc);

}

void function_diamondshape()
{

    int lines, columns, odd, a, x, b, c = 1, y;

    printf("Enter an odd line: ");
    scanf("%d", &odd);

    while(odd % 2 == 0 || odd <= 0){
    printf("You entered invalid number.Please try again: ");
    scanf("%d", &odd);
    }

    printf("\n");
    a = (odd / 2) + 1;
    x = a;
    y = odd;

    for(lines = 1; lines <= odd; lines++){
        for(columns = 1; columns <= odd; columns++){
                if(columns == a){
                    for(b = 1; b <= c; b++){
                    printf("*");
                    }
                }
                else
                printf(" ");
        }
    printf("\n");

    if(x > 1){
    a--;
    x--;
    }
    else{
    x = 0;
    a++;
    }

    if(y > c)
    c+=2;
    else{
    y = 0;
    c-=2;
    }
  }
  printf("\n");
}

void function_second_smallest_element()
{
    int numbers[ 50 ];
    size_t i;

    printf("Enter a positive number( Press -1 to end program ): ");
    scanf("%d", &numbers[ 0 ]);

    while( numbers[ 0 ] <= -1){
        printf ("You entered wrong number.Please enter number again: ");
        scanf("%d", &numbers[ 0 ]);
    }

    for( i = 1 ; numbers[ i - 1 ] != -1; i++ ){
        if( numbers[ i - 1 ] > -1 ){
        printf("Enter a positive number( Press -1 to end program ): ");
        scanf("%d", &numbers[ i ]);
        while( numbers[ i ] < -1 ){
            printf ("You entered wrong number.Please enter number again: ");
            scanf("%d", &numbers[ i ]);
        }
      }
    }

    printf( "\nThe second smallest number is %d\n\n", function_secondsmallest( numbers, 50 ) );
}

int function_secondsmallest( int a[], size_t size )
{
    size_t i;
    int smallest, secondsmallest;

    smallest = secondsmallest = a[ 0 ];
    for( i = 0; a[ i ] != -1 ; i++){
        if( a[ i ] < smallest ){
            secondsmallest = smallest;
            smallest = a[ i ];
        }
        else if( a[ i ] > smallest && smallest == secondsmallest)
            secondsmallest = a[ i ];
        else if( a[ i ] > smallest && a[ i ] < secondsmallest )
            secondsmallest = a[ i ];
        }
    return secondsmallest;
}

void function_different_random_numbers()
{
    int number[ SIZE ];
    size_t i, a;

    srand( time( NULL ) );

    number[ 0 ] = rand() % 20 + 1;
    for( i = 1; i < SIZE; i++ ){
        a = i;
        number[ i ] = rand() % 20 + 1;
        while( a > 0){
              if( number[ i ] == number[ a - 1] ){
              number[ i ] = rand() % 20 + 1;
              a = i + 1;
              }
        a--;
        }
    }

    for( i = 0; i < SIZE; i++ ){
        printf( "%d ", number[ i ] );
    }
}







