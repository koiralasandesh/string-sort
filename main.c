#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    char text[SIZE][SIZE];
    char temp[SIZE];
    int i,j,min;
    printf("Enter the 5 strings one by one delimited by new line.");
    for (i=0;i<SIZE;i++){
        scanf("%s",text[i]);
    }
    for (i=0;i<SIZE;i++){
            min=i;
            for(j=i;j<SIZE;j++){
                if(strcmp(text[min],text[j])>0){
                    min=j;
                }
                strcpy(temp,text[i]);
                strcpy(text[i],text[min]);
                strcpy(text[min],temp);

            }
            printf("Sorted Strings:\n");
            for (i=0;i<SIZE;i++){
                printf("%s\n",text[i]);
            }

    }
}
