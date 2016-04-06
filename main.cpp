/*
 * @file: main.cpp
 * @author: Tang Li
 * @date: 6 Aug 2014
 *
 * LICENSE
 *
 */


#include "application.h"
#include "util/windows_header.h"
#include <iostream>

#ifdef WIN32
INT WINAPI WinMain( HINSTANCE hInst, HINSTANCE, LPSTR strCmdLine, INT )
#else
int main(int argc, char *argv[])
#endif /* WIN32 */
{
	Application app;
	try
	{
		app.run();
	}
	catch(std::exception& e)
    {
#ifdef WIN32
        MessageBoxA(nullptr, e.what(), "An exception has occurred!", MB_OK | MB_ICONERROR | MB_TASKMODAL);
#else
        fprintf(stderr, "An exception has occurred: %s\n", e.what());
#endif /* WIN32 */
    }

	return 0;
}
