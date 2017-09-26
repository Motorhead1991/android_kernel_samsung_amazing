/* Copyright (c) 2010-2011, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 */
#ifndef __ARCH_ARM_MACH_MSM_DEVICES_MSM7X27A_H
#define __ARCH_ARM_MACH_MSM_DEVICES_MSM7X27A_H

//#define MSM_RAM_CONSOLE_SIZE 512*1024

extern struct platform_device ram_console_device;
extern struct resource ram_console_resources[];

#ifdef CONFIG_ANDROID_PERSISTENT_RAM
void __init add_persistent_ram(void);
#endif
#endif
