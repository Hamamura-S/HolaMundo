

#include <stdio.h>
#include <stdlib.h>
#include <commons/log.h>

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	t_log* logger=log_create("prueba.log", "Logprueba", true, LOG_LEVEL_INFO);
	log_info(logger, "PRobando!");
	return EXIT_SUCCESS;
}
