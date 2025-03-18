#include <stdio.h>
#include<string.h>
int main()
{
    // marks of 5 subject and percentage
    int m1, m2, m3, m4, m5, percent;
    char grade[7] = "A+";
    char gra[7] = "A";
    char gr[7] = "B";
    char g[7] = "c";   
    printf("Enter the marks of English \n");
    scanf("%d", &m1);
    printf("Enter the marks of Hindi \n");
    scanf("%d", &m2);
    printf("Enter the marks of Maths \n");
    scanf("%d", &m3);
    printf("Enter the marks of science \n");
    scanf("%d", &m4);
    printf("Enter the marks of S.st \n");
    scanf("%d", &m5);
    percent = (m1 + m2 + m3 + m4 + m5) / 5;
    if (m1 < 34 || m2 < 34 || m3 < 34 || m4 < 34 || m5 < 34)
    {
        printf("Failed because your marks is less than 35 in one and more subject. \n");
    }
    else if(percent > 49){
        printf("PASSed and your percentage is %d%%\n", percent);
    }
    else{
        printf("FAILED Because your percentage is less than 50. And Your Percentage is %d%%\n", percent);
    }
    if(percent > 90){
    printf("And Your Grade is (%s)", grade);
    }
    else if(percent > 80){
    printf("And Your Grade is (%s)", gra);
    }
    else if(percent > 60){
    printf("And Your Grade is (%s)", gr);
    }
    else if(percent > 35){
    printf("And Your Grade is (%s)", g);
    }
    else {
        printf("And Your Grade is (E)");
    }
    return 0;
}