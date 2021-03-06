/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define SFP_REGNUM 64
#define VG_REGNUM 67
#define P12_REGNUM 80
#define R12_REGNUM 12
#define V11_REGNUM 43
#define R29_REGNUM 29
#define V1_REGNUM 33
#define V29_REGNUM 61
#define P15_REGNUM 83
#define R15_REGNUM 15
#define V15_REGNUM 47
#define R21_REGNUM 21
#define V4_REGNUM 36
#define R2_REGNUM 2
#define P1_REGNUM 69
#define R22_REGNUM 22
#define LAST_SAVED_REGNUM 63
#define V21_REGNUM 53
#define EP1_REGNUM 13
#define R18_REGNUM 18
#define V14_REGNUM 46
#define IP0_REGNUM 16
#define V18_REGNUM 50
#define V6_REGNUM 38
#define V8_REGNUM 40
#define R5_REGNUM 5
#define P4_REGNUM 72
#define R25_REGNUM 25
#define V25_REGNUM 57
#define V2_REGNUM 34
#define V24_REGNUM 56
#define V12_REGNUM 44
#define P11_REGNUM 79
#define R11_REGNUM 11
#define V31_REGNUM 63
#define V10_REGNUM 42
#define R9_REGNUM 9
#define P8_REGNUM 76
#define R28_REGNUM 28
#define V0_REGNUM 32
#define V28_REGNUM 60
#define CC_REGNUM 66
#define R10_REGNUM 10
#define P14_REGNUM 82
#define R14_REGNUM 14
#define V13_REGNUM 45
#define SP_REGNUM 31
#define V3_REGNUM 35
#define R1_REGNUM 1
#define P0_REGNUM 68
#define R20_REGNUM 20
#define V20_REGNUM 52
#define R17_REGNUM 17
#define EP0_REGNUM 12
#define V17_REGNUM 49
#define V7_REGNUM 39
#define R4_REGNUM 4
#define P3_REGNUM 71
#define R24_REGNUM 24
#define V23_REGNUM 55
#define P10_REGNUM 78
#define R30_REGNUM 30
#define P2_REGNUM 70
#define V30_REGNUM 62
#define R8_REGNUM 8
#define P6_REGNUM 74
#define R27_REGNUM 27
#define V16_REGNUM 48
#define V27_REGNUM 59
#define P9_REGNUM 77
#define P13_REGNUM 81
#define R13_REGNUM 13
#define SPECULATION_TRACKER_REGNUM 15
#define AP_REGNUM 65
#define V9_REGNUM 41
#define R0_REGNUM 0
#define P7_REGNUM 75
#define R6_REGNUM 6
#define LR_REGNUM 30
#define R16_REGNUM 16
#define V5_REGNUM 37
#define R3_REGNUM 3
#define R23_REGNUM 23
#define V22_REGNUM 54
#define R19_REGNUM 19
#define IP1_REGNUM 17
#define V19_REGNUM 51
#define SPECULATION_SCRATCH_REGNUM 14
#define R7_REGNUM 7
#define P5_REGNUM 73
#define R26_REGNUM 26
#define V26_REGNUM 58

enum arches {
  ARCHES_ANY = 0,
  ARCHES_RCPC8_4 = 1,
  ARCHES_FP = 2,
  ARCHES_SIMD = 3,
  ARCHES_SVE = 4,
  ARCHES_FP16 = 5
};
#define NUM_ARCHES_VALUES 6
extern const char *const arches_strings[];

enum unspec {
  UNSPEC_AUTI1716 = 0,
  UNSPEC_AUTISP = 1,
  UNSPEC_CASESI = 2,
  UNSPEC_CRC32B = 3,
  UNSPEC_CRC32CB = 4,
  UNSPEC_CRC32CH = 5,
  UNSPEC_CRC32CW = 6,
  UNSPEC_CRC32CX = 7,
  UNSPEC_CRC32H = 8,
  UNSPEC_CRC32W = 9,
  UNSPEC_CRC32X = 10,
  UNSPEC_FCVTZS = 11,
  UNSPEC_FCVTZU = 12,
  UNSPEC_URECPE = 13,
  UNSPEC_FRECPE = 14,
  UNSPEC_FRECPS = 15,
  UNSPEC_FRECPX = 16,
  UNSPEC_FRINTA = 17,
  UNSPEC_FRINTI = 18,
  UNSPEC_FRINTM = 19,
  UNSPEC_FRINTN = 20,
  UNSPEC_FRINTP = 21,
  UNSPEC_FRINTX = 22,
  UNSPEC_FRINTZ = 23,
  UNSPEC_GOTSMALLPIC = 24,
  UNSPEC_GOTSMALLPIC28K = 25,
  UNSPEC_GOTSMALLTLS = 26,
  UNSPEC_GOTTINYPIC = 27,
  UNSPEC_GOTTINYTLS = 28,
  UNSPEC_LD1 = 29,
  UNSPEC_LD2 = 30,
  UNSPEC_LD2_DREG = 31,
  UNSPEC_LD2_DUP = 32,
  UNSPEC_LD3 = 33,
  UNSPEC_LD3_DREG = 34,
  UNSPEC_LD3_DUP = 35,
  UNSPEC_LD4 = 36,
  UNSPEC_LD4_DREG = 37,
  UNSPEC_LD4_DUP = 38,
  UNSPEC_LD2_LANE = 39,
  UNSPEC_LD3_LANE = 40,
  UNSPEC_LD4_LANE = 41,
  UNSPEC_MB = 42,
  UNSPEC_NOP = 43,
  UNSPEC_PACI1716 = 44,
  UNSPEC_PACISP = 45,
  UNSPEC_PRLG_STK = 46,
  UNSPEC_REV = 47,
  UNSPEC_RBIT = 48,
  UNSPEC_SABAL = 49,
  UNSPEC_SABDL2 = 50,
  UNSPEC_SADALP = 51,
  UNSPEC_SCVTF = 52,
  UNSPEC_SISD_NEG = 53,
  UNSPEC_SISD_SSHL = 54,
  UNSPEC_SISD_USHL = 55,
  UNSPEC_SSHL_2S = 56,
  UNSPEC_ST1 = 57,
  UNSPEC_ST2 = 58,
  UNSPEC_ST3 = 59,
  UNSPEC_ST4 = 60,
  UNSPEC_ST2_LANE = 61,
  UNSPEC_ST3_LANE = 62,
  UNSPEC_ST4_LANE = 63,
  UNSPEC_TLS = 64,
  UNSPEC_TLSDESC = 65,
  UNSPEC_TLSLE12 = 66,
  UNSPEC_TLSLE24 = 67,
  UNSPEC_TLSLE32 = 68,
  UNSPEC_TLSLE48 = 69,
  UNSPEC_UABAL = 70,
  UNSPEC_UABDL2 = 71,
  UNSPEC_UADALP = 72,
  UNSPEC_UCVTF = 73,
  UNSPEC_USHL_2S = 74,
  UNSPEC_VSTRUCTDUMMY = 75,
  UNSPEC_SP_SET = 76,
  UNSPEC_SP_TEST = 77,
  UNSPEC_RSQRT = 78,
  UNSPEC_RSQRTE = 79,
  UNSPEC_RSQRTS = 80,
  UNSPEC_NZCV = 81,
  UNSPEC_XPACLRI = 82,
  UNSPEC_LD1_SVE = 83,
  UNSPEC_ST1_SVE = 84,
  UNSPEC_LD1RQ = 85,
  UNSPEC_LD1_GATHER = 86,
  UNSPEC_ST1_SCATTER = 87,
  UNSPEC_MERGE_PTRUE = 88,
  UNSPEC_PTEST_PTRUE = 89,
  UNSPEC_UNPACKSHI = 90,
  UNSPEC_UNPACKUHI = 91,
  UNSPEC_UNPACKSLO = 92,
  UNSPEC_UNPACKULO = 93,
  UNSPEC_PACK = 94,
  UNSPEC_FLOAT_CONVERT = 95,
  UNSPEC_WHILE_LO = 96,
  UNSPEC_LDN = 97,
  UNSPEC_STN = 98,
  UNSPEC_INSR = 99,
  UNSPEC_CLASTB = 100,
  UNSPEC_FADDA = 101,
  UNSPEC_REV_SUBREG = 102,
  UNSPEC_SPECULATION_TRACKER = 103,
  UNSPEC_COPYSIGN = 104,
  UNSPEC_ASHIFT_SIGNED = 105,
  UNSPEC_ASHIFT_UNSIGNED = 106,
  UNSPEC_ABS = 107,
  UNSPEC_FMAX = 108,
  UNSPEC_FMAXNMV = 109,
  UNSPEC_FMAXV = 110,
  UNSPEC_FMIN = 111,
  UNSPEC_FMINNMV = 112,
  UNSPEC_FMINV = 113,
  UNSPEC_FADDV = 114,
  UNSPEC_ADDV = 115,
  UNSPEC_SMAXV = 116,
  UNSPEC_SMINV = 117,
  UNSPEC_UMAXV = 118,
  UNSPEC_UMINV = 119,
  UNSPEC_SHADD = 120,
  UNSPEC_UHADD = 121,
  UNSPEC_SRHADD = 122,
  UNSPEC_URHADD = 123,
  UNSPEC_SHSUB = 124,
  UNSPEC_UHSUB = 125,
  UNSPEC_SRHSUB = 126,
  UNSPEC_URHSUB = 127,
  UNSPEC_ADDHN = 128,
  UNSPEC_RADDHN = 129,
  UNSPEC_SUBHN = 130,
  UNSPEC_RSUBHN = 131,
  UNSPEC_ADDHN2 = 132,
  UNSPEC_RADDHN2 = 133,
  UNSPEC_SUBHN2 = 134,
  UNSPEC_RSUBHN2 = 135,
  UNSPEC_SQDMULH = 136,
  UNSPEC_SQRDMULH = 137,
  UNSPEC_PMUL = 138,
  UNSPEC_FMULX = 139,
  UNSPEC_USQADD = 140,
  UNSPEC_SUQADD = 141,
  UNSPEC_SQXTUN = 142,
  UNSPEC_SQXTN = 143,
  UNSPEC_UQXTN = 144,
  UNSPEC_SSRA = 145,
  UNSPEC_USRA = 146,
  UNSPEC_SRSRA = 147,
  UNSPEC_URSRA = 148,
  UNSPEC_SRSHR = 149,
  UNSPEC_URSHR = 150,
  UNSPEC_SQSHLU = 151,
  UNSPEC_SQSHL = 152,
  UNSPEC_UQSHL = 153,
  UNSPEC_SQSHRUN = 154,
  UNSPEC_SQRSHRUN = 155,
  UNSPEC_SQSHRN = 156,
  UNSPEC_UQSHRN = 157,
  UNSPEC_SQRSHRN = 158,
  UNSPEC_UQRSHRN = 159,
  UNSPEC_SSHL = 160,
  UNSPEC_USHL = 161,
  UNSPEC_SRSHL = 162,
  UNSPEC_URSHL = 163,
  UNSPEC_SQRSHL = 164,
  UNSPEC_UQRSHL = 165,
  UNSPEC_SSLI = 166,
  UNSPEC_USLI = 167,
  UNSPEC_SSRI = 168,
  UNSPEC_USRI = 169,
  UNSPEC_SSHLL = 170,
  UNSPEC_USHLL = 171,
  UNSPEC_ADDP = 172,
  UNSPEC_TBL = 173,
  UNSPEC_TBX = 174,
  UNSPEC_CONCAT = 175,
  UNSPEC_ZIP1 = 176,
  UNSPEC_ZIP2 = 177,
  UNSPEC_UZP1 = 178,
  UNSPEC_UZP2 = 179,
  UNSPEC_TRN1 = 180,
  UNSPEC_TRN2 = 181,
  UNSPEC_EXT = 182,
  UNSPEC_REV64 = 183,
  UNSPEC_REV32 = 184,
  UNSPEC_REV16 = 185,
  UNSPEC_AESE = 186,
  UNSPEC_AESD = 187,
  UNSPEC_AESMC = 188,
  UNSPEC_AESIMC = 189,
  UNSPEC_SHA1C = 190,
  UNSPEC_SHA1M = 191,
  UNSPEC_SHA1P = 192,
  UNSPEC_SHA1H = 193,
  UNSPEC_SHA1SU0 = 194,
  UNSPEC_SHA1SU1 = 195,
  UNSPEC_SHA256H = 196,
  UNSPEC_SHA256H2 = 197,
  UNSPEC_SHA256SU0 = 198,
  UNSPEC_SHA256SU1 = 199,
  UNSPEC_PMULL = 200,
  UNSPEC_PMULL2 = 201,
  UNSPEC_REV_REGLIST = 202,
  UNSPEC_VEC_SHR = 203,
  UNSPEC_SQRDMLAH = 204,
  UNSPEC_SQRDMLSH = 205,
  UNSPEC_FMAXNM = 206,
  UNSPEC_FMINNM = 207,
  UNSPEC_SDOT = 208,
  UNSPEC_UDOT = 209,
  UNSPEC_SM3SS1 = 210,
  UNSPEC_SM3TT1A = 211,
  UNSPEC_SM3TT1B = 212,
  UNSPEC_SM3TT2A = 213,
  UNSPEC_SM3TT2B = 214,
  UNSPEC_SM3PARTW1 = 215,
  UNSPEC_SM3PARTW2 = 216,
  UNSPEC_SM4E = 217,
  UNSPEC_SM4EKEY = 218,
  UNSPEC_SHA512H = 219,
  UNSPEC_SHA512H2 = 220,
  UNSPEC_SHA512SU0 = 221,
  UNSPEC_SHA512SU1 = 222,
  UNSPEC_FMLAL = 223,
  UNSPEC_FMLSL = 224,
  UNSPEC_FMLAL2 = 225,
  UNSPEC_FMLSL2 = 226,
  UNSPEC_SEL = 227,
  UNSPEC_ANDV = 228,
  UNSPEC_IORV = 229,
  UNSPEC_XORV = 230,
  UNSPEC_ANDF = 231,
  UNSPEC_IORF = 232,
  UNSPEC_XORF = 233,
  UNSPEC_SMUL_HIGHPART = 234,
  UNSPEC_UMUL_HIGHPART = 235,
  UNSPEC_COND_ADD = 236,
  UNSPEC_COND_SUB = 237,
  UNSPEC_COND_MUL = 238,
  UNSPEC_COND_DIV = 239,
  UNSPEC_COND_MAX = 240,
  UNSPEC_COND_MIN = 241,
  UNSPEC_COND_FMLA = 242,
  UNSPEC_COND_FMLS = 243,
  UNSPEC_COND_FNMLA = 244,
  UNSPEC_COND_FNMLS = 245,
  UNSPEC_COND_LT = 246,
  UNSPEC_COND_LE = 247,
  UNSPEC_COND_EQ = 248,
  UNSPEC_COND_NE = 249,
  UNSPEC_COND_GE = 250,
  UNSPEC_COND_GT = 251,
  UNSPEC_LASTB = 252,
  UNSPEC_FCADD90 = 253,
  UNSPEC_FCADD270 = 254,
  UNSPEC_FCMLA = 255,
  UNSPEC_FCMLA90 = 256,
  UNSPEC_FCMLA180 = 257,
  UNSPEC_FCMLA270 = 258
};
#define NUM_UNSPEC_VALUES 259
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_EH_RETURN = 0,
  UNSPECV_GET_FPCR = 1,
  UNSPECV_SET_FPCR = 2,
  UNSPECV_GET_FPSR = 3,
  UNSPECV_SET_FPSR = 4,
  UNSPECV_BLOCKAGE = 5,
  UNSPECV_PROBE_STACK_RANGE = 6,
  UNSPECV_SPECULATION_BARRIER = 7,
  UNSPECV_BTI_NOARG = 8,
  UNSPECV_BTI_C = 9,
  UNSPECV_BTI_J = 10,
  UNSPECV_BTI_JC = 11,
  UNSPECV_LX = 12,
  UNSPECV_SX = 13,
  UNSPECV_LDA = 14,
  UNSPECV_STL = 15,
  UNSPECV_ATOMIC_CMPSW = 16,
  UNSPECV_ATOMIC_EXCHG = 17,
  UNSPECV_ATOMIC_CAS = 18,
  UNSPECV_ATOMIC_SWP = 19,
  UNSPECV_ATOMIC_OP = 20,
  UNSPECV_ATOMIC_LDOP_OR = 21,
  UNSPECV_ATOMIC_LDOP_BIC = 22,
  UNSPECV_ATOMIC_LDOP_XOR = 23,
  UNSPECV_ATOMIC_LDOP_PLUS = 24
};
#define NUM_UNSPECV_VALUES 25
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
