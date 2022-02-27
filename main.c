//#include <stdio.h>
//
//int main (void)
//{
//    float Fah, Cel, Temp;
//    char scale;
//    printf("Press F to convert to fahrenheit\n");
//    printf("Press C to convert in celcius\n");
//    scanf("%c", &scale);
//    getchar();
//
//    if (scale == 'C')
//    {
//        printf("Enter the temp\n");
//
//        if (scanf("%f", &Fah) != 1)
//        {
//            fputs("Wrong Input!", stderr);
//            return 1;
//        }
//        getchar();                  // For catching newline character.
//
//        Temp = (Fah-32) / 1.8;
//    }
//
//    else if (scale == 'F')
//    {
//        printf("Enter the temp\n");
//
//        if (scanf("%f", &Cel) != 1)
//        {
//            fputs("Wrong Input!", stderr);
//            return 1;
//        }
//        getchar();                   // For catching newline character.
//
//        Temp = (Cel * 1.8) + 32;
//    }
//
//    else
//    {
//        // Case for different input than 'F' and 'C'.
//        // Probably Error routine.
//        printf("Wrong input!\n");
//    }
//
//    printf("The temperature  is %f\n", Temp);
//    getchar();
//
//    return 0;
//}