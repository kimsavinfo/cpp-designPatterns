## Requirement / Install

### CMake 3.20.0 - LTS 

```
# Copy and past
cp ./install/cmake-3.20.0.tar.gz ~/Downloads
cd ~/Downloads

# Extract the contents
tar -zxvf cmake-3.20.0.tar.gz
cd cmake-3.20.0

# Run the command below to compile and install CMake in your Ubuntu system:
sudo apt-get --no-install-recommends install mingw-w64 git qt4-qmake qt4-default nsis
sudo apt-get install build-essential
sudo apt-get install libssl-dev
sudo ./bootstrap
sudo make 
sudo make install

# Clean up
cd ../
sudo rm -rf cmake-3.20.0
rm -rf cmake-3.20.0.tar.gz

# To confirm that CMake installed successfully:
cmake --version
```