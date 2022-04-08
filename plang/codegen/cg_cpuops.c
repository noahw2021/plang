//
//  cg_cpuops.c
//  plang
//
//  Created by Noah Wooten on 4/8/22.
//
#include "codegen.h"
#include "cg_psin.h"

void cge_set(int Destination, int Source) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Destination;
		Regmap.Register1 = Source;
		cg_emitbyte(SET);
		cg_emitbyte(Regmap.Raw);
	}
	else {
		fprintf(cgctx->OutputHandle, "SET r%i, r%i\n", Destination, Source);
		return;
	}
	return;
}
void cge_ldwm(int Destination, int Address) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Destination;
		Regmap.Register1 = Address;
		cg_emitbyte(LDWM);
		cg_emitbyte(Regmap.Raw);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "LDWM r%i, r%i\n", Destination, Address);
		return;
	}
}
void cge_stwm(int Destination, int Address) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Destination;
		Regmap.Register1 = Address;
		cg_emitbyte(STWM);
		cg_emitbyte(Regmap.Raw);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "STWM r%i, r%i\n", Destination, Address);
		return;
	}
}
void cge_ldbm(int Destination, int Address) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Destination;
		Regmap.Register1 = Address;
		cg_emitbyte(LDBM);
		cg_emitbyte(Regmap.Raw);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "LDBM r%i, r%i\n", Destination, Address);
		return;
	}
}
void cge_stbm(int Destination, int Address) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Destination;
		Regmap.Register1 = Address;
		cg_emitbyte(STBM);
		cg_emitbyte(Regmap.Raw);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "STBM r%i, r%i\n", Destination, Address);
		return;
	}
}
void cge_or(int Destination, int Source) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Destination;
		Regmap.Register1 = Source;
		cg_emitbyte(OR);
		cg_emitbyte(Regmap.Raw);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "OR r%i, r%i\n", Destination, Source);
		return;
	}
}
void cge_and(int Destination, int Source) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Destination;
		Regmap.Register1 = Source;
		cg_emitbyte(AND);
		cg_emitbyte(Regmap.Raw);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "AND r%i, r%i\n", Destination, Source);
		return;
	}
}
void cge_not(int Destination, int Source) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Destination;
		Regmap.Register1 = Source;
		cg_emitbyte(NOT);
		cg_emitbyte(Regmap.Raw);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "NOT r%i, r%i\n", Destination, Source);
		return;
	}
}
void cge_add(int Destination, int Source) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Destination;
		Regmap.Register1 = Source;
		cg_emitbyte(ADD);
		cg_emitbyte(Regmap.Raw);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "ADD r%i, r%i\n", Destination, Source);
		return;
	}
}
void cge_sub(int Destination, int Source) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Destination;
		Regmap.Register1 = Source;
		cg_emitbyte(SUB);
		cg_emitbyte(Regmap.Raw);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "SUB r%i, r%i\n", Destination, Source);
		return;
	}
}
void cge_mul(int Destination, int Source) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Destination;
		Regmap.Register1 = Source;
		cg_emitbyte(MUL);
		cg_emitbyte(Regmap.Raw);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "MUL r%i, r%i\n", Destination, Source);
		return;
	}
}
void cge_div(int Destination, int Source) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Destination;
		Regmap.Register1 = Source;
		cg_emitbyte(DIV);
		cg_emitbyte(Regmap.Raw);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "DIV r%i, r%i\n", Destination, Source);
		return;
	}
}
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