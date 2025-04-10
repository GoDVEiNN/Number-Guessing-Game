#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_no;
    do
    {
        printf("Guess The Number Between 1 to 100: ");
        scanf("%d", &guessed_no);

        if (guessed_no > randomNumber)
        {
           printf("Lower Number Please! \n");
        }
        else if (guessed_no < randomNumber) {
            printf("Higher Number Please! \n ");
        }
        else{
            printf("\nCongrats You Guess Correct Number %d \n", randomNumber);
        }
        no_of_guesses++;
    } while (guessed_no != randomNumber);
    

    printf("You guessed the number in %d chances\n", no_of_guesses);

    return 0;
}
