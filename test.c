#include<stdio.h>
#include<string.h>
#include<math.h>

#define MIDIID "MThd"

typedef struct 
{
    int note;
    int delay;
}test;




int main(){
    test t[100];
    t[1].delay=100;
    t[1].note=0x40;

    // printf("note %d ,delay %d\n", t[1].note,t[1].delay);

    char *sid="MThd";
    char hel[5]="hello";
    // strcpy(hel,sid);
    // printf("%ld",sizeof(hel));
    // printf("%ld",strlen(hel));
    printf("%d",strcmp(sid,MIDIID));
    printf("%s", hel);
    int this=0x03;
    for(int i=0;i<this;i++){
        printf("this\n");
    }
    FILE *f = fopen("output.txt", "w");
for (int i = 0; i < 10; i++) {
    fprintf(f, "note=%d tick=%d\n", 20 ,30);
}
fclose(f);
int val=100; 
int analog_value=440*pow(2.0,(val-69)/12.0);  
printf("analog %d\n",analog_value);


}
