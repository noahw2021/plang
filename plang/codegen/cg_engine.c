//
//  cg_engine.c
//  plang
//
//  Created by Noah Wooten on 4/8/22.
//
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "codegen.h"
codegenctx_t* cgctx;

void cg_init(void) {
	cgctx = malloc(sizeof(codegenctx_t));
	memset(cgctx, 0, sizeof(codegenctx_t));
	return;
}
void cg_shutdown(void) {
	free(cgctx);
	return;
}
void cg_assemblygen(FILE* Output) {
	
}
void cg_codegen(FILE* Output) {
		
}