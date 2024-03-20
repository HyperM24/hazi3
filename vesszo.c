#include <stdio.h>

void kiir(int tomb[], int meret){

for (int i = 0; i < meret; i++)
{
    printf("%d",tomb[i]);

    if (i != meret - 1)
    {
        printf(", ");
    }
    else printf("\n");
    
}



}


int main(){

int tomb[5] = {0,1,2,3,4};
int meret = 5;

kiir(tomb,meret);

return 0; 

}