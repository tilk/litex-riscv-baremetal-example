# Minimal bare-metal example for RISC-V on LiteX

How to use:

* Install RISC-V toolchain. In Debian: `gcc-riscv64-unknown-elf` and `binutils-riscv64-unknown-elf`.
* Set `BUILD_DIR` to the build directory for a LiteX platform.
* Set `SOC_DIRECTORY` to the `litex/soc` directory in LiteX repository.
* Run `make`.
* Make sure the LiteX platform is programmed on the FPGA, for example using `platform.py --load`.
* Run `lxterm /dev/ttyUSBx --kernel firmware.bin`, reboot LiteX if necessary.

Based on [FPGA 101](https://github.com/litex-hub/fpga_101/tree/master/lab004).

