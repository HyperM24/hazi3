#include <stdio.h>

void abszolut(int tomb[], int meret){

    for (int i = 0; i < meret; i++)
    {
        if (tomb[i] < 0)
        {
            tomb[i] = tomb[i] * - 1;
        }
        
    }
    
}

int main(){

int tomb[5] = {1,-2,3,-4,5};
int meret = 5;

printf("Tomb eredeti allapota: \n");
for (int i = 0; i < meret; i++)
{
    printf("%d ", tomb[i]);
}
printf("\n");

abszolut(tomb,meret);
printf("Tomb az abszolutertekekkel: \n");

for (int i = 0; i < meret; i++)
{
    printf("%d ",tomb[i]);
}

printf("\n");

}