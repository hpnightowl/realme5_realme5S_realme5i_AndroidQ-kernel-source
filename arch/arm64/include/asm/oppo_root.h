/*
	Yi.Zhang@ROM.Security, 2019-12-17, Add.
*/
#ifndef __OPPO_ROOT_H_
#define __OPPO_ROOT_H_

#ifdef VENDOR_EDIT

#ifndef __ARCH_ARM64_OPPO_ROOT_H_
#define __ARCH_ARM64_OPPO_ROOT_H_

#define __NR_setreuid32 	203
#define __NR_setregid32 	204
#define __NR_setresuid32 	208
#define __NR_setresgid32 	210
#define __NR_setuid32 		213
#define __NR_setgid32 		214

#define __NR_setregid 		143
#define __NR_setgid 		144
#define __NR_setreuid 		145
#define __NR_setuid 		146
#define __NR_setresuid 		147
#define __NR_setresgid 		149

#endif
#endif /* VENDOR_EDIT */
#endif /* __OPPO_ROOT_H_ */
