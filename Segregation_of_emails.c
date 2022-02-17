#include<stdio.h>

struct email_segregation
{
    char fromAddr[50];
    char toAddr[50];
    char subject[50];
    char mailBody[50];
};struct email_segregation record[4];

void main()
{
    
    int i;
    
    FILE *e[4];
    
    e[0] = fopen("e1.txt","r");
    e[1] = fopen("e2.txt","r");
    e[2] = fopen("e3.txt","r");
    e[3] = fopen("e4.txt","r");
    e[4] = fopen("e5.txt","r");
    for(i=0;i<5;i++){
    fscanf(e[i],"%s%s ",record[i].fromAddr,record[i].toAddr);
    fgets(record[i].subject, 50, e[i]);
    fgets(record[i].mailBody,50,e[i]);  
    }
    for(int j=0;j<5;j++){
    printf("Email %d: %s\n%s\n%s\n%s\n",j+1,record[j].fromAddr,record[j].toAddr,record[j].subject,record[j].mailBody);
    }
    fclose(e[0]);
    fclose(e[1]);
    fclose(e[2]);
    fclose(e[3]);
    fclose(e[4]);
}
