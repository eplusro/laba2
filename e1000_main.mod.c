#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
	{ 0xa683b406, "module_layout" },
	{ 0x8ba40405, "pci_unregister_driver" },
	{ 0x34d47941, "__pci_register_driver" },
	{ 0x50eedeb8, "printk" },
	{ 0x12e407fa, "pci_ioremap_bar" },
	{ 0x9c1f3084, "pci_request_selected_regions" },
	{ 0xedeaaff1, "pci_enable_device" },
	{ 0x6bb35fbc, "pci_select_bars" },
	{ 0x27ca2b04, "pci_disable_device" },
	{ 0xfc0a57ac, "pci_release_selected_regions" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d0000100Esv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E37A7049F29B8406F4C3FD4");
