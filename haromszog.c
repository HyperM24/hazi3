#include <stdio.h>

int haromszog(int a, int b, int c){

if (a <= 0 || b <= 0 || c <= 0) {
        return 0;
    }
    else if (a + b <= c || a + c <= b || b + c <= a) {
        return 0;
    }
    else {
        return 1;
    }



}


int main(){

int a, b, c;

printf("Adja meg a haromszog A oldalat: ");
scanf("%d",&a);

printf("Adja meg a haromszog B oldalat: ");
scanf("%d",&b);

printf("Adja meg a haromszog C oldalat: ");
scanf("%d",&c);

if (haromszog(a, b, c)) {
        printf("A haromszog megszerkesztheto!\n");

} 
else {
        printf("A haromszog nem szerkesztheto meg!\n");
    }
    
    return 0;


}