import vfs
import machine, rp2


# Try to mount the filesystem, and format the flash if it doesn't exist.
bdev = rp2.Flash()
partName = bytearray(16)
bdev.readblocks(0, partName)
partitionExists = partName[3:11] == "MSDOS5.0"

try:
    if partitionExists:
        fs = vfs.VfsFat(bdev)
    else:
        vfs.VfsFat.mkfs(bdev)
        fs = vfs.VfsFat(bdev)
except:
    pass
vfs.mount(fs, "/")

del vfs, bdev, fs, partName, partitionExists
