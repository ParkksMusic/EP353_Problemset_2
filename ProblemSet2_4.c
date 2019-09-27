#include <stdio.h>
int main ()
{
    //Creates two floating values
    float BPM, Milliseconds;

    //Asks for a BPM to be entered
    printf("What is the BPM?\n");
    scanf("%f",&BPM);


    //Converts BPM to Milliseconds and prints it
    Milliseconds = 60000 / BPM;
    printf("%f BPM converts to %f Milliseconds\n",BPM, Milliseconds);
   
    return 0;
}