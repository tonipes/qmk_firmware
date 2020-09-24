# dfu-programmer atmega32u4 erase --force
# dfu-programmer atmega32u4 flash /path/to/firmware.hex
# dfu-programmer atmega32u4 reset

# run this in the qmk_firmware directory
make dz60:tonipes
echo "Flashing in 5"
sleep 1
echo "Flashing in 4"
sleep 1
echo "Flashing in 3"
sleep 1
echo "Flashing in 2"
sleep 1
echo "Flashing in 1"
sleep 1
echo "Flashing NOW"
dfu-programmer atmega32u4 erase --force && \
dfu-programmer atmega32u4 flash dz60_tonipes.hex && \
dfu-programmer atmega32u4 reset
