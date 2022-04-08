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
	cgctx->AssemblerNotation = 10;
	return;
}
void cg_shutdown(void) {
	free(cgctx);
	return;
}
void cg_assemblygen(FILE* Output) {
	cgctx->OutputHandle = Output;
	cgctx->Flags.GenerateAssembly = 1;
	return;
}
void cg_codegen(FILE* Output) {
	cgctx->OutputHandle = Output;
	cgctx->Flags.GenerateAssembly = 0;
	return;
}