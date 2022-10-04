## Requirement / Install

### CMake 3.20.0 - LTS 

Copy and past:
```
cp ./install/cmake-3.20.0.tar.gz ~/Downloads
cd ~/Downloads
```

Extract the contents:
```
tar -zxvf cmake-3.20.0.tar.gz
cd cmake-3.20.0
```

Run the command below to compile and install CMake in your Mac system:
```
sudo ./bootstrap

[...]
-- Configuring done
-- Generating done
-- Build files have been written to: /Users/[YourName]/Downloads/cmake-3.20.0
---------------------------------------------
```
```
sudo make

[...]
[100%] Building CXX object Tests/FindPackageModeMakefileTest/CMakeFiles/foo.dir/foo.cpp.o
[100%] Linking CXX static library libfoo.a
[100%] Built target foo
```
```
sudo make install

[...]
-- Installing: /usr/local/share/bash-completion/completions/cmake
-- Installing: /usr/local/share/bash-completion/completions/cpack
-- Installing: /usr/local/share/bash-completion/completions/ctest
```

To confirm that CMake installed successfully:
```
cmake --version
cmake version 3.20.0
```

Clean up:
```
cd ~/Downloads
sudo rm -rf cmake-3.20.0
rm -rf cmake-3.20.0.tar.gz
```

### Boost

````
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
brew install boost
```