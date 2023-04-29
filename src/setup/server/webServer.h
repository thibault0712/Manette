#include "pageInSpiffs/pageInSpiffs.h"
#include "pageForRequestHttp/pageForRequestHttp.h"
#include <ESPAsyncWebServer.h>

void webServer(){
    pageInSpiffs();
    pageForRequestHttp();
    server.begin();
}