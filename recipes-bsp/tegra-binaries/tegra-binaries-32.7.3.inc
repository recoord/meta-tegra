LICENSE = "Proprietary"
LIC_FILES_CHKSUM = "file://nv_tegra/LICENSE;md5=953d15076a1b575cf31914fafdf9ae5a \
                    file://nv_tegra/LICENSE.brcm_patchram_plus;md5=38fb07f0dacf4830bc57f40a0fb7532e"

SRC_URI = "https://developer.download.nvidia.com/embedded/L4T/r32_Release_v7.5/T186/Jetson_Linux_R32.7.5_aarch64.tbz2;downloadfilename=${L4T_BSP_PREFIX}_Linux_R${L4T_VERSION}_aarch64_bp.tbz2;name=l4t \
	       https://developer.download.nvidia.com/embedded/L4T/r32_Release_v7.5/T186/secureboot_R32.7.5_aarch64.tbz2;downloadfilename=${L4T_BSP_PREFIX}_secureboot_${L4T_VERSION}_bp.tbz2;name=sb"
L4T_SHA256SUM = "78c322417ad87a96d390ed3b75ec6919866a92fd14aeb1236a41ac69cb11975b"
SRC_URI[l4t.sha256sum] = "${L4T_SHA256SUM}"
SB_SHA256SUM = "86ff2b27288034908e48a42c4b53cb14bcb59edb7f4570c1dc62405f23879b3e"
SRC_URI[sb.sha256sum] = "${SB_SHA256SUM}"

inherit l4t_bsp

S = "${TMPDIR}/work-shared/L4T-${L4T_BSP_ARCH}-${PV}-${PR}/Linux_for_Tegra"
B = "${WORKDIR}/build"

INHIBIT_PACKAGE_STRIP = "1"
INHIBIT_PACKAGE_DEBUG_SPLIT = "1"

COMPATIBLE_MACHINE = "tegra"

do_preconfigure() {
    :
}
