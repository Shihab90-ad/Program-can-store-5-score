
//Interoduction of programming
//assignment 02
/*SHIHAB SADEKATUL-1821581
 ISLAM SANJIDA-1821996*/
//Date:23-12-2019

#include<stdio.h>
void Edit(int,int[]);//function edit
void GetScore(int,int[]);//function GetScore
int main ()
{
    int score[5];
    int mark,x;
    printf("Enter a bonus mark : ");
    scanf("%d",&mark);
    printf("Enter 5 quiz scores :  ");
    for(x=0;x<5;x++)
    {
        scanf("%d",&score[x]);
        
        
    }
    Edit(mark,score);
    return 0;
    
    
}
void Edit(int a,int b[])
{
    GetScore(a,b);
    return;
}
void GetScore(int mar,int h[])
{
    int m;
    int z;
    for(m=0;m<5;m++)
    {
        h[m]+=mar;
        if(h[m]>100)
            h[m]=100;
        
    }
    printf("The new Score array is :  ");
    for(z=0;z<5;z++)
    {
        printf("%d ",h[z]);
        
    }
    printf("\n");
    return;//return nothing that's why return is NULL
}
//program end
