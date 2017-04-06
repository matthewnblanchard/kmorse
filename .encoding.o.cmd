cmd_/home/mattb/Documents/GitLab/kmorse/encoding.o := gcc -Wp,-MD,/home/mattb/Documents/GitLab/kmorse/.encoding.o.d  -nostdinc -isystem /usr/lib/gcc/arm-linux-gnueabihf/4.9/include -I./arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -Iinclude -I./arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-bcm2709/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -Wno-maybe-uninitialized -O2 --param=allow-store-data-races=0 -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -pg -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -DCC_HAVE_ASM_GOTO  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(encoding)"  -D"KBUILD_MODNAME=KBUILD_STR(bmorse)" -c -o /home/mattb/Documents/GitLab/kmorse/.tmp_encoding.o /home/mattb/Documents/GitLab/kmorse/encoding.c

source_/home/mattb/Documents/GitLab/kmorse/encoding.o := /home/mattb/Documents/GitLab/kmorse/encoding.c

deps_/home/mattb/Documents/GitLab/kmorse/encoding.o := \
  /home/mattb/Documents/GitLab/kmorse/encoding.h \

/home/mattb/Documents/GitLab/kmorse/encoding.o: $(deps_/home/mattb/Documents/GitLab/kmorse/encoding.o)

$(deps_/home/mattb/Documents/GitLab/kmorse/encoding.o):
