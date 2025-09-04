//WAP TO PRINT FIZZ BUZZ
#include<stdio.h>
int main(){
    int i = 1;
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);

    while(i<=n){
        if(i% 5 == 0 && i% 3 ==0){
            printf("FIZZBUZZ\n");
        }
        else if(i % 3 == 0){
            printf("FIZZ\n");
        }
        else if (i % 5== 0){
            printf("BUZZ\n");
        }
        else{
            printf("%d\n",i);
        }
        i++;
    }
}
