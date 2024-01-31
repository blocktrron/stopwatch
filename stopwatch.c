#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char* argv[])
{
	time_t start_time = time(NULL);
	time_t current_time, td;

	while (1) {
		current_time = time(NULL);
		td = current_time - start_time;

		fprintf(stdout, "\rTime elapsed: %02d:%02d:%02d", td / 60 / 60, td / 60, td % 60);
		fflush(stdout);

		sleep(1);
	}

	return 0;
}
