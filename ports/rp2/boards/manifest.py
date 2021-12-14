freeze("$(PORT_DIR)/modules")
freeze("$(MPY_DIR)/drivers/onewire")

##211203 init manifest
freeze("$(MPY_DIR)/tools", ("upip.py", "upip_utarfile.py"))

include("$(MPY_DIR)/extmod/uasyncio/manifest.py")


