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


FILE *in;
in = fopen("in.txt", "r");

FILE *out;
out = fopen("out.txt", "w");
    
    while (feof(in) == 0){
        fscanf(in, "%c", &m);
    for (i = 0; i < N; ++i){
        a = alphatxt[i];
        b = subtxt[i];
    if (m == b){
        fprintf(out, "%c", a);
        printf("%c", a);
    } 
       
}

}
}