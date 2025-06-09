#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n = 10;
    char *Text_Data = NULL;
    // Allocating the memory in the heap using malloc
    Text_Data=(char*)malloc(n*sizeof(char));
    
    if (Text_Data != NULL)
    {
        printf("Enter the text: \n");
        scanf(" ");

        //gets(Text_Data);
        // Use fgets instead of gets (gets is unsafe and deprecated)
        
        fgets(Text_Data, n, stdin);

        printf("Inputted text is: %s\n", Text_Data); // We dont need here &Text_Data
        //Because it is character pointer
    }
    //Free the memory which we allocated here
    free(Text_Data);
    Text_Data = NULL;
    return 0;

}