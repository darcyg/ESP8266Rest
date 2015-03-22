//RestAPI.h
#ifndef RESTAPI_H
#define RESTAPI_H

#include <c_types.h>
#include <ip_addr.h>
#include <espconn.h>
#include "server.h"


#define NUM_OF_OUTPUT_PORTS 2
extern bool portsVal[NUM_OF_OUTPUT_PORTS];

typedef struct 
{
  char* command;
  void(*f)(ServerConnData* conn);
} RestPtrs;

void ICACHE_FLASH_ATTR OneSecLoop();


void ICACHE_FLASH_ATTR InitializeRest();
void ICACHE_FLASH_ATTR SendPortStatus(ServerConnData* conn);
void ICACHE_FLASH_ATTR doSetWifi(ServerConnData* conn);
void ICACHE_FLASH_ATTR doGetWifi(ServerConnData* conn);
void ICACHE_FLASH_ATTR doFlipinput(ServerConnData* conn);
void ICACHE_FLASH_ATTR doOpen(ServerConnData* conn);
void ICACHE_FLASH_ATTR doStatus(ServerConnData* conn);
void ICACHE_FLASH_ATTR doGetEvents(ServerConnData* conn);
void ICACHE_FLASH_ATTR doSetEvent(ServerConnData* conn);
void ICACHE_FLASH_ATTR doGetTime(ServerConnData* conn);

RestPtrs* RestPtrsTable;


#endif //RESTAPI_H
