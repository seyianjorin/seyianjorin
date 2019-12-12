/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   maxGPA.c
 * Author: oluwaseyiayo-anjorin
 * This Program is to be used to calculate the most possible GPA and individual can receive
 *
 * Created on September 14, 2018, 8:41 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 *
 */
int main(int argc, char** argv)
{
    float gpa, max_GPA;
    int credit_hours, credit_hours_diff;
    printf("********************************************************************\n\n");
    printf(" Please enter your current GPA with at most 3 decimal places.\n for example, a GPA of 2.3333333, enter 2.33\n This GPA should fall between 0 and 4.0 -->: ");
    scanf("%f", &gpa);
    printf("********************************************************************\n\n");
    
    printf("Please, enter the number of credit hours that this GPA was based on.\n This should be a positive integer\n For example, for 12 credit hours, enter 12 -->: ");
    scanf("%d", &credit_hours);
    printf("********************************************************************\n\n");
    
    credit_hours_diff = (120-credit_hours);
    
    max_GPA = ((credit_hours_diff * 4)+ (gpa*credit_hours))/120;
    printf("With your current gpa of %.3f from credit hours of %d \nyour max gpa is approximately : %.3f\n\n",gpa,credit_hours, max_GPA);
    
    if ((3.5<=max_GPA)&&(max_GPA<=3.7))
    {
        printf("\nyou Qualify for \n the cum laude honor");
    }
    
    else if ((3.7<max_GPA)&&(max_GPA<=3.9))
        
    {
        printf("\nYou Qualify for \n the cum laude honor \n the magnum laude honor");
    }
    
    else if ((3.9<max_GPA)&&(max_GPA<=4.0))
        
    {
        printf("\nYou Qualify for \n the cum laude honor \n the magnum laude honor \n the summa magnum laude honor");
    }
    
    
    return (EXIT_SUCCESS);
}





