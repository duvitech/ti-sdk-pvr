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

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x4cc15df2, "module_layout" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x402b8281, "__request_module" },
	{ 0xa84e8185, "device_remove_file" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe8611953, "perf_tp_event" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xe41044a2, "sysfs_remove_bin_file" },
	{ 0x41710c2d, "debugfs_create_dir" },
	{ 0xf7c019f7, "mem_map" },
	{ 0x47577a7d, "single_open" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc996d097, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0xd22db260, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x1d0d4f71, "send_sig" },
	{ 0xf1deabf2, "div64_u64" },
	{ 0x7a2f0e74, "single_release" },
	{ 0x26e7b620, "malloc_sizes" },
	{ 0xb4d6939, "remove_wait_queue" },
	{ 0x797eaf2b, "dma_buf_detach" },
	{ 0x12a5fdf5, "i2c_transfer" },
	{ 0x3b502f70, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xd67319, "seq_printf" },
	{ 0x6a174480, "remove_proc_entry" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xe89572ad, "__register_chrdev" },
	{ 0xd5152710, "sg_next" },
	{ 0xf0ef15b4, "list_sort" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x9621849f, "ring_buffer_event_data" },
	{ 0xc0ba13f7, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xa2487e0, "unblock_all_signals" },
	{ 0x66fe6bf, "debugfs_create_file" },
	{ 0xd6851c2a, "filter_current_check_discard" },
	{ 0x1a4d4058, "idr_for_each" },
	{ 0x91715312, "sprintf" },
	{ 0xf6a718e2, "seq_read" },
	{ 0x39e15e5f, "trace_nowake_buffer_unlock_commit" },
	{ 0x6ccf7bd7, "__pv_phys_offset" },
	{ 0x7d11c268, "jiffies" },
	{ 0x733c3b54, "kasprintf" },
	{ 0xa7ecf324, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x407136b1, "__put_user_8" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x51bef23e, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0x4a2e492f, "proc_mkdir" },
	{ 0xe01afd48, "idr_destroy" },
	{ 0xbe5a30e9, "device_register" },
	{ 0x8ddab831, "_raw_spin_unlock_irqrestore" },
	{ 0x7c8e2393, "mutex_lock_interruptible" },
	{ 0x97544711, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x449d7547, "dma_buf_fd" },
	{ 0x6b579ba9, "dma_buf_put" },
	{ 0x328a05f1, "strncpy" },
	{ 0x62a65a23, "fasync_helper" },
	{ 0xf7df1bf, "dma_free_coherent" },
	{ 0xdaf4dfb3, "fb_mode_option" },
	{ 0x84b183ae, "strncmp" },
	{ 0x992d54d9, "debugfs_remove" },
	{ 0x5271eb77, "dma_buf_get" },
	{ 0xbf8ba54a, "vprintk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x74b397ca, "mutex_lock" },
	{ 0x2acbbfa9, "class_remove_file" },
	{ 0xfc4ecda0, "noop_llseek" },
	{ 0x8834396c, "mod_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x54a7d220, "dma_buf_unmap_attachment" },
	{ 0xfef8a166, "trace_current_buffer_lock_reserve" },
	{ 0x398caeb6, "class_create_file" },
	{ 0xfe6ebfa4, "i2c_unregister_device" },
	{ 0x386f8f22, "fput" },
	{ 0x5ad9d318, "__get_page_tail" },
	{ 0x7f04157d, "shmem_file_setup" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x39e94ff4, "kobject_uevent_env" },
	{ 0x99d7287b, "dma_alloc_coherent" },
	{ 0x72c625ea, "idr_remove" },
	{ 0xacdc4deb, "device_create_file" },
	{ 0xcdd158d, "sg_alloc_table" },
	{ 0x26167676, "idr_pre_get" },
	{ 0xfd027cf1, "ftrace_event_reg" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x742870f9, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x6b44f603, "idr_remove_all" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xc73dd955, "_raw_spin_unlock_bh" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0x3d0897bf, "___dma_page_cpu_to_dev" },
	{ 0x1000e51, "schedule" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xc2165d85, "__arm_iounmap" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xb0b80f26, "___dma_page_dev_to_cpu" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x4b34fbf5, "block_all_signals" },
	{ 0xb9012926, "kmem_cache_alloc_trace" },
	{ 0xc4097c34, "_raw_spin_lock" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x1a9b678e, "_raw_spin_lock_irqsave" },
	{ 0xa2bfc3f4, "idr_get_new_above" },
	{  0xf1338, "__wake_up" },
	{ 0x4f68e5c9, "do_gettimeofday" },
	{ 0xbef395ce, "proc_create_data" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x24e71aea, "vm_mmap" },
	{ 0x78a33819, "add_wait_queue" },
	{ 0xb07d3ea5, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x52ed908c, "remap_pfn_range" },
	{ 0x9d669763, "memcpy" },
	{ 0x47c0b210, "trace_event_raw_init" },
	{ 0x69ff5332, "prepare_to_wait" },
	{ 0xf212f50d, "sysfs_create_bin_file" },
	{ 0xd788742d, "perf_trace_buf_prepare" },
	{ 0xe4904700, "idr_replace" },
	{ 0xbac57ea, "class_destroy" },
	{ 0xbc3d21af, "finish_wait" },
	{ 0x12ca614b, "dev_warn" },
	{ 0x2b262b93, "device_unregister" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x3e884f4b, "vm_get_page_prot" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb95f98d6, "_memset_io" },
	{ 0xb81960ca, "snprintf" },
	{ 0xac7184f8, "platform_get_irq" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x1e3a88fb, "trace_seq_printf" },
	{ 0x64134874, "vmalloc_to_page" },
	{ 0xb060005b, "dev_set_name" },
	{ 0x60d43016, "idr_init" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xac8f37b2, "outer_cache" },
	{ 0xa6fcbb24, "idr_find" },
	{ 0x2e5c74c2, "__class_create" },
	{ 0x96b1c432, "i2c_new_device" },
	{ 0x11f203c, "show_class_attr_string" },
	{ 0x6e0d0b24, "try_module_get" },
	{ 0xb859f38b, "krealloc" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x4cdb3178, "ns_to_timeval" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7F9D05C84FC57A74396C5C6");