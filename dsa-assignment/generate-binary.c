#include<stdio.h>

void deciToBi(int num){    

    if(num>=1){
        int k = num/2;
        deciToBi(k);
    }
    printf("%d", num%2);
}

int main(){
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    for (int i = 1; i < num+1; i++)
    {
        deciToBi(i);
        printf(" ");
    }
    printf("\n");
    return 0;
}