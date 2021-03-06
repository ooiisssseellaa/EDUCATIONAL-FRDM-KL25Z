/*
 * ESP8266_01.h
 *
 *  Created on: 15 mar 2019
 *      Author: Alessio
 */

#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL25Z4.h"
#include "time.h"

extern char dataOutFromESP[1000];

typedef enum _Wifi_mode
{
	sta = 1,
	AP = 2,
	both = 3,
} Wifi_mode;

typedef enum _connection_type
{
	single = 0,
	multi = 1,
} connection_type;

typedef enum _server_startStop
{
	stop = 0,
	start = 1,
} server_startStop;

// BASIC function
void ESP8266_reset(char dataOut[]);
void ESP8266_queryGetIP(char dataOut[]);
void ESP8266_queryGetCipStatus(char dataOut[]);

// Wifi AP fucntion
void ESP8266_queryGetListAP(char dataOut[]);
void ESP8266_setWifiMode(char dataOut[], Wifi_mode mode);
void ESP8266_queryWifiMode(char dataOut[]);
void ESP8266_setAP(char dataOut[], char id[], char pass[], char chl[], char ecn[]);
void ESP8266_queryGetAPSet(char dataOut[]);
void ESP8266_joinAP(char dataOut[], char SSID[], char pass[]);
void ESP8266_quitAP(char dataOut[]);

// TCP IP function
void ESP8266_cipClose(char dataOut[]);
void ESP8266_setCipMux(char dataOut[], connection_type single_multi);
void ESP8266_queryCipMuxSet(char dataOut[]);
void ESP8266_setCipServer(char dataOut[], server_startStop open_close);
void ESP8266_commandCipSend(char dataOut[], char id[], char numberOfByte[]);
void ESP8266_sendData(char dataIn[]);
void ESP8266_sendPing(char dataOut[], char ping[]);
void ESP8266_setDHCP(char dataOut[], Wifi_mode mode, uint8_t enable_disable);

void ESP8266_init();

void ESP8266_send(char numberOfByte[], char dataIn[]);
