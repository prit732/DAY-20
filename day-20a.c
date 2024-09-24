#include <stdio.h>

int cube(int a){
    
    printf("culb");
    return a * a * a;
  
}

int main() {
    int n;
    
    printf("Enter your  value : ");
    scanf("%d", &n);


    int b = cube(n);

    
    printf("Cube : %d\n",b);

    
}
