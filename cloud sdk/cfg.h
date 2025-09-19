#pragma once

//TODO: write new versions of ALL functions with resolver
#define bShouldResolve 1
#define bShouldRapeIDA 1

#define bShouldUseFakeSigs 1

#define sSigWatermark "LOL GOOD LUCK CRACKING"

//! don't change!!!!
#ifdef _MSC_VER
#define SECTION(x) __declspec(allocate(x))
#else
#define SECTION(x) __attribute__((section(x)))
#endif

#define FAKE_SIG(name, section, sig) \
    SECTION(section) static char * name = (char*)sig;
