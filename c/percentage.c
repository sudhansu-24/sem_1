#include<stdio.h>
int main()
{
    float m1,m2,m3,m4,m5;
    m1 = 31; // marks in subject 1 (Maths)
    m2 = 37; // marks in subject 2 (Science)
    m3 = 28; // marks in subject 3 (Social Scicence)
    m4 = 36; // marks in subject 4 (English) 
    m5 = 32; // marks in subject 5
    float percent = (m1+m2+m3+m4+m5)/2;
    printf("Your Overall Percentage is: %f",percent);
    return 0;
}