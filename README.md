# cpp-toys
This respository is just a collection of toy C++ programs that are created based on the examples and exercises from [Stroustrup, 2014](http://www.stroustrup.com/Programming/).

To run the programs on a Mac, you must specific the C++ standard of 2011 or later. I just use 2014. For example, to run hello_world.cpp. 

```
g++-5 -std="c++14" hello_world.cpp
```

Below is my C++ environment.

```
tg-dw021:cpp-toys chris$ g++-5 -v
Using built-in specs.
COLLECT_GCC=g++-5
COLLECT_LTO_WRAPPER=/usr/local/Cellar/gcc5/5.1.0/libexec/gcc/x86_64-apple-darwin14.3.0/5.1.0/lto-wrapper
Target: x86_64-apple-darwin14.3.0
Configured with: ../configure --build=x86_64-apple-darwin14.3.0 --prefix=/usr/local/Cellar/gcc5/5.1.0 --libdir=/usr/local/Cellar/gcc5/5.1.0/lib/gcc/5 --enable-languages=c,c++,objc,obj-c++ --program-suffix=-5 --with-gmp=/usr/local/opt/gmp --with-mpfr=/usr/local/opt/mpfr --with-mpc=/usr/local/opt/libmpc --with-isl=/usr/local/opt/isl014 --with-system-zlib --enable-libstdcxx-time=yes --enable-stage1-checking --enable-checking=release --enable-lto --disable-werror --with-pkgversion='Homebrew gcc5 5.1.0' --with-bugurl=https://github.com/Homebrew/homebrew-versions/issues --enable-plugin --disable-nls --enable-multilib --with-native-system-header-dir=/usr/include --with-sysroot=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk
Thread model: posix
gcc version 5.1.0 (Homebrew gcc5 5.1.0) 
```
