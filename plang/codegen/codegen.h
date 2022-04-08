//
//  codegen.h
//  plang
//
//  Created by Noah Wooten on 4/7/22.
//

#ifndef codegen_h
#define codegen_h
#include "../ctx.h"
#include <stdio.h>

typedef struct _codegenctx {
	union {
		u64 Flags;
		struct {
			byte GenerateAssembly : 1;
		};
	}Flags;
	FILE* OutputHandle;
	u16 RegistersUsed;
	byte AssemblerNotation;
}codegenctx_t;
extern codegenctx_t* cgctx;

void cg_init(void);
void cg_shutdown(void);
void cg_assemblygen(FILE* Output);
void cg_codegen(FILE* Output);

void cg_emitbyte(byte Byte);
void cg_emitstr(const char* String);

void cg_usereg(int Register);
void cg_dropreg(int Register);
int cg_usenew(void);

void cge_set(int Destination, int Source);
void cge_ldwm(int Destination, int Address);
void cge_stwm(int Destination, int Address);
void cge_ldbm(int Destination, int Address);
void cge_stbm(int Destination, int Address);
void cge_or(int Destination, int Source);
void cge_and(int Destination, int Source);
void cge_not(int Destination, int Source);
void cge_add(int Destination, int Source);
void cge_sub(int Destination, int Source);
void cge_mul(int Destination, int Source);
void cge_div(int Destination, int Source);
void cge_seti(int Destination, unsigned long long Source);
void cge_ldwmi(int Register, unsigned long long Pointer);
void cge_stwmi(int Register, unsigned long long Pointer);
void cge_ldbmi(int Register, unsigned long long Pointer);
void cge_stbmi(int Register, unsigned long long Pointer);
void cge_ori(int Register, unsigned long long Source);
void cge_andi(int Register, unsigned long long Source);
void cge_xori(int Register, unsigned long long Source);
void cge_addi(int Register, unsigned long long Source);
void cge_subi(int Register, unsigned long long Source);
void cge_muli(int Register, unsigned long long Source);
void cge_divi(int Register, unsigned long long Source);
void cge_sl(int Register, int Amount);
void cge_sr(int Register, int Amount);
void cge_sli(int Register, byte Amount);
void cge_sri(int Register, byte Amount);
void cge_sa(int Register);
void cge_sp(int Register);
void cge_sai(unsigned long long Item);
void cge_go(int Register);
void cge_ent(int Register);
void cge_rt(void);
void cge_rtf(int Register);
void cge_rtfi(unsigned long long Flags);
void cge_goi(unsigned long long Address);
void cge_enti(unsigned long long Address);
void cge_cmp(int Register0, int Register1);
void cge_cmpi(int Register, unsigned long long Source);
void cge_gof(int Address, int Flag);
void cge_entf(int Address, int Flag);
void cge_gofi(int Address, unsigned long long Flag);
void cge_gofii(unsigned long long Address, unsigned long long Flag);
void cge_entfi(int Address, unsigned long long Flag);
void cge_entfii(unsigned long long Address, unsigned long long Flag);
void cge_neg(int Address);
void cge_nop(void);
void cge_eih(void);
void cge_dih(void);
void cge_hlt(void);
void cge_int(int Register);
void cge_inti(byte Register);
void cge_hnd(int Interrupt, int Handler);
void cge_hndi(unsigned char Interrupt, int Handler);
void cge_hndii(unsigned char Interrupt, unsigned long long Handler);
void cge_spa(void);
void cge_spg(void);
void cge_saa(void);
void cge_sag(void);
void cge_ldsd(int Register0, int Register1);
void cge_ldsdi(unsigned long long Part0, unsigned long long Part1);
void cge_stsd(int Regster0, int Register1);
void cge_ldvm(int Register0, int Register1);
void cge_ldvmi(unsigned long long Part0, unsigned long long Part1);
void cge_stvm(int Register0, int Register1);
void cge_spn(void);
void cge_msp(int DataRegister, unsigned long Immediate);
void cge_ssp(int DataRegister, unsigned long Immediate);
void cge_asp(int DataRegister, unsigned long Immediate);
void cge_spb(int Register);
void cge_sab(int Register);
void cge_saii(unsigned char Register);
void cge_inc(int Register);
void cge_dec(int Register);
void cge_sbn(void);
void cge_iob(int Port, int Data);
void cge_iib(int Port, int Data);
void cge_iow(int Port, int Data);
void cge_iiw(int Port, int Data);
void cge_ios(int Port, int Data, int Length);
void cge_iis(int Port, int String, int Length);
void cge_ldhm(int Destination, int Pointer);
void cge_sthm(int Destination, int Pointer);
void cge_stqm(int Destination, int Pointer);
void cge_ldqm(int Destination, int Pointer);
void cge_ldhm(int Destination, unsigned long Data);
void cge_sthm(int Destination, unsigned long Data);
void cge_stqm(int Destination, unsigned short Data);
void cge_ldqm(int Destination, unsigned short Data);


#endif /* codegen_h */