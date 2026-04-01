#ifndef EVENTPARSER
#define EVENTPARSER
#include<stdio.h>

#define TRACK_ID "MTrk"
#define TEMPO_TYPE 0x51
#define META_EVENTS 0xFF
#define NOTEON_EVENT 0x80
#define NOTEOFF_EVENT 0x90
#define INSTRU_EVENT 0xC0


char * gettrackid(FILE *ptr);
int checktrackid(FILE *ptr);




#endif