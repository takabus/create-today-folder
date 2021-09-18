#include <stdio.h>
#include <time.h>
#include <direct.h>

int main(int argc, char* args[])
{

	time_t t = time(NULL);
	struct tm local;
	localtime_s(&local, &t);
	char buf[64];
	
	// If has arguments
	// ex) "%Y”N%mŒŽ%d“ú%HŽž%M•ª%S•b"

	if (argc ==2) {

		// format datetime
		strftime(buf, sizeof(buf), args[1], &local);

	}
	else {
		// format datetime
		strftime(buf, sizeof(buf), "%Y%m%d", &local);
	}

	// print  directory name.
	printf("%s", buf);

	// create a directory.
	_mkdir(buf);

}