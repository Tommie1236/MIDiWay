


add_executable(MIDiWay
    main.c
    gui.c
)

find_package(PkgConfig
    REQUIRED
)
find_package(Threads
    REQUIRED
)

pkg_check_modules(GTK3 
    REQUIRED
    IMPORTED_TARGET
    gtk+-3.0
)

target_link_libraries(MIDiWay
    PkgConfig::GTK3
    Threads::Threads
)

