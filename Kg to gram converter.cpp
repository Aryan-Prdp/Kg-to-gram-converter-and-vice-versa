/* To convert kg to g and g to kg */
#include<stdio.h>
int main()
{
    float kg,g;
    char a;
    printf("Please select wether you want to convert\nA) Gram to kg or B) kg to gram :) \n\n");
    scanf("%c",&a);
    switch(a)
    {
    case 'A':
        printf("Plese choose the value of grams you want to connvert to kilogarms\n\n");
        scanf("%f",&g);
        kg=g/1000;
        printf("The conversion %f Gram to kg would be %f kg\n",g,kg);
        break;
    case 'a':
        printf("Plese choose the value of grams you want to connvert to kilogram\n\n");
        scanf("%f",&g);
        kg=g/1000;
        printf("The conversion %f Gram to kg would be %f kg\n",g,kg);
        break;
    case 'B':
        printf("Plese choose the value of kilograms you want to connvert to garms\n\n");
        scanf("%f",&kg);
        g=1000*kg;
        printf("The conversion %f kg to gram would be %f g\n",kg,g);
        break;
    case 'b':
        printf("Plese choose the value of kilograms you want to connvert to grams\n\n");
        scanf("%f",&kg);
        g=1000*kg;
        printf("The conversion %f kg to gram would be %f g\n",kg,g);
        break;
    default:
        printf("\nOption a allel b choose cehyyada  mwthe :)\n");
    }
    return 0;
}
