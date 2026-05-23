#include "../include/utils.h"
#include "../include/tty.h"

void print_logo()
{
    printk("\t                                                           \n");
    printk("\t      _          _     ___  ____                           \n");
    printk("\t     / \\   _ __ / \\   / _ \\/ ___|                          \n");
    printk("\t    / _ \\ | '__/ _ \\ | | | \\___ \\                          \n");
    printk("\t   / ___ \\| | / ___ \\| |_| |___) |                         \n");
    printk("\t  /_/   \\_\\_||_/   \\_\\\\___/|____/                          \n");
    printk("\t                                                           \n");
    printk("\t  ======================================================== \n");
    printk("\t                 ARA OPERATING SYSTEM CORE                 \n");
    printk("\t  ======================================================== \n\n");
}

void about(char *version)
{
    printk("\n\tAraOS Monolithic Kernel (32-bit Protected Mode)\n");
    printk("\tProvided under the GNU General Public License v3.0\n");
}
