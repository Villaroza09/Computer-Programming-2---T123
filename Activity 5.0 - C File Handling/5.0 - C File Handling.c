#include<stdio.h>

int main()
{FILE*words;

    words = fopen("Text.txt","w");
    if(words==NULL)
    {
    printf("Error.");
    }
    char line[500];
    int i, lines;
    printf("Input 5 lines:");
scanf("%d", &lines);

if(lines<=5){
for(int i = 0; i < 5; i++ ){
    scanf("%s", &line);
   fprintf(words, "%s\n", line);

}

    fclose(words);
    return 0;
    }
    else{
   printf("\nlimit to 5 only lines");
    }
}
