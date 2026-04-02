#include<stdio.h>
#include<string.h>

#define MIDIID "MThd"



int main(){

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


}
