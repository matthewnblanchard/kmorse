#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf51a0302, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xaf631f5f, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x573a869c, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xf0d42e08, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x17c0da3b, __VMLINUX_SYMBOL_STR(desc_to_gpio) },
	{ 0x348e8271, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x486305b0, __VMLINUX_SYMBOL_STR(devm_gpio_free) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x46dcd0c4, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x17b37d38, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xa3dbab24, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xb78dfd58, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x3d627d29, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd8628742, __VMLINUX_SYMBOL_STR(of_find_node_by_name) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf7f35f7, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x5a041bb8, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x4d0d5ab0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xc2853512, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0x4587c37a, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0xf39cacaa, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x3cc4f0fd, __VMLINUX_SYMBOL_STR(gpiod_put) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-morse*");

MODULE_INFO(srcversion, "E0CE2D58E400524477BC850");
