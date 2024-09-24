#include<stdio.h>

int a(){
    int a;

    printf("enter your value");
    scanf("%d",a);

    if (a % 3 == 0 && a % 5 == 0)
    {
        printf("true");
    }
    
    else
    {
        printf("false");
    }
    
    
}

int main(){

for (int i = 1; i < 15; i++)
{
      a();
}


}