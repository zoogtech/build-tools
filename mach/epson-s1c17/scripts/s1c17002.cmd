# Command file generated by Gnu17 Plug-in for Eclipse
# load debugging information in program
file @project@/build/gdb/@buildfile@.elf
# set the memory configuration map file to the debugger
c17 rpf @bin@/par/@machine@.par
# connect to the debugger with specified mode and port
# target [icd usb | sim]
target icd usb
# load program to memory
load @project@/build/gdb/@buildfile@.psa
# reset
c17 rst
