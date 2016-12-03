deps_config := \
	/home/beng/esp32/esp-idf/components/bt/Kconfig \
	/home/beng/esp32/esp-idf/components/esp32/Kconfig \
	/home/beng/esp32/esp-idf/components/ethernet/Kconfig \
	/home/beng/esp32/esp-idf/components/freertos/Kconfig \
	/home/beng/esp32/esp-idf/components/log/Kconfig \
	/home/beng/esp32/esp-idf/components/lwip/Kconfig \
	/home/beng/esp32/esp-idf/components/mbedtls/Kconfig \
	/home/beng/esp32/esp-idf/components/spi_flash/Kconfig \
	/home/beng/esp32/esp-idf/components/bootloader/Kconfig.projbuild \
	/home/beng/esp32/esp-idf/components/esptool_py/Kconfig.projbuild \
	/home/beng/esp32/esp-idf/components/partition_table/Kconfig.projbuild \
	/home/beng/esp32/esp-idf/projects/my-template/main/Kconfig.projbuild \
	/home/beng/esp32/esp-idf/Kconfig

include/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
