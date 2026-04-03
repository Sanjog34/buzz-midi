#include<stdio.h>
#include<string.h>
#include<math.h>

#define MIDIID "MThd"

typedef struct
{
    float time_since_previous_event;
    int note;
    int velocity;
    char event_type;
}bar;
bar current_bar;
bar previous_bar;

void init_previous_bar(){
    previous_bar.time_since_previous_event=0.0;
    previous_bar.event_type=22;
    previous_bar.note=0;
    previous_bar.velocity=0;
}
void build_current_bar(){
    current_bar.time_since_previous_event=556;
    current_bar.event_type=23;
    current_bar.note=45;
    current_bar.velocity=55;
}
void swap(){
    previous_bar.time_since_previous_event=current_bar.time_since_previous_event;
    previous_bar.event_type=current_bar.event_type;
    previous_bar.note=current_bar.note;
    previous_bar.velocity=current_bar.velocity;

}

int main(){
    init_previous_bar();
    build_current_bar();
    printf("time %f\n",previous_bar.time_since_previous_event);
    printf("time %d\n",previous_bar.note);
    printf("time %d\n",previous_bar.event_type);
    printf("time %d\n",previous_bar.velocity);
    swap();

     printf("time %f\n",previous_bar.time_since_previous_event);
    printf("time %d\n",previous_bar.note);
    printf("time %d\n",previous_bar.event_type);
    printf("time %d",previous_bar.velocity);


    // printf("note %d ,delay %d\n", t[1].note,t[1].delay);

//     char *sid="MThd";
//     char hel[5]="hello";
//     // strcpy(hel,sid);
//     // printf("%ld",sizeof(hel));
//     // printf("%ld",strlen(hel));
//     printf("%d",strcmp(sid,MIDIID));
//     printf("%s", hel);
//     int this=0x03;
//     for(int i=0;i<this;i++){
//         printf("this\n");
//     }
//     FILE *f = fopen("output.txt", "w");
// for (int i = 0; i < 10; i++) {
//     fprintf(f, "note=%d tick=%d\n", 20 ,30);
// }
// fclose(f);
// int val=100; 
// int analog_value=440*pow(2.0,(val-69)/12.0);  
// printf("analog %d\n",analog_value);


}
