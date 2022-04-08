//
//  ui_compile.c
//  plang
//
//  Created by Noah Wooten on 4/7/22.
//

#include "../ctx.h"
#include <stdio.h>
#include <stdlib.h>

void ui_compile(int argc, char** argv) {
	if (!argv[1]) { // Input PL file
		printf("[ERR]: No input file!\n");
		return;
	}
	if (!argv[2]) { // Output object
		printf("[ERR]: No output file!\n");
		return;
	}

	FILE* InputFile = fopen(argv[1], "r");
	FILE* OutputFile = fopen(argv[2], "wb");
	
	if (!InputFile) {
		printf("[ERR]: Cannot open input file!\n");
		return;
	}
	
	if (!OutputFile) {
		printf("[ERR]: Cannot open output file!\n");
		return;
	}

	char* Buffer = malloc(2048);
	char* Line = fgets(Buffer, 2048, InputFile);



	return;
}