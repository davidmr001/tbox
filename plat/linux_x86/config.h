#ifndef TB_CONFIG_H
#define TB_CONFIG_H

// arch
#define TB_CONFIG_ARCH_x86
//#define TB_CONFIG_ARCH_ARM
//#define TB_CONFIG_ARCH_MIPS
//#define TB_CONFIG_ARCH_SPARC
//#define TB_CONFIG_ARCH_PPC
//#define TB_CONFIG_ARCH_SH4

// platform
#define TB_CONFIG_PLAT_LINUX_x86
//#define TB_CONFIG_PLAT_BIGENDIAN

// compiler
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_INLINE
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_INLINE_ASM
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_VARARG_MACRO
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_ANONYMOUS_UNION_STRUCT
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_FUNC_AND_VOIDPTR_CAST
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_SPECIFIC_MEMBER_INITIAL
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_ANONYMOUS_STRUCT_DEFINATION
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_ANONYMOUS_ARRAY_DEFINATION
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_DYNAMIC_ARRAY_DEFINATION

// assembler
#define TB_CONFIG_ASSEMBLER_GAS
//#define TB_CONFIG_ASSEMBLER_MASM
//#define TB_CONFIG_ASSEMBLER_NASM
//#define TB_CONFIG_ASSEMBLER_YASM

// keyword
#define TB_CONFIG_KEYWORD_INLINE		inline
#define TB_CONFIG_KEYWORD_ASM 			__asm__
#define TB_CONFIG_KEYWORD_FUNC			__FUNCTION__
#define TB_CONFIG_KEYWORD_LINE			__LINE__
#define TB_CONFIG_KEYWORD_FILE			__FILE__

// optimization
#define TB_CONFIG_OPTI_SSE2_ENABLE

// memory
#define TB_CONFIG_MEMORY_MODE_SMALL
#define TB_CONFIG_MEMORY_POOL_ENABLE

// jpeg
#define TB_CONFIG_LIBS_JPEG

// zlib
#define TB_CONFIG_LIBS_ZLIB

// libmad
#define TB_CONFIG_LIBS_LIBMAD



#endif
