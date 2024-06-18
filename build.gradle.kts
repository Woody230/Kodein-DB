plugins {
    id("org.kodein.root")
}

buildscript {
    dependencies {
        classpath("org.jetbrains.kotlinx:atomicfu-gradle-plugin:0.16.1")
    }
}

allprojects {
    group = "io.github.woody230.kodein.db"
    version = "1.0.0"

    repositories {
        mavenLocal()
        google()
    }
}

val kotlinxAtomicFuVer by extra { "0.16.1" } // CAUTION: also change in buildscript!
val kotlinxSerializationVer by extra { "1.2.0" }
val kotlinxCoroutinesVer by extra { "1.5.0" }
val kodeinLogVer by extra { "0.11.1" }
val kodeinMemoryVer by extra { "0.10.2" }

val androidNdkVer by extra { "21.3.6528147" } // CAUTION: also change in CI workflows!

val currentOs = org.gradle.internal.os.OperatingSystem.current()!!

when {
    currentOs.isWindows -> {
        extra["osName"] = "windows"
        extra["libPrefix"] = ""
        extra["libSuffix"] = "dll"
    }
    currentOs.isMacOsX -> {
        extra["osName"] = "macos"
        extra["libPrefix"] = "lib"
        extra["libSuffix"] = "dylib"
    }
    currentOs.isLinux -> {
        extra["osName"] = "linux"
        extra["libPrefix"] = "lib"
        extra["libSuffix"] = "so"
    }
    else -> error("Unknown operating system ${currentOs.name}")
}

task<Delete>("clean") {
    group = "build"
    delete(rootProject.buildDir)
}
