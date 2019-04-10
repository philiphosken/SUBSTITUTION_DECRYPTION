#include <stdio.h>

int main()
{
char alphatxt[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
char subtxt[]=    "QWERTYUIOPASDFGHJKLZXCVBNM ";
char N = 27;
char m;
char i;
char a;
char b;


FILE *coded;
coded = fopen("coded.txt", "r");

FILE *message;
message = fopen("message.txt", "w");
    
    while (feof(coded) == 0){
        fscanf(coded, "%c", &m);
    for (i = 0; i < N; ++i){
        a = alphatxt[i];
        b = subtxt[i];
    if (m == b){
        fprintf(message, "%c", a);
        printf("%c", a);
    } 
       
}

}
}