GCC 9.x toolchain (aarch64-linux-gnueabi) 
====================================

Used during part of the compilation process of the Android source, several binaries and the kernel image go through this toolchain.

Compiled using the tool you can find at the link below: 

https://github.com/nathanchance/build-tools-gcc

After meeting the dependencies stated in the project README, the compilation has been done issuing the next command:

`./build -a arm64 -s gnu -v 9`
