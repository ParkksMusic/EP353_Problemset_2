#include <stdio.h> 
#include <math.h>
int main()
{
    //Asks for a midi value to be inputed and assigns it to double value input
    printf("Input midi value.\n");
    double input;
    scanf("%lf", &input);

    //sets midi to the imputed value and creates a double value freq
    double midi = input;
    double freq;
    
// f = 2^((m-69)/12) * 440
freq = pow(2.0, (((midi-69)/12)))* 440;
printf("Midi value %lf converts to Frequency %lf\n", midi, freq);

return 0;
}