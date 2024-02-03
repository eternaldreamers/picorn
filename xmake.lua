add_rules("mode.debug", "mode.release")

set_policy("package.requires_lock", true)

add_requires("sfml")

target("picorn")
    set_kind("binary")
    add_files("core/*.cpp", "graph/*.cpp", "utils/*.cpp", "*.cpp")
    add_headerfiles("core/*.h", "graph/*.h", "utils/*.h", "*.h")
    add_packages("sfml")
