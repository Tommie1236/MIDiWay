


cd Code

mkdir -p build
cd build

CC=clang cmake ..
make -j $(($(nproc) * 2))

chmod +x ./src/MIDiWay
rm ../../MIDiWay 2> /dev/null
ln -snf $(pwd)/src/MIDiWay $(pwd)/../../MIDiWay
