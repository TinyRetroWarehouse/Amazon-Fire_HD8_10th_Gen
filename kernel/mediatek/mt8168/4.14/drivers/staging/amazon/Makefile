MTK_PLATFORM := $(subst ",,$(CONFIG_MTK_PLATFORM))
subdir-ccflags-y += -Werror -I$(srctree)/drivers/misc/mediatek/include
subdir-ccflags-y += -Werror -I$(srctree)/drivers/misc/mediatek/include/mt-plat/$(MTK_PLATFORM)/include
subdir-ccflags-y += -Werror -I$(srctree)/drivers/misc/mediatek/include/mt-plat

obj-$(CONFIG_AMAZON_SIGN_OF_LIFE) += sign_of_life.o
obj-$(CONFIG_AMAZON_SIGN_OF_LIFE_MTK_V2) += sign_of_life_mtk_v2.o
obj-$(CONFIG_AMAZON_METRICS_LOG) += amazon_logger.o
obj-$(CONFIG_AMAZON_METRICS_LOG_TEST) += amazon_logger_test.o
obj-$(CONFIG_AMAZON_INTEGRITY_MODULE)	+= amzn_integrity_module.o
obj-$(CONFIG_INPUT_AMZN_KEYCOMBO)	+= amzn_keycombo.o
