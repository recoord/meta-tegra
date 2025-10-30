do_install:append:tegra() {
    sed -i \
        -e '/^ProtectProc=invisible$/d' \
        -e '/^IPAddressDeny=any$/d' \
        -e '/^IPAddressAllow=any$/d' \
        ${D}${systemd_system_unitdir}/*.service
}

