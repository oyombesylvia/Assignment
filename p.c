#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int user_number;
    int computer_number;

    srand(time(NULL));

    computer_number = (rand() % 20) + 1 ;

    printf("Enter A number Between 1 and 20");
    scanf("%d",&user_number);

    

    if (user_number > computer_number)
    {
        /* code */
        printf("Too High");
    }
    else if (user_number < computer_number)
    {
        /* code */
        printf("Too Low");
    }
    else {
        printf("Congratulations You Giot This");
    }
    
        
    

    return 0;
    
    

    

}