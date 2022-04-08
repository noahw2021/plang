//
//  ctx.h
//  plang
//
//  Created by Noah Wooten on 4/7/22.
//

#ifndef ctx_h
#define ctx_h

typedef unsigned long long u64;
typedef unsigned long u32;
typedef unsigned short u16;
typedef unsigned char byte;

void ui_compile(int argc, char** argv);
void ui_interactive(int argc, char** argv);


#endif /* ctx_h */