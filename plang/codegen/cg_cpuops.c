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
void cge_seti(int Destination, unsigned long long Source) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(SETI);
		cg_emitbyte(Destination);
		cg_emitword(Source, 8);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "SETI r%i, %s\n", Destination, cg_inttostr(Source));
		return;
	}
}
void cge_ldwmi(int Register, unsigned long long Pointer) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(LDWMI);
		cg_emitbyte(Register);
		cg_emitword(Pointer, 8);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "LDWMI r%i, %s\n", Register, cg_inttostr(Pointer));
		return;
	}
}
void cge_stwmi(int Register, unsigned long long Pointer) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(STWMI);
		cg_emitbyte(Register);
		cg_emitword(Pointer, 8);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "STWMI r%i, %s\n", Register, cg_inttostr(Pointer));
		return;
	}
}
void cge_ldbmi(int Register, unsigned long long Pointer) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(LDBMI);
		cg_emitbyte(Register);
		cg_emitword(Pointer, 8);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "LDBMI r%i, %s\n", Register, cg_inttostr(Pointer));
		return;
	}
}
void cge_stbmi(int Register, unsigned long long Pointer) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(STBMI);
		cg_emitbyte(Register);
		cg_emitword(Pointer, 8);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "STBMI r%i, %s\n", Register, cg_inttostr(Pointer));
		return;
	}
}
void cge_ori(int Register, unsigned long long Source) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(ORI);
		cg_emitbyte(Register);
		cg_emitword(Source, 8);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "ORI r%i, %s\n", Register, cg_inttostr(Source));
		return;
	}
}
void cge_andi(int Register, unsigned long long Source) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(ANDI);
		cg_emitbyte(Register);
		cg_emitword(Source, 8);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "ANDI r%i, %s\n", Register, cg_inttostr(Source));
		return;
	}
}
void cge_xori(int Register, unsigned long long Source) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(XORI);
		cg_emitbyte(Register);
		cg_emitword(Source, 8);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "XORI r%i, %s\n", Register, cg_inttostr(Source));
		return;
	}
}
void cge_addi(int Register, unsigned long long Source) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(ADDI);
		cg_emitbyte(Register);
		cg_emitword(Source, 8);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "ADDI r%i, %s\n", Register, cg_inttostr(Source));
		return;
	}
}
void cge_subi(int Register, unsigned long long Source) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(SUBI);
		cg_emitbyte(Register);
		cg_emitword(Source, 8);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "SUBI r%i, %s\n", Register, cg_inttostr(Source));
		return;
	}
}
void cge_muli(int Register, unsigned long long Source) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(MULI);
		cg_emitbyte(Register);
		cg_emitword(Source, 8);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "MULI r%i, %s\n", Register, cg_inttostr(Source));
		return;
	}
}
void cge_divi(int Register, unsigned long long Source) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(DIVI);
		cg_emitbyte(Register);
		cg_emitword(Source, 8);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "DIVI r%i, %s\n", Register, cg_inttostr(Source));
		return;
	}
}
void cge_sl(int Register, int Amount) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Register;
		Regmap.Register1 = Amount;
		cg_emitbyte(SL);
		cg_emitbyte(Regmap.Raw);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "SL r%i, r%i\n", Register, Amount);
		return;
	}
}
void cge_sr(int Register, int Amount) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Register;
		Regmap.Register1 = Amount;
		cg_emitbyte(SR);
		cg_emitbyte(Regmap.Raw);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "SR r%i, r%i\n", Register, Amount);
		return;
	}
}
void cge_sli(int Register, byte Amount) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(SLI);
		cg_emitbyte(Register);
		cg_emitbyte(Amount & 0x3F);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "SLI r%i, %s\n", Register, cg_inttostr(Amount & 0x3F));
		return;
	}
}
void cge_sri(int Register, byte Amount) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(SRI);
		cg_emitbyte(Register);
		cg_emitbyte(Amount & 0x3F);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "SRI r%i, %s\n", Register, cg_inttostr(Amount & 0x3F));
		return;
	}
}
void cge_sa(int Register) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(SA);
		cg_emitbyte(Register);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "SA r%i\n", Register);
		return;
	}
}
void cge_sp(int Register) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(SP);
		cg_emitbyte(Register);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "SP r%i\n", Register);
		return;
	}
}
void cge_sai(unsigned long long Item) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(SAI);
		cg_emitword(Item, 8);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "SAI %s\n", cg_inttostr(Item));
		return;
	}
}
void cge_go(int Register) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(GO);
		cg_emitbyte(Register);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "GO r%i\n", Register);
		return;
	}
}
void cge_ent(int Register) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(ENT);
		cg_emitbyte(Register);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "ENT r%i\n", Register);
		return;
	}
}
void cge_rt(void) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(RT);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "RT\n");
		return;
	}
}
void cge_rtf(int Register) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(RTF);
		cg_emitbyte(Register);
	}
	else {
		fprintf(cgctx->OutputHandle, "RTF r%i\n", Register);
		return;
	}
}
void cge_rtfi(unsigned long long Flags) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(RTFI);
		cg_emitword(Flags, 8);
	}
	else {
		fprintf(cgctx->OutputHandle, "RTFI %s\n", cg_inttostr(Flags));
		return;
	}
}
void cge_goi(unsigned long long Address) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(GOI);
		cg_emitword(Address, 8);
	}
	else {
		fprintf(cgctx->OutputHandle, "GOI %s\n", cg_inttostr(Address));
		return;
	}
}
void cge_enti(unsigned long long Address) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(ENTI);
		cg_emitword(Address, 8);
	}
	else {
		fprintf(cgctx->OutputHandle, "ENTI %s\n", cg_inttostr(Address));
		return;
	}
}
void cge_cmp(int Register0, int Register1) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Register0;
		Regmap.Register1 = Register1;
		cg_emitbyte(CMP);
		cg_emitbyte(Regmap.Raw);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "CMP r%i, r%i\n", Register0, Register1);
		return;
	}
}
void cge_cmpi(int Register, unsigned long long Source) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(CMPI);
		cg_emitbyte(Register);
		cg_emitword(Source, 8);
	}
	else {
		fprintf(cgctx->OutputHandle, "CMPI r%i, %s\n", Register, cg_inttostr(Source));
		return;
	}
}
void cge_gof(int Address, int Flag) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Address;
		Regmap.Register1 = Flag;
		cg_emitbyte(GOF);
		cg_emitbyte(Regmap.Raw);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "GOF r%i, r%i\n", Address, Flag);
		return;
	}
}
void cge_entf(int Address, int Flag) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Address;
		Regmap.Register1 = Flag;
		cg_emitbyte(ENTF);
		cg_emitbyte(Regmap.Raw);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "ENTF r%i, r%i\n", Address, Flag);
		return;
	}
}
void cge_gofi(int Address, unsigned long long Flag) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(GOFI);
		cg_emitbyte(Address);
		cg_emitword(Flag, 8);
		return;
	} 
	else {
		fprintf(cgctx->OutputHandle, "GOFI r%i, %s\n", Address, cg_inttostr(Flag));
		return;
	}
}
void cge_gofii(unsigned long long Address, unsigned long long Flag) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(GOFII);
		cg_emitword(Address, 8);
		cg_emitword(Flag, 8);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "GOFII %s, %s\n", cg_inttostr(Address), cg_inttostr(Flag));
		return;
	}
}
void cge_entfi(int Address, unsigned long long Flag) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(ENTFI);
		cg_emitbyte(Address);
		cg_emitword(Flag, 8);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "ENTFI r%i, %s\n", Address, cg_inttostr(Flag));
		return;
	}
}
void cge_entfii(unsigned long long Address, unsigned long long Flag) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(ENTFII);
		cg_emitword(Address, 8);
		cg_emitword(Flag, 8);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "ENTFII %s, %s\n", cg_inttostr(Address), cg_inttostr(Flag));
		return;
	}
}
void cge_neg(int Address) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(NEG);
		cg_emitbyte(Address);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "NEG r%i\n", Address);
		return;
	}
}
void cge_nop(void) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(NOP);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "NOP\n");
		return;
	}
}
void cge_eih(void) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(DIH);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "EIH\n");
		return;
	}
}
void cge_dih(void) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(DIH);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "DIH\n");
		return;
	}
}
void cge_hlt(void) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(HLT);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "HLT\n");
		return;
	}
}
void cge_int(int Register) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(NOP);
		cg_emitbyte(Register);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "INT r%i\n", Register);
		return;
	}
}
void cge_inti(byte Register) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(INTI);
		cg_emitbyte(Register);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "INTI %s\n", cg_inttostr(Register));
		return;
	}
}
void cge_hnd(int Interrupt, int Handler) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Interrupt;
		Regmap.Register1 = Handler;
		cg_emitbyte(HND);
		cg_emitbyte(Regmap.Raw);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "HND r%i, r%i\n", Interrupt, Handler);
		return;
	}
}
void cge_hndi(unsigned char Interrupt, int Handler) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(HNDI);
		cg_emitbyte(Interrupt);
		cg_emitbyte(Handler);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "HNDI %s, r%i\n", cg_inttostr(Interrupt), Handler);
		return;
	}
}
void cge_hndii(unsigned char Interrupt, unsigned long long Handler) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(HNDII);
		cg_emitbyte(Interrupt);
		cg_emitword(Handler, 8);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "HNDII %s, %s\n", cg_inttostr(Interrupt), cg_inttostr(Handler));
		return;
	}
}
void cge_spa(void) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(SPA);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "SPA\n");
		return;
	}
}
void cge_spg(void) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(SPG);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "SPG\n");
		return;
	}
}
void cge_saa(void) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(SAA);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "SAA\n");
		return;
	}
}
void cge_sag(void) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(SAG);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "SAG\n");
		return;
	}
}
void cge_ldsd(int Register0, int Register1) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Register0;
		Regmap.Register1 = Register1;
		cg_emitbyte(LDSD);
		cg_emitbyte(Regmap.Raw);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "LDSD r%i, r%i\n", Register0, Register1);
		return;
	}
}
void cge_ldsdi(unsigned long long Part0, unsigned long long Part1) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(LDSDI);
		cg_emitword(Part0, 8);
		cg_emitword(Part1, 8);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "LDSDI %s, %s\n", cg_inttostr(Part0), cg_inttostr(Part1));
		return;
	}
}
void cge_stsd(int Regster0, int Register1) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Regster0;
		Regmap.Register1 = Register1;
		cg_emitbyte(STSD);
		cg_emitbyte(Regmap.Raw);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "STSD r%i, r%i\n", Regster0, Register1);
		return;
	}
}
void cge_ldvm(int Register0, int Register1) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Register0;
		Regmap.Register1 = Register1;
		cg_emitbyte(LDVM);
		cg_emitbyte(Regmap.Raw);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "LDVM r%i, r%i\n", Register0, Register1);
		return;
	}
}
void cge_ldvmi(unsigned long long Part0, unsigned long long Part1) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(LDVMI);
		cg_emitword(Part0, 8);
		cg_emitword(Part1, 8);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "LDVMI %s, %s\n", cg_inttostr(Part0), cg_inttostr(Part1));
		return;
	}
}
void cge_stvm(int Register0, int Register1) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Raw;
			struct {
				byte Register0 : 4;
				byte Register1 : 4;
			};
		}Regmap;
		Regmap.Register0 = Register0;
		Regmap.Register1 = Register1;
		cg_emitbyte(STVM);
		cg_emitbyte(Regmap.Raw);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "STVM r%i, r%i\n", Register0, Register1);
		return;
	}
}
void cge_spn(void) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(SPN);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "SPN\n");
		return;
	}
}
void cge_msp(int DataRegister, unsigned long Immediate) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Data[3];
			struct {
				byte Register : 4;
				u32 Immediate : 20;
			};
		}ImmData;
		ImmData.Register = DataRegister;
		ImmData.Immediate = Immediate;
		cg_emitbyte(MSP);
		cg_emitbyte(ImmData.Data[0]);
		cg_emitbyte(ImmData.Data[1]);
		cg_emitbyte(ImmData.Data[2]);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "MSP r%i, %s\n", DataRegister, cg_inttostr(Immediate));
		return;
	}
}
void cge_ssp(int DataRegister, unsigned long Immediate) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Data[3];
			struct {
				byte Register : 4;
				u32 Immediate : 20;
			};
		}ImmData;
		ImmData.Register = DataRegister;
		ImmData.Immediate = Immediate;
		cg_emitbyte(SSP);
		cg_emitbyte(ImmData.Data[0]);
		cg_emitbyte(ImmData.Data[1]);
		cg_emitbyte(ImmData.Data[2]);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "SSP r%i, %s\n", DataRegister, cg_inttostr(Immediate));
		return;
	}
}
void cge_asp(int DataRegister, unsigned long Immediate) {
	if (!cgctx->Flags.GenerateAssembly) {
		union {
			byte Data[3];
			struct {
				byte Register : 4;
				u32 Immediate : 20;
			};
		}ImmData;
		ImmData.Register = DataRegister;
		ImmData.Immediate = Immediate;
		cg_emitbyte(ASP);
		cg_emitbyte(ImmData.Data[0]);
		cg_emitbyte(ImmData.Data[1]);
		cg_emitbyte(ImmData.Data[2]);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "ASP r%i, %s\n", DataRegister, cg_inttostr(Immediate));
		return;
	}
}
void cge_spb(int Register) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(SPB);
		cg_emitbyte(Register);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "SPB r%i\n", Register);
		return;
	}
}
void cge_sab(int Register) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(SAB);
		cg_emitbyte(Register);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "SAB r%i\n", Register);
		return;
	}
}
void cge_saii(unsigned char Register) {
	if (!cgctx->Flags.GenerateAssembly) {
		cg_emitbyte(SAII);
		cg_emitbyte(Register);
		return;
	}
	else {
		fprintf(cgctx->OutputHandle, "SAII ")
	}
}
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