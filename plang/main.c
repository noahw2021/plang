//
//  main.c
//  plang
//
//  Created by Noah Wooten on 2/2/22.
//

#include "ctx.h"
#include "codegen/codegen.h"
int main(int argc, char** argv) {
	cg_init();

	cg_shutdown();
}
