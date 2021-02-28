# compile tof.c as shared library and link mainAsync.c to use shared lib
gcc -c -Wall -Werror -fpic tof.c
gcc -shared -o libvl53l0x.so tof.o
gcc -L/home/gds/VL53L0X-master  -Wall -o tofdemoasync mainAsync.c -lvl53l0x 
sudo cp libvl53l0x.so /usr/lib
sudo chmod 0755 /usr/lib/libvl53l0x.so

