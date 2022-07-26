/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int appliances[100][5];
    
    int i = 0;
    
    while(1){
        int applicanceType;
        printf("Enter the Type of Appliance:\n");
        printf("1 for Fan:\n");
        printf("2 for AC:\n");
        printf("3 for LED Bulb:\n");
        printf("4 for Cooler:\n");
        printf("5 for Pump:\n");
        printf("6 for Television:\n");
        printf("7 for Exit:\n");
        scanf("%d", applianceType);
        if(applianceType == 1){
            printf("Enter wattage:\n");
            printf("Enter 1 for 80 Watts:\n");
            printf("Enter 2 for 100 Watts:\n");
            scanf("%d", appliances[i])
        }
        else if(applianceType == 2){
            printf("Enter wattage:\n");
            printf("Enter 1 for 1500 Watts:\n");
            printf("Enter 1 for 2250 Watts:\n");
            printf("Enter 1 for 3000 Watts:\n");
        }
        else if(applianceType == 3){
            printf("Enter wattage:\n");
            printf("Enter 1 for 8 Watts:\n");
            printf("Enter 1 for 10 Watts:\n");
        }
        else if(applianceType == 4){
            printf("Enter wattage:\n");
            printf("Enter 1 for 180 Watts:\n");
            printf("Enter 2 for 250 Watts:\n");
        }
        else if(applianceType == 5){
            printf("Enter wattage:\n");
            printf("Enter 1 for 373 Watts:\n");
            printf("Enter 2 for 746 Watts:\n");
        }
        else if(applianceType == 6){
            printf("Enter wattage:\n");
            printf("Enter 1 for 200 Watts:\n");
        }
        i++;
    }
    
    return 0;
}



