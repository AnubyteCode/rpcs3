#pragma once

namespace PPU_opcodes
{
	enum PPU_MainOpcodes
	{
		TDI    = 0x02, //Trap Doubleword Immediate 
		TWI    = 0x03, //Trap Word Immediate
		G_04   = 0x04,
		MULLI  = 0x07, //Multiply Low Immediate
		SUBFIC = 0x08, //Subtract from Immediate Carrying
		//DOZI = 0x09,
		CMPLI  = 0x0a, //Compare Logical Immediate
		CMPI   = 0x0b, //Compare Immediate
		ADDIC  = 0x0c, //Add Immediate Carrying
		ADDIC_ = 0x0d, //Add Immediate Carrying and Record
		ADDI   = 0x0e, //Add Immediate
		ADDIS  = 0x0f, //Add Immediate Shifted
		BC     = 0x10, //Branch Conditional
		SC     = 0x11, //System Call
		B      = 0x12, //Branch
		G_13   = 0x13,
		RLWIMI = 0x14, //Rotate Left Word Immediate then Mask Insert
		RLWINM = 0x15, //Rotate Left Word Immediate then AND with Mask
		RLWNM  = 0x17, //Rotate Left Word then AND with Mask
		ORI    = 0x18, //OR Immediate
		ORIS   = 0x19, //OR Immediate Shifted
		XORI   = 0x1a, //XOR Immediate
		XORIS  = 0x1b, //XOR Immediate Shifted
		ANDI_  = 0x1c, //AND Immediate
		ANDIS_ = 0x1d, //AND Immediate Shifted
		G_1e   = 0x1e,
		G_1f   = 0x1f,
		LWZ    = 0x20, //Load Word and Zero Indexed
		LWZU   = 0x21, //Load Word and Zero with Update Indexed
		LBZ    = 0x22, //Load Byte and Zero
		LBZU   = 0x23, //Load Byte and Zero with Update
		STW    = 0x24, //Store Word
		STWU   = 0x25, //Store Word with Update
		STB    = 0x26, //Store Byte
		STBU   = 0x27, //Store Byte with Update
		LHZ    = 0x28, //Load Halfword and Zero
		LHZU   = 0x29, //Load Halfword and Zero with Update
		LHA    = 0x2a, //Load Halfword Algebraic with Update
		LHAU   = 0x2b, //Load Halfword Algebraic
		STH    = 0x2c, //Store Halfword
		STHU   = 0x2d, //Store Halfword with Update
		LMW    = 0x2e, //Load Multiple Word
		STMW   = 0x2f, //Store Multiple Word
		LFS    = 0x30, //Load Floating-Point Single
		LFSU   = 0x31, //Load Floating-Point Single with Update
		LFD    = 0x32, //Load Floating-Point Double
		LFDU   = 0x33, //Load Floating-Point Double with Update
		STFS   = 0x34, //Store Floating-Point Single
		STFSU  = 0x35, //Store Floating-Point Single with Update
		STFD   = 0x36, //Store Floating-Point Double
		STFDU  = 0x37, //Store Floating-Point Double with Update
		LFQ    = 0x38, //
		LFQU   = 0x39, //
		G_3a   = 0x3a,
		G_3b   = 0x3b,
		G_3e   = 0x3e,
		G_3f   = 0x3f,
	};

	enum G_04Opcodes
	{
		VADDUBM   = 0x0,
		VMAXUB    = 0x2,
		VRLB      = 0x4,
		VCMPEQUB  = 0x6,
		VMULOUB   = 0x8,
		VADDFP    = 0xa,
		VMRGHB    = 0xc,
		VPKUHUM   = 0xe,
		VADDUHM   = 0x40,
		VMAXUH    = 0x42,
		VRLH      = 0x44,
		VCMPEQUH  = 0x46,
		VMULOUH   = 0x48,
		VSUBFP    = 0x4a,
		VMRGHH    = 0x4c,
		VPKUWUM   = 0x4e,
		VADDUWM   = 0x80,
		VMAXUW    = 0x82,
		VRLW      = 0x84,
		VCMPEQUW  = 0x86,
		VMRGHW    = 0x8c,
		VPKUHUS   = 0x8e,
		VCMPEQFP  = 0xc6,
		VPKUWUS   = 0xce,
		VMAXSB    = 0x102,
		VSLB      = 0x104,
		VMULOSB   = 0x108,
		VREFP     = 0x10a,
		VMRGLB    = 0x10c,
		VPKSHUS   = 0x10e,
		VMAXSH    = 0x142,
		VSLH      = 0x144,
		VMULOSH   = 0x148,
		VRSQRTEFP = 0x14a,
		VMRGLH    = 0x14c,
		VPKSWUS   = 0x14e,
		VADDCUW   = 0x180,
		VMAXSW    = 0x182,
		VSLW      = 0x184,
		VEXPTEFP  = 0x18a,
		VMRGLW    = 0x18c,
		VPKSHSS   = 0x18e,
		VSL       = 0x1c4,
		VCMPGEFP  = 0x1c6,
		VLOGEFP   = 0x1ca,
		VPKSWSS   = 0x1ce,
		VADDUBS   = 0x200,
		VMINUB    = 0x202,
		VSRB      = 0x204,
		VCMPGTUB  = 0x206,
		VMULEUB   = 0x208,
		VRFIN     = 0x20a,
		VSPLTB    = 0x20c,
		VUPKHSB   = 0x20e,
		VADDUHS   = 0x240,
		VMINUH    = 0x242,
		VSRH      = 0x244,
		VCMPGTUH  = 0x246,
		VMULEUH   = 0x248,
		VRFIZ     = 0x24a,
		VSPLTH    = 0x24c,
		VUPKHSH   = 0x24e,
		VADDUWS   = 0x280,
		VMINUW    = 0x282,
		VSRW      = 0x284,
		VCMPGTUW  = 0x286,
		VRFIP     = 0x28a,
		VSPLTW    = 0x28c,
		VUPKLSB   = 0x28e,
		VSR       = 0x2c4,
		VCMPGTFP  = 0x2c6,
		VRFIM     = 0x2ca,
		VUPKLSH   = 0x2ce,
		VADDSBS   = 0x300,
		VMINSB    = 0x302,
		VSRAB     = 0x304,
		VCMPGTSB  = 0x306,
		VMULESB   = 0x308,
		VCFUX     = 0x30a,
		VSPLTISB  = 0x30c,
		VPKPX     = 0x30e,
		VADDSHS   = 0x340,
		VMINSH    = 0x342,
		VSRAH     = 0x344,
		VCMPGTSH  = 0x346,
		VMULESH   = 0x348,
		VCFSX     = 0x34a,
		VSPLTISH  = 0x34c,
		VUPKHPX   = 0x34e,
		VADDSWS   = 0x380,
		VMINSW    = 0x382,
		VSRAW     = 0x384,
		VCMPGTSW  = 0x386,
		VCTUXS    = 0x38a,
		VSPLTISW  = 0x38c,
		VCMPBFP   = 0x3c6,
		VCTSXS    = 0x3ca,
		VUPKLPX   = 0x3ce,
		VSUBUBM   = 0x400,
		VAVGUB    = 0x402,
		VAND      = 0x404,
		VCMPEQUB_ = 0x406,
		VMAXFP    = 0x40a,
		VSLO      = 0x40c,
		VSUBUHM   = 0x440,
		VAVGUH    = 0x442,
		VANDC     = 0x444,
		VCMPEQUH_ = 0x446,
		VMINFP    = 0x44a,
		VSRO      = 0x44c,
		VSUBUWM   = 0x480,
		VAVGUW    = 0x482,
		VOR       = 0x484,
		VCMPEQUW_ = 0x486,
		VXOR      = 0x4c4,
		VCMPEQFP_ = 0x4c6,
		VAVGSB    = 0x502,
		VNOR      = 0x504,
		VAVGSH    = 0x542,
		VSUBCUW   = 0x580,
		VAVGSW    = 0x582,
		VCMPGEFP_ = 0x5c6,
		VSUBUBS   = 0x600,
		MFVSCR    = 0x604,
		VCMPGTUB_ = 0x606,
		VSUM4UBS  = 0x608,
		VSUBUHS   = 0x640,
		MTVSCR    = 0x644,
		VCMPGTUH_ = 0x646,
		VSUM4SHS  = 0x648,
		VSUBUWS   = 0x680,
		VCMPGTUW_ = 0x686,
		VSUM2SWS  = 0x688,
		VCMPGTFP_ = 0x6c6,
		VSUBSBS   = 0x700,
		VCMPGTSB_ = 0x706,
		VSUM4SBS  = 0x708,
		VSUBSHS   = 0x740,
		VCMPGTSH_ = 0x746,
		VSUBSWS   = 0x780,
		VCMPGTSW_ = 0x786,
		VSUMSWS   = 0x788,
		VCMPBFP_  = 0x7c6,
	};

	enum G_04_VA_Opcodes
	{
		VMHADDSHS  = 0x20,
		VMHRADDSHS = 0x21,
		VMLADDUHM  = 0x22,
		VMSUMUBM   = 0x24,
		VMSUMMBM   = 0x25,
		VMSUMUHM   = 0x26,
		VMSUMUHS   = 0x27,
		VMSUMSHM   = 0x28,
		VMSUMSHS   = 0x29,
		VSEL       = 0x2a,
		VPERM      = 0x2b,
		VSLDOI     = 0x2c,
		VMADDFP    = 0x2e,
		VNMSUBFP   = 0x2f,
	};

	enum G_13Opcodes //Field 21 - 30
	{
		MCRF   = 0x000,
		BCLR   = 0x010,
		CRNOR  = 0x021,
		CRANDC = 0x081,
		ISYNC  = 0x096,
		CRXOR  = 0x0c1,
		CRNAND = 0x0e1,
		CRAND  = 0x101,
		CREQV  = 0x121,
		CRORC  = 0x1a1,
		CROR   = 0x1c1,
		BCCTR  = 0x210,
	};

	enum G_1eOpcodes //Field 27 - 29
	{
		RLDICL  = 0x0,
		RLDICR  = 0x1,
		RLDIC   = 0x2,
		RLDIMI  = 0x3,
		RLDC_LR = 0x4,
	};

	enum G_1fOpcodes //Field 21 - 30
	{
		CMP    = 0x000,
		TW     = 0x004,
		LVSL   = 0x006, //Load Vector for Shift Left
		LVEBX  = 0x007, //Load Vector Element Byte Indexed
		SUBFC  = 0x008, //Subtract from Carrying
		MULHDU = 0x009,
		ADDC   = 0x00a,
		MULHWU = 0x00b,
		MFOCRF = 0x013,
		LWARX  = 0x014,
		LDX    = 0x015,
		LWZX   = 0x017,
		SLW    = 0x018,
		CNTLZW = 0x01a,
		SLD    = 0x01b,
		AND    = 0x01c,
		CMPL   = 0x020,
		LVSR   = 0x026, //Load Vector for Shift Right
		LVEHX  = 0x027, //Load Vector Element Halfword Indexed
		SUBF   = 0x028,
		LDUX   = 0x035, //Load Doubleword with Update Indexed
		DCBST  = 0x036,
		LWZUX  = 0x037,
		CNTLZD = 0x03a,
		ANDC   = 0x03c,
		TD     = 0x044,
		LVEWX  = 0x047, //Load Vector Element Word Indexed
		MULHD  = 0x049,
		MULHW  = 0x04b,
		LDARX  = 0x054,
		DCBF   = 0x056,
		LBZX   = 0x057,
		LVX    = 0x067, //Load Vector Indexed
		NEG    = 0x068,
		LBZUX  = 0x077,
		NOR    = 0x07c,
		STVEBX = 0x087, //Store Vector Element Byte Indexed
		SUBFE  = 0x088, //Subtract from Extended
		ADDE   = 0x08a,
		MTOCRF = 0x090,
		STDX   = 0x095,
		STWCX_ = 0x096,
		STWX   = 0x097,
		STVEHX = 0x0a7, //Store Vector Element Halfword Indexed
		STDUX  = 0x0b5,
		STWUX  = 0x0b7,
		STVEWX = 0x0c7, //Store Vector Element Word Indexed
		SUBFZE = 0x0c8,
		ADDZE  = 0x0ca,
		STDCX_ = 0x0d6,
		STBX   = 0x0d7,
		STVX   = 0x0e7,
		SUBFME = 0x0e8,
		MULLD  = 0x0e9,
		ADDME  = 0x0ea,
		MULLW  = 0x0eb,
		DCBTST = 0x0f6,
		STBUX  = 0x0f7,
		DOZ    = 0x108,
		ADD    = 0x10a,
		DCBT   = 0x116,
		LHZX   = 0x117,
		EQV    = 0x11c,
		ECIWX  = 0x136,
		LHZUX  = 0x137,
		XOR    = 0x13c,
		MFSPR  = 0x153,
		LWAX   = 0x155,
		DST    = 0x156, //Data Stream Touch
		LHAX   = 0x157,
		LVXL   = 0x167, //Load Vector Indexed Last
		MFTB   = 0x173,
		LWAUX  = 0x175,
		DSTST  = 0x176, //Data Stream Touch for Store
		LHAUX  = 0x177,
		STHX   = 0x197, //Store Halfword Indexed
		ORC    = 0x19c, //OR with Complement
		ECOWX  = 0x1b6,
		STHUX  = 0x1b7,
		OR     = 0x1bc,
		DIVDU  = 0x1c9,
		DIVWU  = 0x1cb,
		MTSPR  = 0x1d3,
		DCBI   = 0x1d6,
		NAND   = 0x1dc,
		STVXL  = 0x1e7, //Store Vector Indexed Last
		DIVD   = 0x1e9,
		DIVW   = 0x1eb,
		LVLX   = 0x207, //Load Vector Left Indexed
		LDBRX  = 0x214,
		LSWX   = 0x215,
		LWBRX  = 0x216,
		LFSX   = 0x217,
		SRW    = 0x218,
		SRD    = 0x21b,
		LVRX   = 0x227, //Load Vector Right Indexed
		LFSUX  = 0x237,
		LSWI   = 0x255,
		SYNC   = 0x256,
		LFDX   = 0x257,
		LFDUX  = 0x277,
		STVLX  = 0x287, //Store Vector Left Indexed
		STSWX  = 0x295,
		STWBRX = 0x296,
		STFSX  = 0x297,
		STVRX  = 0x2a7, //Store Vector Right Indexed
		STFSUX = 0x2b7,
		STSWI  = 0x2d5,
		STFDX  = 0x2d7, //Store Floating-Point Double Indexed
		STFDUX = 0x2f7,
		LVLXL  = 0x307, //Load Vector Left Indexed Last
		LHBRX  = 0x316,
		SRAW   = 0x318,
		SRAD   = 0x31a,
		LVRXL  = 0x327, //Load Vector Right Indexed Last
		DSS    = 0x336, //Data Stream Stop
		SRAWI  = 0x338,
		SRADI1 = 0x33a, //sh_5 == 0
		SRADI2 = 0x33b, //sh_5 != 0
		EIEIO  = 0x356,
		STVLXL = 0x387, //Store Vector Left Indexed Last
		STHBRX = 0x396,
		EXTSH  = 0x39a,
		STVRXL = 0x3a7, //Store Vector Right Indexed Last
		EXTSB  = 0x3ba,
		STFIWX = 0x3d7,
		EXTSW  = 0x3da,
		ICBI   = 0x3d6,
		DCBZ   = 0x3f6,
	};

	enum G_3aOpcodes //Field 30 - 31
	{
		LD  = 0x0,
		LDU = 0x1,
		LWA = 0x2,
	};

	enum G_3bOpcodes //Field 26 - 30
	{
		FDIVS   = 0x12,
		FSUBS   = 0x14,
		FADDS   = 0x15,
		FSQRTS  = 0x16,
		FRES    = 0x18,
		FMULS   = 0x19,
		FMSUBS  = 0x1c,
		FMADDS  = 0x1d,
		FNMSUBS = 0x1e,
		FNMADDS = 0x1f,
	};

	enum G_3eOpcodes //Field 30 - 31
	{
		STD     = 0x0,
		STDU    = 0x1,
	};

	enum G_3fOpcodes //Field 21 - 30
	{	
		MTFSB1  = 0x026,
		MCRFS   = 0x040,
		MTFSB0  = 0x046,
		MTFSFI  = 0x086,
		MFFS    = 0x247,
		MTFSF   = 0x2c7,

		FCMPU   = 0x000,
		FRSP    = 0x00c,
		FCTIW   = 0x00e,
		FCTIWZ  = 0x00f,
		FDIV    = 0x012,
		FSUB    = 0x014,
		FADD    = 0x015,
		FSQRT   = 0x016,
		FSEL    = 0x017,
		FMUL    = 0x019,
		FRSQRTE = 0x01a,
		FMSUB   = 0x01c,
		FMADD   = 0x01d,
		FNMSUB  = 0x01e,
		FNMADD  = 0x01f,
		FCMPO   = 0x020,
		FNEG    = 0x028,
		FMR     = 0x048,
		FNABS   = 0x088,
		FABS    = 0x108,
		FCTID   = 0x32e,
		FCTIDZ  = 0x32f,
		FCFID   = 0x34e,
	};
}

class PPUOpcodes
{
public:
	static u64 branchTarget(const u64 pc, const u64 imm)
	{
		return pc + (imm & ~0x3ULL);
	}

	virtual void NULL_OP() = 0;
	virtual void NOP() = 0;

	virtual void TDI(u32 to, u32 ra, s32 simm16) = 0;
	virtual void TWI(u32 to, u32 ra, s32 simm16) = 0;

	virtual void MFVSCR(u32 vd) = 0;
	virtual void MTVSCR(u32 vb) = 0;
	virtual void VADDCUW(u32 vd, u32 va, u32 vb) = 0;
	virtual void VADDFP(u32 vd, u32 va, u32 vb) = 0;
	virtual void VADDSBS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VADDSHS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VADDSWS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VADDUBM(u32 vd, u32 va, u32 vb) = 0;
	virtual void VADDUBS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VADDUHM(u32 vd, u32 va, u32 vb) = 0;
	virtual void VADDUHS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VADDUWM(u32 vd, u32 va, u32 vb) = 0;
	virtual void VADDUWS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VAND(u32 vd, u32 va, u32 vb) = 0;
	virtual void VANDC(u32 vd, u32 va, u32 vb) = 0;
	virtual void VAVGSB(u32 vd, u32 va, u32 vb) = 0;
	virtual void VAVGSH(u32 vd, u32 va, u32 vb) = 0;
	virtual void VAVGSW(u32 vd, u32 va, u32 vb) = 0;
	virtual void VAVGUB(u32 vd, u32 va, u32 vb) = 0;
	virtual void VAVGUH(u32 vd, u32 va, u32 vb) = 0;
	virtual void VAVGUW(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCFSX(u32 vd, u32 uimm5, u32 vb) = 0;
	virtual void VCFUX(u32 vd, u32 uimm5, u32 vb) = 0;
	virtual void VCMPBFP(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPBFP_(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPEQFP(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPEQFP_(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPEQUB(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPEQUB_(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPEQUH(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPEQUH_(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPEQUW(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPEQUW_(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPGEFP(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPGEFP_(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPGTFP(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPGTFP_(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPGTSB(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPGTSB_(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPGTSH(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPGTSH_(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPGTSW(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPGTSW_(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPGTUB(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPGTUB_(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPGTUH(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPGTUH_(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPGTUW(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCMPGTUW_(u32 vd, u32 va, u32 vb) = 0;
	virtual void VCTSXS(u32 vd, u32 uimm5, u32 vb) = 0;
	virtual void VCTUXS(u32 vd, u32 uimm5, u32 vb) = 0;
	virtual void VEXPTEFP(u32 vd, u32 vb) = 0;
	virtual void VLOGEFP(u32 vd, u32 vb) = 0;
	virtual void VMADDFP(u32 vd, u32 va, u32 vc, u32 vb) = 0;
	virtual void VMAXFP(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMAXSB(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMAXSH(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMAXSW(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMAXUB(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMAXUH(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMAXUW(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMHADDSHS(u32 vd, u32 va, u32 vb, u32 vc) = 0;
	virtual void VMHRADDSHS(u32 vd, u32 va, u32 vb, u32 vc) = 0;
	virtual void VMINFP(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMINSB(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMINSH(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMINSW(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMINUB(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMINUH(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMINUW(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMLADDUHM(u32 vd, u32 va, u32 vb, u32 vc) = 0;
	virtual void VMRGHB(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMRGHH(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMRGHW(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMRGLB(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMRGLH(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMRGLW(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMSUMMBM(u32 vd, u32 va, u32 vb, u32 vc) = 0;
	virtual void VMSUMSHM(u32 vd, u32 va, u32 vb, u32 vc) = 0;
	virtual void VMSUMSHS(u32 vd, u32 va, u32 vb, u32 vc) = 0;
	virtual void VMSUMUBM(u32 vd, u32 va, u32 vb, u32 vc) = 0;
	virtual void VMSUMUHM(u32 vd, u32 va, u32 vb, u32 vc) = 0;
	virtual void VMSUMUHS(u32 vd, u32 va, u32 vb, u32 vc) = 0;
	virtual void VMULESB(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMULESH(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMULEUB(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMULEUH(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMULOSB(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMULOSH(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMULOUB(u32 vd, u32 va, u32 vb) = 0;
	virtual void VMULOUH(u32 vd, u32 va, u32 vb) = 0;
	virtual void VNMSUBFP(u32 vd, u32 va, u32 vc, u32 vb) = 0;
	virtual void VNOR(u32 vd, u32 va, u32 vb) = 0;
	virtual void VOR(u32 vd, u32 va, u32 vb) = 0;
	virtual void VPERM(u32 vd, u32 va, u32 vb, u32 vc) = 0;
	virtual void VPKPX(u32 vd, u32 va, u32 vb) = 0;
	virtual void VPKSHSS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VPKSHUS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VPKSWSS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VPKSWUS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VPKUHUM(u32 vd, u32 va, u32 vb) = 0;
	virtual void VPKUHUS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VPKUWUM(u32 vd, u32 va, u32 vb) = 0;
	virtual void VPKUWUS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VREFP(u32 vd, u32 vb) = 0;
	virtual void VRFIM(u32 vd, u32 vb) = 0;
	virtual void VRFIN(u32 vd, u32 vb) = 0;
	virtual void VRFIP(u32 vd, u32 vb) = 0;
	virtual void VRFIZ(u32 vd, u32 vb) = 0;
	virtual void VRLB(u32 vd, u32 va, u32 vb) = 0;
	virtual void VRLH(u32 vd, u32 va, u32 vb) = 0;
	virtual void VRLW(u32 vd, u32 va, u32 vb) = 0;
	virtual void VRSQRTEFP(u32 vd, u32 vb) = 0;
	virtual void VSEL(u32 vd, u32 va, u32 vb, u32 vc) = 0;
	virtual void VSL(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSLB(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSLDOI(u32 vd, u32 va, u32 vb, u32 sh) = 0;
	virtual void VSLH(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSLO(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSLW(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSPLTB(u32 vd, u32 uimm5, u32 vb) = 0;
	virtual void VSPLTH(u32 vd, u32 uimm5, u32 vb) = 0;
	virtual void VSPLTISB(u32 vd, s32 simm5) = 0;
	virtual void VSPLTISH(u32 vd, s32 simm5) = 0;
	virtual void VSPLTISW(u32 vd, s32 simm5) = 0;
	virtual void VSPLTW(u32 vd, u32 uimm5, u32 vb) = 0;
	virtual void VSR(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSRAB(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSRAH(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSRAW(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSRB(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSRH(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSRO(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSRW(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSUBCUW(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSUBFP(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSUBSBS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSUBSHS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSUBSWS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSUBUBM(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSUBUBS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSUBUHM(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSUBUHS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSUBUWM(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSUBUWS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSUMSWS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSUM2SWS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSUM4SBS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSUM4SHS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VSUM4UBS(u32 vd, u32 va, u32 vb) = 0;
	virtual void VUPKHPX(u32 vd, u32 vb) = 0;
	virtual void VUPKHSB(u32 vd, u32 vb) = 0;
	virtual void VUPKHSH(u32 vd, u32 vb) = 0;
	virtual void VUPKLPX(u32 vd, u32 vb) = 0;
	virtual void VUPKLSB(u32 vd, u32 vb) = 0;
	virtual void VUPKLSH(u32 vd, u32 vb) = 0;
	virtual void VXOR(u32 vd, u32 va, u32 vb) = 0;
	virtual void MULLI(u32 rd, u32 ra, s32 simm16) = 0;
	virtual void SUBFIC(u32 rd, u32 ra, s32 simm16) = 0;
	virtual void CMPLI(u32 bf, u32 l, u32 ra, u32 uimm16) = 0;
	virtual void CMPI(u32 bf, u32 l, u32 ra, s32 simm16) = 0;
	virtual void ADDIC(u32 rd, u32 ra, s32 simm16) = 0;
	virtual void ADDIC_(u32 rd, u32 ra, s32 simm16) = 0;
	virtual void ADDI(u32 rd, u32 ra, s32 simm16) = 0;
	virtual void ADDIS(u32 rd, u32 ra, s32 simm16) = 0;
	virtual void BC(u32 bo, u32 bi, s32 bd, u32 aa, u32 lk) = 0;
	virtual void SC(u32 sc_code) = 0;
	virtual void B(s32 ll, u32 aa, u32 lk) = 0;
	virtual void MCRF(u32 crfd, u32 crfs) = 0;
	virtual void BCLR(u32 bo, u32 bi, u32 bh, u32 lk) = 0;
	virtual void CRNOR(u32 bt, u32 ba, u32 bb) = 0;
	virtual void CRANDC(u32 bt, u32 ba, u32 bb) = 0;
	virtual void ISYNC() = 0;
	virtual void CRXOR(u32 bt, u32 ba, u32 bb) = 0;
	virtual void CRNAND(u32 bt, u32 ba, u32 bb) = 0;
	virtual void CRAND(u32 bt, u32 ba, u32 bb) = 0;
	virtual void CREQV(u32 bt, u32 ba, u32 bb) = 0;
	virtual void CRORC(u32 bt, u32 ba, u32 bb) = 0;
	virtual void CROR(u32 bt, u32 ba, u32 bb) = 0;
	virtual void BCCTR(u32 bo, u32 bi, u32 bh, u32 lk) = 0;
	virtual void RLWIMI(u32 ra, u32 rs, u32 sh, u32 mb, u32 me, bool rc) = 0;
	virtual void RLWINM(u32 ra, u32 rs, u32 sh, u32 mb, u32 me, bool rc) = 0;
	virtual void RLWNM(u32 ra, u32 rs, u32 rb, u32 MB, u32 ME, bool rc) = 0;
	virtual void ORI(u32 rs, u32 ra, u32 uimm16) = 0;
	virtual void ORIS(u32 rs, u32 ra, u32 uimm16) = 0;
	virtual void XORI(u32 ra, u32 rs, u32 uimm16) = 0;
	virtual void XORIS(u32 ra, u32 rs, u32 uimm16) = 0;
	virtual void ANDI_(u32 ra, u32 rs, u32 uimm16) = 0;
	virtual void ANDIS_(u32 ra, u32 rs, u32 uimm16) = 0;
	virtual void RLDICL(u32 ra, u32 rs, u32 sh, u32 mb, bool rc) = 0;
	virtual void RLDICR(u32 ra, u32 rs, u32 sh, u32 me, bool rc) = 0;
	virtual void RLDIC(u32 ra, u32 rs, u32 sh, u32 mb, bool rc) = 0;
	virtual void RLDIMI(u32 ra, u32 rs, u32 sh, u32 mb, bool rc) = 0;
	virtual void RLDC_LR(u32 ra, u32 rs, u32 rb, u32 m_eb, bool is_r, bool rc) = 0;
	virtual void CMP(u32 crfd, u32 l, u32 ra, u32 rb) = 0;
	virtual void TW(u32 to, u32 ra, u32 rb) = 0;
	virtual void LVSL(u32 vd, u32 ra, u32 rb) = 0;
	virtual void LVEBX(u32 vd, u32 ra, u32 rb) = 0;
	virtual void SUBFC(u32 rd, u32 ra, u32 rb, u32 oe, bool rc) = 0;
	virtual void MULHDU(u32 rd, u32 ra, u32 rb, bool rc) = 0;
	virtual void ADDC(u32 rd, u32 ra, u32 rb, u32 oe, bool rc) = 0;
	virtual void MULHWU(u32 rd, u32 ra, u32 rb, bool rc) = 0;
	virtual void MFOCRF(u32 a, u32 rd, u32 crm) = 0;
	virtual void LWARX(u32 rd, u32 ra, u32 rb) = 0;
	virtual void LDX(u32 ra, u32 rs, u32 rb) = 0;
	virtual void LWZX(u32 rd, u32 ra, u32 rb) = 0;
	virtual void SLW(u32 ra, u32 rs, u32 rb, bool rc) = 0;
	virtual void CNTLZW(u32 ra, u32 rs, bool rc) = 0;
	virtual void SLD(u32 ra, u32 rs, u32 rb, bool rc) = 0;
	virtual void AND(u32 ra, u32 rs, u32 rb, bool rc) = 0;
	virtual void CMPL(u32 bf, u32 l, u32 ra, u32 rb) = 0;
	virtual void LVSR(u32 vd, u32 ra, u32 rb) = 0;
	virtual void LVEHX(u32 vd, u32 ra, u32 rb) = 0;
	virtual void SUBF(u32 rd, u32 ra, u32 rb, u32 oe, bool rc) = 0;
	virtual void LDUX(u32 rd, u32 ra, u32 rb) = 0;
	virtual void DCBST(u32 ra, u32 rb) = 0;
	virtual void LWZUX(u32 rd, u32 ra, u32 rb) = 0;
	virtual void CNTLZD(u32 ra, u32 rs, bool rc) = 0;
	virtual void ANDC(u32 ra, u32 rs, u32 rb, bool rc) = 0;
	virtual void TD(u32 to, u32 ra, u32 rb) = 0;
	virtual void LVEWX(u32 vd, u32 ra, u32 rb) = 0;
	virtual void MULHD(u32 rd, u32 ra, u32 rb, bool rc) = 0;
	virtual void MULHW(u32 rd, u32 ra, u32 rb, bool rc) = 0;
	virtual void LDARX(u32 rd, u32 ra, u32 rb) = 0;
	virtual void DCBF(u32 ra, u32 rb) = 0;
	virtual void LBZX(u32 rd, u32 ra, u32 rb) = 0;
	virtual void LVX(u32 vd, u32 ra, u32 rb) = 0;
	virtual void NEG(u32 rd, u32 ra, u32 oe, bool rc) = 0;
	virtual void LBZUX(u32 rd, u32 ra, u32 rb) = 0;
	virtual void NOR(u32 ra, u32 rs, u32 rb, bool rc) = 0;
	virtual void STVEBX(u32 vs, u32 ra, u32 rb) = 0;
	virtual void SUBFE(u32 rd, u32 ra, u32 rb, u32 oe, bool rc) = 0;
	virtual void ADDE(u32 rd, u32 ra, u32 rb, u32 oe, bool rc) = 0;
	virtual void MTOCRF(u32 l, u32 crm, u32 rs) = 0;
	virtual void STDX(u32 rs, u32 ra, u32 rb) = 0;
	virtual void STWCX_(u32 rs, u32 ra, u32 rb) = 0;
	virtual void STWX(u32 rs, u32 ra, u32 rb) = 0;
	virtual void STVEHX(u32 vs, u32 ra, u32 rb) = 0;
	virtual void STDUX(u32 rs, u32 ra, u32 rb) = 0;
	virtual void STWUX(u32 rs, u32 ra, u32 rb) = 0;
	virtual void STVEWX(u32 vs, u32 ra, u32 rb) = 0;
	virtual void SUBFZE(u32 rd, u32 ra, u32 oe, bool rc) = 0;
	virtual void ADDZE(u32 rd, u32 ra, u32 oe, bool rc) = 0;
	virtual void STDCX_(u32 rs, u32 ra, u32 rb) = 0;
	virtual void STBX(u32 rs, u32 ra, u32 rb) = 0;
	virtual void STVX(u32 vs, u32 ra, u32 rb) = 0;
	virtual void MULLD(u32 rd, u32 ra, u32 rb, u32 oe, bool rc) = 0;
	virtual void SUBFME(u32 rd, u32 ra, u32 oe, bool rc) = 0;
	virtual void ADDME(u32 rd, u32 ra, u32 oe, bool rc) = 0;
	virtual void MULLW(u32 rd, u32 ra, u32 rb, u32 oe, bool rc) = 0;
	virtual void DCBTST(u32 ra, u32 rb, u32 th) = 0;
	virtual void STBUX(u32 rs, u32 ra, u32 rb) = 0;
	virtual void ADD(u32 rd, u32 ra, u32 rb, u32 oe, bool rc) = 0;
	virtual void DCBT(u32 ra, u32 rb, u32 th) = 0;
	virtual void LHZX(u32 rd, u32 ra, u32 rb) = 0;
	virtual void EQV(u32 ra, u32 rs, u32 rb, bool rc) = 0;
	virtual void ECIWX(u32 rd, u32 ra, u32 rb) = 0;
	virtual void LHZUX(u32 rd, u32 ra, u32 rb) = 0;
	virtual void XOR(u32 rs, u32 ra, u32 rb, bool rc) = 0;
	virtual void MFSPR(u32 rd, u32 spr) = 0;
	virtual void LWAX(u32 rd, u32 ra, u32 rb) = 0;
	virtual void DST(u32 ra, u32 rb, u32 strm, u32 t) = 0;
	virtual void LHAX(u32 rd, u32 ra, u32 rb) = 0;
	virtual void LVXL(u32 vd, u32 ra, u32 rb) = 0;
	virtual void MFTB(u32 rd, u32 spr) = 0;
	virtual void LWAUX(u32 rd, u32 ra, u32 rb) = 0;
	virtual void DSTST(u32 ra, u32 rb, u32 strm, u32 t) = 0;
	virtual void LHAUX(u32 rd, u32 ra, u32 rb) = 0;
	virtual void STHX(u32 rs, u32 ra, u32 rb) = 0;
	virtual void ORC(u32 rs, u32 ra, u32 rb, bool rc) = 0;
	virtual void ECOWX(u32 rs, u32 ra, u32 rb) = 0;
	virtual void STHUX(u32 rs, u32 ra, u32 rb) = 0;
	virtual void OR(u32 ra, u32 rs, u32 rb, bool rc) = 0;
	virtual void DIVDU(u32 rd, u32 ra, u32 rb, u32 oe, bool rc) = 0;
	virtual void DIVWU(u32 rd, u32 ra, u32 rb, u32 oe, bool rc) = 0;
	virtual void MTSPR(u32 spr, u32 rs) = 0;
	//DCBI
	virtual void NAND(u32 ra, u32 rs, u32 rb, bool rc) = 0;
	virtual void STVXL(u32 vs, u32 ra, u32 rb) = 0;
	virtual void DIVD(u32 rd, u32 ra, u32 rb, u32 oe, bool rc) = 0;
	virtual void DIVW(u32 rd, u32 ra, u32 rb, u32 oe, bool rc) = 0;
	virtual void LVLX(u32 vd, u32 ra, u32 rb) = 0;
	virtual void LDBRX(u32 rd, u32 ra, u32 rb) = 0;
	virtual void LSWX(u32 rd, u32 ra, u32 rb) = 0;
	virtual void LWBRX(u32 rd, u32 ra, u32 rb) = 0;
	virtual void LFSX(u32 frd, u32 ra, u32 rb) = 0;
	virtual void SRW(u32 ra, u32 rs, u32 rb, bool rc) = 0;
	virtual void SRD(u32 ra, u32 rs, u32 rb, bool rc) = 0;
	virtual void LVRX(u32 vd, u32 ra, u32 rb) = 0;
	virtual void LSWI(u32 rd, u32 ra, u32 nb) = 0;
	virtual void LFSUX(u32 frd, u32 ra, u32 rb) = 0;
	virtual void SYNC(u32 l) = 0;
	virtual void LFDX(u32 frd, u32 ra, u32 rb) = 0;
	virtual void LFDUX(u32 frd, u32 ra, u32 rb) = 0;
	virtual void STVLX(u32 vs, u32 ra, u32 rb) = 0;
	virtual void STSWX(u32 rs, u32 ra, u32 rb) = 0;
	virtual void STWBRX(u32 rs, u32 ra, u32 rb) = 0;
	virtual void STFSX(u32 frs, u32 ra, u32 rb) = 0;
	virtual void STVRX(u32 vs, u32 ra, u32 rb) = 0;
	virtual void STFSUX(u32 frs, u32 ra, u32 rb) = 0;
	virtual void STSWI(u32 rd, u32 ra, u32 nb) = 0;
	virtual void STFDX(u32 frs, u32 ra, u32 rb) = 0;
	virtual void STFDUX(u32 frs, u32 ra, u32 rb) = 0;
	virtual void LVLXL(u32 vd, u32 ra, u32 rb) = 0;
	virtual void LHBRX(u32 rd, u32 ra, u32 rb) = 0;
	virtual void SRAW(u32 ra, u32 rs, u32 rb, bool rc) = 0;
	virtual void SRAD(u32 ra, u32 rs, u32 rb, bool rc) = 0;
	virtual void LVRXL(u32 vd, u32 ra, u32 rb) = 0;
	virtual void DSS(u32 strm, u32 a) = 0;
	virtual void SRAWI(u32 ra, u32 rs, u32 sh, bool rc) = 0;
	virtual void SRADI1(u32 ra, u32 rs, u32 sh, bool rc) = 0;
	virtual void SRADI2(u32 ra, u32 rs, u32 sh, bool rc) = 0;
	virtual void EIEIO() = 0;
	virtual void STVLXL(u32 vs, u32 ra, u32 rb) = 0;
	virtual void STHBRX(u32 rs, u32 ra, u32 rb) = 0;
	virtual void EXTSH(u32 ra, u32 rs, bool rc) = 0;
	virtual void STVRXL(u32 sd, u32 ra, u32 rb) = 0;
	virtual void EXTSB(u32 ra, u32 rs, bool rc) = 0;
	virtual void STFIWX(u32 frs, u32 ra, u32 rb) = 0;
	virtual void EXTSW(u32 ra, u32 rs, bool rc) = 0;
	//ICBI
	virtual void DCBZ(u32 ra, u32 rb) = 0;
	virtual void LWZ(u32 rd, u32 ra, s32 d) = 0;
	virtual void LWZU(u32 rd, u32 ra, s32 d) = 0;
	virtual void LBZ(u32 rd, u32 ra, s32 d) = 0;
	virtual void LBZU(u32 rd, u32 ra, s32 d) = 0;
	virtual void STW(u32 rs, u32 ra, s32 d) = 0;
	virtual void STWU(u32 rs, u32 ra, s32 d) = 0;
	virtual void STB(u32 rs, u32 ra, s32 d) = 0;
	virtual void STBU(u32 rs, u32 ra, s32 d) = 0;
	virtual void LHZ(u32 rd, u32 ra, s32 d) = 0;
	virtual void LHZU(u32 rd, u32 ra, s32 d) = 0;
	virtual void LHA(u32 rs, u32 ra, s32 d) = 0;
	virtual void LHAU(u32 rs, u32 ra, s32 d) = 0;
	virtual void STH(u32 rs, u32 ra, s32 d) = 0;
	virtual void STHU(u32 rs, u32 ra, s32 d) = 0;
	virtual void LMW(u32 rd, u32 ra, s32 d) = 0;
	virtual void STMW(u32 rs, u32 ra, s32 d) = 0;
	virtual void LFS(u32 frd, u32 ra, s32 d) = 0;
	virtual void LFSU(u32 frd, u32 ra, s32 d) = 0;
	virtual void LFD(u32 frd, u32 ra, s32 d) = 0;
	virtual void LFDU(u32 frd, u32 ra, s32 d) = 0;
	virtual void STFS(u32 frs, u32 ra, s32 d) = 0;
	virtual void STFSU(u32 frs, u32 ra, s32 d) = 0;
	virtual void STFD(u32 frs, u32 ra, s32 d) = 0;
	virtual void STFDU(u32 frs, u32 ra, s32 d) = 0;
	virtual void LD(u32 rd, u32 ra, s32 ds) = 0;
	virtual void LDU(u32 rd, u32 ra, s32 ds) = 0;
	virtual void LWA(u32 rd, u32 ra, s32 ds) = 0;
	virtual void FDIVS(u32 frd, u32 fra, u32 frb, bool rc) = 0;
	virtual void FSUBS(u32 frd, u32 fra, u32 frb, bool rc) = 0;
	virtual void FADDS(u32 frd, u32 fra, u32 frb, bool rc) = 0;
	virtual void FSQRTS(u32 frd, u32 frb, bool rc) = 0;
	virtual void FRES(u32 frd, u32 frb, bool rc) = 0;
	virtual void FMULS(u32 frd, u32 fra, u32 frc, bool rc) = 0;
	virtual void FMADDS(u32 frd, u32 fra, u32 frc, u32 frb, bool rc) = 0;
	virtual void FMSUBS(u32 frd, u32 fra, u32 frc, u32 frb, bool rc) = 0;
	virtual void FNMSUBS(u32 frd, u32 fra, u32 frc, u32 frb, bool rc) = 0;
	virtual void FNMADDS(u32 frd, u32 fra, u32 frc, u32 frb, bool rc) = 0;
	virtual void STD(u32 rs, u32 ra, s32 ds) = 0;
	virtual void STDU(u32 rs, u32 ra, s32 ds) = 0;
	virtual void MTFSB1(u32 bt, bool rc) = 0;
	virtual void MCRFS(u32 bf, u32 bfa) = 0;
	virtual void MTFSB0(u32 bt, bool rc) = 0;
	virtual void MTFSFI(u32 crfd, u32 i, bool rc) = 0;
	virtual void MFFS(u32 frd, bool rc) = 0;
	virtual void MTFSF(u32 flm, u32 frb, bool rc) = 0;

	virtual void FCMPU(u32 bf, u32 fra, u32 frb) = 0;
	virtual void FRSP(u32 frd, u32 frb, bool rc) = 0;
	virtual void FCTIW(u32 frd, u32 frb, bool rc) = 0;
	virtual void FCTIWZ(u32 frd, u32 frb, bool rc) = 0;
	virtual void FDIV(u32 frd, u32 fra, u32 frb, bool rc) = 0;
	virtual void FSUB(u32 frd, u32 fra, u32 frb, bool rc) = 0;
	virtual void FADD(u32 frd, u32 fra, u32 frb, bool rc) = 0;
	virtual void FSQRT(u32 frd, u32 frb, bool rc) = 0;
	virtual void FSEL(u32 frd, u32 fra, u32 frc, u32 frb, bool rc) = 0;
	virtual void FMUL(u32 frd, u32 fra, u32 frc, bool rc) = 0;
	virtual void FRSQRTE(u32 frd, u32 frb, bool rc) = 0;
	virtual void FMSUB(u32 frd, u32 fra, u32 frc, u32 frb, bool rc) = 0;
	virtual void FMADD(u32 frd, u32 fra, u32 frc, u32 frb, bool rc) = 0;
	virtual void FNMSUB(u32 frd, u32 fra, u32 frc, u32 frb, bool rc) = 0;
	virtual void FNMADD(u32 frd, u32 fra, u32 frc, u32 frb, bool rc) = 0;
	virtual void FCMPO(u32 crfd, u32 fra, u32 frb) = 0;
	virtual void FNEG(u32 frd, u32 frb, bool rc) = 0;
	virtual void FMR(u32 frd, u32 frb, bool rc) = 0;
	virtual void FNABS(u32 frd, u32 frb, bool rc) = 0;
	virtual void FABS(u32 frd, u32 frb, bool rc) = 0;
	virtual void FCTID(u32 frd, u32 frb, bool rc) = 0;
	virtual void FCTIDZ(u32 frd, u32 frb, bool rc) = 0;
	virtual void FCFID(u32 frd, u32 frb, bool rc) = 0;

	virtual void UNK(const u32 code, const u32 opcode, const u32 gcode) = 0;
};
