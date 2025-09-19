import secrets

funcName = "rape_ida"
crackingMessage = "good luck?!?!"
crackingMessage2 = "LOOL"
iterations = 1000
hex_len = 12
drexxys_format = True
#! do NOT change this
includ = ''
if drexxys_format: 
    x = "bShouldRapeIDA"
    includ = "#include \"cfg.h\""
else: 
    includ = ""
    x= "1"

#! end
def generate_hex(length: int = 6) -> str:
    hex_chars = "0123456789abcdef"
    result = "0x" + "".join(secrets.choice(hex_chars) for _ in range(length))
    return result

file = f"""// this is for rare usage and increases compile time by like 600X but it's really funny
// just add {funcName}(); to any function you want hidden by IDA decompilation
// it overloads IDA and just causes an error
// asm obviously still visible but it's very much pushed down due to the absolute massive chunk of garbage
{includ}
#define {funcName}_ {x} // set to 0 for disabled (the function is still defined with no contents below so no need to delete a chunk of ur code)


#if {funcName}_
#include <Windows.h>
#pragma optimize("", off)
__forceinline void {funcName}() 
{{"""

for i in range(iterations):
    file += f"""
    volatile int a{i} = __rdtsc() % 1337;
    a{i} ^= {generate_hex(hex_len)};
    if (a{i} == {generate_hex(hex_len)})
        MessageBoxA(0, "{crackingMessage}", "{crackingMessage2}", 0);
    """

file += f"""}}
#pragma optimize("", on)
#else
static __forceinline void {funcName}() {{
    // do nothing cause it's not enabled :3
}}
#endif
"""

with open("idaraper.cpp", "w") as f:
    f.write(file)

print(f"Wrote {len(file.splitlines()) + 1} lines to idaraper.cpp")
