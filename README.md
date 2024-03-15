# EUFI-just-restarts
A very tiny EUFI script that just reboots the computer.
<br>
# Why?
I had a very very annoying issue with my MSI B450 TOMAHAWK MAX, the fact that it would not recognize my M.2 when booting <br>
Only when I pressed reboot in the BIOS, or reset NVRAM via OpenCore, it would then detect the drives again <br>
I couldn't find anything online as to why this was happening so I just decided to create this. <br> <br>
# How?
1. Download the ZIP file in releases. <br>
2. Place it on the root of any drive, eg: your hard drive. <br>
3. If you use OpenCore, it should automatically detect it. <br>
4. Since there are no entries, it'll boot the EFI file and restart the system.
# Building
1. Run ```sudo apt-get install gnu-efi mtools gcc qemu-system```
2. Run ```bash build.sh```