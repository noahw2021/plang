//
//  cg_emit.c
//  plang
//
//  Created by Noah Wooten on 4/8/22.
//
#include "codegen.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cg_emitbyte(byte Byte) {
	if (cgctx->Flags.GenerateAssembly) {
		char* Buffer = sizeof("-b XX") + 5;
		sprintf(Buffer, "-b %i\n", Byte);
		fputs(cgctx->OutputHandle, Buffer);
		free(Buffer);
		return;
	}
	else {
		fputc(Byte, cgctx->OutputHandle);
	}
}
void cg_emitstr(const char* String) {
	if (cgctx->Flags.GenerateAssembly) {
		char* Buffer = sizeof("-z\n\0") + strlen(String);
		sprintf(Buffer, "-z %s\n", String);
		fputs(Buffer, cgctx->OutputHandle);
		free(Buffer);
		return;
	}
	else {
		for (int i = 0; i < strlen(String); i++) {
			fputc(String[i], cgctx->OutputHandle);
		}
		fputc(0x00, cgctx->OutputHandle);
		return;
	}
}
void cg_emitword(u64 Data, byte Count) {
	union {
		u64 Big;
		byte Small[8];
	}MedInt;
	MedInt.Big = Data;
	for (int i = 0; i < Count; i++)
		cg_emitbyte(MedInt.Small[i]);
}
char* cg_inttostr(u64 Data) {
	char* Data = malloc(65);
	sprintf(Data, "%llu", Data);
	return Data;
}