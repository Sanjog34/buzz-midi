
#include<stdio.h>
#include"eventparser.h"
#include"helper.h"
#include<string.h>


char trackid[4];
uint32_t tracklength;


void GetTrackId(FILE *ptr){
    strcpy(trackid,readbytes(4,ptr));
}

void GetTrackLenght(FILE *ptr){
    tracklength=readLength(readbytes(4,ptr),4);
}

int CheckTrackid(){
    if(strcmp(TRACK_ID,trackid) != 0){
        return 0;
    }
    return 1;
}


