#ifndef __DEFINE_H__
#define __DEFINE_H__

typedef unsigned char       uch8;
typedef unsigned char       BYTE;
typedef unsigned char       uint8;
typedef signed   char       int8;   // Τ才腹8-bit俱计跑计
typedef unsigned int        uint16; // 礚才腹16-bit俱计跑计
typedef unsigned int        uint;
typedef unsigned int        WORD;
typedef unsigned long       DWORD;
typedef unsigned long       LONG;
typedef signed   int        int16;  // Τ才腹16-bit俱计跑计
typedef unsigned long       uint32; // 礚才腹32-bit俱计跑计
typedef unsigned long       Uint32;
typedef signed   long       int32;  // Τ才腹32-bit俱计跑计
typedef float               fp32;   // 虫弘疊翴计(32bit)
#define BYTEHI(v1)          *(BYTE *)&v1
#define BYTELO(v1)          *(((BYTE *)&v1)+1)
#define LONG_BY3(lv1)       *(BYTE *)&lv1
#define LONG_BY2(lv1)       *(((BYTE *)&lv1)+1)
#define LONG_BY1(lv1)       *(((BYTE *)&lv1)+2)
#define LONG_BY0(lv1)       *(((BYTE *)&lv1)+3)
#define U32_BY3(lv1)       *(BYTE *)&lv1
#define U32_BY2(lv1)       *(((BYTE *)&lv1)+1)
#define U32_BY1(lv1)       *(((BYTE *)&lv1)+2)
#define U32_BY0(lv1)       *(((BYTE *)&lv1)+3)
#define U32_BY32(lv1)      *(uint16 *)&lv1
#define U32_BY10(lv1)      *(((uint16 *)&lv1)+1)


#define XBYTE               ((unsigned char volatile xdata *) 0)
#define XWORD               ((unsigned int  volatile xdata *) 0)

#define CBYTE               ((unsigned char volatile code *) 0)
#define CWORD               ((unsigned int  volatile code *) 0)
#define CLONG               ((unsigned long  volatile code *) 0)
//CBYTE[ROM_PARAMETER_BANK0 + D_STEP_MINIMUM_VE]
//CWORD[ROM_PARAMETER_BANK0/2]

#define WRITE_32_CONST(dest,reg) { \
	U32_BY0(dest) = reg; \
	U32_BY1(dest) = (reg)>>8; \
	U32_BY2(dest) = (reg)>>16; \
	U32_BY3(dest) = (reg)>>24; \
	}
	
#define WRITE_32_VAR(dest,reg) { \
	U32_BY0(dest) = U32_BY0(reg); \
	U32_BY1(dest) = U32_BY1(reg); \
	U32_BY2(dest) = U32_BY2(reg); \
	U32_BY3(dest) = U32_BY3(reg); \
	}

	
#define WRITE_U32_BY3(reg) { \
	U32_BY3(reg)=U32_BY3(reg); \
	}
#define WRITE_U32_BY01(reg) { \
	U32_BY0(reg)=U32_BY0(reg); \
	U32_BY1(reg)=U32_BY1(reg); \
	}	
#define WRITE_U32_BY23(reg) { \
	U32_BY2(reg)=U32_BY2(reg); \
	U32_BY3(reg)=U32_BY3(reg); \
	}
#define WRITE_U32_BY123(reg) { \
    U32_BY1(reg)=U32_BY1(reg); \
	U32_BY2(reg)=U32_BY2(reg); \
	U32_BY3(reg)=U32_BY3(reg); \
	}	

#define WRITE_U32_bits(reg,bitss,v) { \
	U32_BY0(reg) = U32_BY0(reg); \
	reg.bits.bitss = v; \
	WRITE_U32_BY23(reg); \
	}	
#define WRITE_U32_bitsH(reg,bitss,v) { \
	WRITE_U32_BY01(reg); \
	U32_BY2(reg)=U32_BY2(reg); \
	reg.bits.bitss = v; \
	U32_BY3(reg)=U32_BY3(reg); \
	}	
#define WRITE_U32_bits0(reg,bitss) { \
	U32_BY0(reg)=U32_BY0(reg); \
	reg.bits.bitss = 0; \
	WRITE_U32_BY123(reg); \
	}	
#define WRITE_U32_bits0_B1(reg,bitss) { \
	U32_BY0(reg)=U32_BY0(reg); \
	reg.bits.bitss = 0; \
	WRITE_U32_BY23(reg); \
	}
#define WRITE_U32_1bit(reg,bit1,v) { \
	reg.bits.bit1 = v; \
	WRITE_U32_BY123(reg); \
	}	
#define WRITE_U32_1bitB0(reg,bit1,v) { \
	reg.bits.bit1 = v; \
	WRITE_U32_BY123(reg); \
	}
#define WRITE_U32_1bitB1(reg,bit1,v) { \
    U32_BY0(reg)=U32_BY0(reg); \
	reg.bits.bit1 = v; \
	WRITE_U32_BY23(reg); \
	}	
#define WRITE_U32_1bitB2(reg,bit1,v) { \
    WRITE_U32_BY01(reg); \
	reg.bits.bit1 = v; \
	U32_BY3(reg)=U32_BY3(reg); \
	}	
#define WRITE_U32_1bitB3(reg,bit1,v) { \
    WRITE_U32_BY01(reg); \
	U32_BY2(reg)=U32_BY2(reg); \
	reg.bits.bit1 = v; \
	}
	


#endif	// #ifndef __DEFINE_H__