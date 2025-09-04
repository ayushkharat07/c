//Wap to print the sum of the digit of n 
#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    int i = n;
    int sum= 0;
    int last;

    while(i != 0){
        last = i % 10;
        sum = sum + last;
        i = i / 10;
    }
    printf("%d",sum);
}
