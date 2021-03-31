#include <cstdint>
#include <fstream>
#include <Windows.h>

std::ofstream log_file("pogoleader.log");

extern "C" {
	extern FARPROC orig_SteamAPI_Init;
}

extern "C" bool SteamAPI_Init()
{
	log_file << "Initialized" << std::endl;

	return orig_SteamAPI_Init();
}