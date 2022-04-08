//
//  cg_reg.c
//  plang
//
//  Created by Noah Wooten on 4/8/22.
//
#include "codegen.h"

void cg_usereg(int Register) {
	cgctx->RegistersUsed |= (1 << Register);
}
void cg_dropreg(int Register) {
	cgctx->RegistersUsed &= ~(1 << Register);
}
int cg_usenew(void) {
	for (int i = 0; i < 16; i++) {
		if (!(cgctx->RegistersUsed & (1 << i)))
			return i;
		else
			continue;
	}
	return -1;
}