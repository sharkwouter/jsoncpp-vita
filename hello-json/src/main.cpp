#include <psp2/kernel/threadmgr.h>
#include <psp2/kernel/processmgr.h>
#include <iostream>
#include <fstream>
#include <string>
#include <json/json.h>

#include "debugScreen.h"

#define printf psvDebugScreenPrintf



void LoadJson(std::string filename, Json::Value *data) {
    std::ifstream configFile(filename);
    Json::CharReaderBuilder builder;
    JSONCPP_STRING errs;
    parseFromStream(builder, configFile, data, &errs);
    configFile.close();
}


int main(int argc, char *argv[]) {
	psvDebugScreenInit();
	Json::Value data;
	LoadJson("app0:/message.json", &data);
	printf(data.get("message", "Could not load json message!").asString().c_str());
	sceKernelDelayThread(3*1000000); // Wait for 3 seconds
	sceKernelExitProcess(0);
	return 0;
}
