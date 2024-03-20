#include <stdio.h>

int rendezett(int tomb[], int meret){

if (meret == 0)
{
    printf("A tomb merete nem lehet nulla!");
    return 0;
}

for (int i = 1; i < meret; i++)
{
    if (tomb[i+1] < tomb[i])
    {
        return 1;
    }
    return 0;
}


}



int main(){

int tomb[10] = {1,2,3,4,5,6,7,9,8,10};
int meret = 10;

if (rendezett(tomb, meret) == 0) {
        printf("A tomb rendezett.\n");
    } else {
        printf("A tomb nem rendezett.\n");
    }
    
    return 0;

}