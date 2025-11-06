/*
Name: James maina 
Reg no:CT101/G/26470/25
Date:6/11/2025
Description:A c program to calculate the gross pay,taxes and net pay
*/
#include <stdio.h>

void calculate_pay(float hours_worked, float hourly_wage, float *gross_pay, float *taxes, float *net_pay) {
    // Calculate gross pay with overtime
    if (hours_worked <= 40) {
        *gross_pay = hours_worked * hourly_wage;
    } else {
        *gross_pay = (40 * hourly_wage) + ((hours_worked - 40) * hourly_wage * 1.5);
    }

    // Calculate taxes
    if (*gross_pay <= 600) {
        *taxes = *gross_pay * 0.15;
    } else {
        *taxes = (600 * 0.15) + ((*gross_pay - 600) * 0.20);
    }

    // Calculate net pay
    *net_pay = *gross_pay - *taxes;
}

int main() {
    float hours_worked, hourly_wage, gross_pay, taxes, net_pay;

    printf("Enter hours worked in a week: ");
    scanf("%f", &hours_worked);
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);
    
    calculate_pay(hours_worked, hourly_wage, &gross_pay, &taxes, &net_pay);
    
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}