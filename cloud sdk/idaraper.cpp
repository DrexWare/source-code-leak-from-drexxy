// this is for rare usage and increases compile time by like 600X but it's really funny
// just add rape_ida(); to any function you want hidden by IDA decompilation
// it overloads IDA and just causes an error
// asm obviously still visible but it's very much pushed down due to the absolute massive chunk of garbage
# include "cfg.h"
#define rape_ida_ bShouldRapeIDA // set to 0 for disabled (the function is still defined with no contents below so no need to delete a chunk of ur code)


#if rape_ida_
#include <Windows.h>
#pragma optimize("", off)
__forceinline void rape_ida()
{
	volatile int a0 = __rdtsc() % 1337;
	a0 ^= 0xa2742f319735;
	if (a0 == 0xa7f3e33433ff)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a1 = __rdtsc() % 1337;
	a1 ^= 0xabaf6f67c236;
	if (a1 == 0x7512181f2438)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a2 = __rdtsc() % 1337;
	a2 ^= 0x3df3430f5fc4;
	if (a2 == 0x34ebee0e066e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a3 = __rdtsc() % 1337;
	a3 ^= 0x743912b479b7;
	if (a3 == 0x1bc95ade2c16)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a4 = __rdtsc() % 1337;
	a4 ^= 0x8b9aa5c7f1c8;
	if (a4 == 0xfbc9b0e8dd32)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a5 = __rdtsc() % 1337;
	a5 ^= 0xd49a530d83dc;
	if (a5 == 0x41bf44dc4b0b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a6 = __rdtsc() % 1337;
	a6 ^= 0x50fccfd7e5f4;
	if (a6 == 0x353b5a240932)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a7 = __rdtsc() % 1337;
	a7 ^= 0xc728ff4a14f1;
	if (a7 == 0xa4443772fbbf)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a8 = __rdtsc() % 1337;
	a8 ^= 0x6df973c72703;
	if (a8 == 0x45b8c37e9d73)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a9 = __rdtsc() % 1337;
	a9 ^= 0x2a61c3efb1c8;
	if (a9 == 0xfe51c2f05394)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a10 = __rdtsc() % 1337;
	a10 ^= 0x7ea080101dc8;
	if (a10 == 0x2fa54ed7504b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a11 = __rdtsc() % 1337;
	a11 ^= 0x93979eea7b7c;
	if (a11 == 0x4c0b32b67d0f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a12 = __rdtsc() % 1337;
	a12 ^= 0xcca5f85c08a4;
	if (a12 == 0xce2fd261281b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a13 = __rdtsc() % 1337;
	a13 ^= 0xfc438be4aa3c;
	if (a13 == 0xeb506340a2e2)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a14 = __rdtsc() % 1337;
	a14 ^= 0x60a7217c07ad;
	if (a14 == 0xc2781e7920b5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a15 = __rdtsc() % 1337;
	a15 ^= 0x4f33a6ebb79c;
	if (a15 == 0x922459f1d69f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a16 = __rdtsc() % 1337;
	a16 ^= 0x4e1d1b03ea9e;
	if (a16 == 0xb7527e4f407e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a17 = __rdtsc() % 1337;
	a17 ^= 0x517cb7eccfee;
	if (a17 == 0xbc2b7cb4c5ca)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a18 = __rdtsc() % 1337;
	a18 ^= 0xfd02eac21355;
	if (a18 == 0xccc3ff5b8804)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a19 = __rdtsc() % 1337;
	a19 ^= 0xad031742e43a;
	if (a19 == 0xc84b17855051)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a20 = __rdtsc() % 1337;
	a20 ^= 0xaa9e09171743;
	if (a20 == 0xc5134b4031f6)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a21 = __rdtsc() % 1337;
	a21 ^= 0x618fcf21baec;
	if (a21 == 0x931fdab4f943)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a22 = __rdtsc() % 1337;
	a22 ^= 0x25561bf1cfeb;
	if (a22 == 0xee6b34dec227)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a23 = __rdtsc() % 1337;
	a23 ^= 0x83575808627d;
	if (a23 == 0xd580c52c3106)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a24 = __rdtsc() % 1337;
	a24 ^= 0x9123c2e59d20;
	if (a24 == 0x24faae07033e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a25 = __rdtsc() % 1337;
	a25 ^= 0xdd5ad91f4fea;
	if (a25 == 0x059c30942f98)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a26 = __rdtsc() % 1337;
	a26 ^= 0xaf20323d4de4;
	if (a26 == 0xe73e68cc0e28)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a27 = __rdtsc() % 1337;
	a27 ^= 0xaa47ff5b035b;
	if (a27 == 0xcc1ea5b1d698)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a28 = __rdtsc() % 1337;
	a28 ^= 0xeb94b7eda6ba;
	if (a28 == 0xc5236d19ba3e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a29 = __rdtsc() % 1337;
	a29 ^= 0x52625fdc2bdf;
	if (a29 == 0x8afd164b5324)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a30 = __rdtsc() % 1337;
	a30 ^= 0x77edc141ce84;
	if (a30 == 0x46465027093f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a31 = __rdtsc() % 1337;
	a31 ^= 0x8d45dd677cee;
	if (a31 == 0x4fa7e4e719be)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a32 = __rdtsc() % 1337;
	a32 ^= 0x9c2bae8737d2;
	if (a32 == 0xc0421430ef82)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a33 = __rdtsc() % 1337;
	a33 ^= 0xe01a0e9d780e;
	if (a33 == 0xae9507c86a44)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a34 = __rdtsc() % 1337;
	a34 ^= 0x18b53420e6af;
	if (a34 == 0xa5939a302c04)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a35 = __rdtsc() % 1337;
	a35 ^= 0xc66a5e6d600c;
	if (a35 == 0x11bd3db37a55)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a36 = __rdtsc() % 1337;
	a36 ^= 0xafcc169dded5;
	if (a36 == 0x0480a06219c7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a37 = __rdtsc() % 1337;
	a37 ^= 0x36baff3527db;
	if (a37 == 0x760dcc4c62e0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a38 = __rdtsc() % 1337;
	a38 ^= 0x2334f0058922;
	if (a38 == 0x9eb55ea419d0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a39 = __rdtsc() % 1337;
	a39 ^= 0x775eddae9f2c;
	if (a39 == 0xb07ddd199e13)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a40 = __rdtsc() % 1337;
	a40 ^= 0x2dbf80ea5035;
	if (a40 == 0xa8829a9bac8b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a41 = __rdtsc() % 1337;
	a41 ^= 0x800216c9f535;
	if (a41 == 0x20c6eb4219db)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a42 = __rdtsc() % 1337;
	a42 ^= 0xeb92e183133b;
	if (a42 == 0x26a3057e202f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a43 = __rdtsc() % 1337;
	a43 ^= 0xadbdc46e2871;
	if (a43 == 0x332334fa7d81)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a44 = __rdtsc() % 1337;
	a44 ^= 0xddebafc99b2f;
	if (a44 == 0xf38fe4a6efe1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a45 = __rdtsc() % 1337;
	a45 ^= 0x9f18276b6794;
	if (a45 == 0xb245045cfbba)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a46 = __rdtsc() % 1337;
	a46 ^= 0xfea3f99a53aa;
	if (a46 == 0x6b96410237bf)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a47 = __rdtsc() % 1337;
	a47 ^= 0x10289df2fa42;
	if (a47 == 0x7d73707f0d46)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a48 = __rdtsc() % 1337;
	a48 ^= 0x387231b3f99d;
	if (a48 == 0x5f5d3ecf3019)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a49 = __rdtsc() % 1337;
	a49 ^= 0xeffc820f60f7;
	if (a49 == 0x96979154ae70)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a50 = __rdtsc() % 1337;
	a50 ^= 0xffaa50b41514;
	if (a50 == 0x3ff247a39bcf)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a51 = __rdtsc() % 1337;
	a51 ^= 0xdd33371a00e7;
	if (a51 == 0x563bf7796b48)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a52 = __rdtsc() % 1337;
	a52 ^= 0xc031d2e1dcb7;
	if (a52 == 0x522ac556b82a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a53 = __rdtsc() % 1337;
	a53 ^= 0xb9cc75f6aac3;
	if (a53 == 0x99f98ed9b228)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a54 = __rdtsc() % 1337;
	a54 ^= 0xd8dbca758e57;
	if (a54 == 0x866958c82308)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a55 = __rdtsc() % 1337;
	a55 ^= 0x54b7cb28a36a;
	if (a55 == 0x95030638d73a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a56 = __rdtsc() % 1337;
	a56 ^= 0x052afd07082c;
	if (a56 == 0x8d54a03e4bbc)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a57 = __rdtsc() % 1337;
	a57 ^= 0x32d5b07f1c70;
	if (a57 == 0xe71cb6adcaa4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a58 = __rdtsc() % 1337;
	a58 ^= 0x40b398430c80;
	if (a58 == 0x8cad7eda36e5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a59 = __rdtsc() % 1337;
	a59 ^= 0x764dd553170a;
	if (a59 == 0x24e4466434f8)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a60 = __rdtsc() % 1337;
	a60 ^= 0xd6513316527a;
	if (a60 == 0xb5dc9d0ca408)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a61 = __rdtsc() % 1337;
	a61 ^= 0x8e933ea4dc4f;
	if (a61 == 0x105f28a9087f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a62 = __rdtsc() % 1337;
	a62 ^= 0x55db3a2c0afe;
	if (a62 == 0x0d89c958648e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a63 = __rdtsc() % 1337;
	a63 ^= 0xb6539115182d;
	if (a63 == 0x7b6d60f7a291)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a64 = __rdtsc() % 1337;
	a64 ^= 0xd269db158d5e;
	if (a64 == 0x59487478dc9f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a65 = __rdtsc() % 1337;
	a65 ^= 0xf2c6d6a33b24;
	if (a65 == 0x8be12ab581e2)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a66 = __rdtsc() % 1337;
	a66 ^= 0x7742af2c6c21;
	if (a66 == 0x3f2d9ed4c431)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a67 = __rdtsc() % 1337;
	a67 ^= 0xc15dacc2ba1b;
	if (a67 == 0xbb8ab0b9c1ab)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a68 = __rdtsc() % 1337;
	a68 ^= 0x7eed8045e536;
	if (a68 == 0x699074678aae)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a69 = __rdtsc() % 1337;
	a69 ^= 0xbb3b016ceba2;
	if (a69 == 0x859d5f5d1bd5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a70 = __rdtsc() % 1337;
	a70 ^= 0x75e7cffd1bec;
	if (a70 == 0xf7e8a92cb7c4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a71 = __rdtsc() % 1337;
	a71 ^= 0x8345d4961f4c;
	if (a71 == 0x85176d374fcd)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a72 = __rdtsc() % 1337;
	a72 ^= 0x8ce17d690b28;
	if (a72 == 0xabb9bb91c426)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a73 = __rdtsc() % 1337;
	a73 ^= 0x4627df2df512;
	if (a73 == 0xfd094c1d6d61)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a74 = __rdtsc() % 1337;
	a74 ^= 0xefa3983fb40f;
	if (a74 == 0x4c4b2445e7bf)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a75 = __rdtsc() % 1337;
	a75 ^= 0x2e46d41f8203;
	if (a75 == 0x4a9937accbfb)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a76 = __rdtsc() % 1337;
	a76 ^= 0x26f8abffac89;
	if (a76 == 0x1c4b89ccffbd)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a77 = __rdtsc() % 1337;
	a77 ^= 0x23a8ba9b374c;
	if (a77 == 0xc189635beb28)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a78 = __rdtsc() % 1337;
	a78 ^= 0x8c0491485720;
	if (a78 == 0x0b2ed27dc66a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a79 = __rdtsc() % 1337;
	a79 ^= 0x32679a7d2362;
	if (a79 == 0x31bdb92730a9)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a80 = __rdtsc() % 1337;
	a80 ^= 0x295e68e224e6;
	if (a80 == 0x2ec2d0ed4b51)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a81 = __rdtsc() % 1337;
	a81 ^= 0x111c82c50c36;
	if (a81 == 0x6f99901c3ae7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a82 = __rdtsc() % 1337;
	a82 ^= 0x8058f05bc4ee;
	if (a82 == 0xa85f36d3dff2)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a83 = __rdtsc() % 1337;
	a83 ^= 0x2de724097605;
	if (a83 == 0x9dcccc45fb44)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a84 = __rdtsc() % 1337;
	a84 ^= 0x716bf8a899d0;
	if (a84 == 0x3142cbebe4c4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a85 = __rdtsc() % 1337;
	a85 ^= 0x57db0c8bb8d7;
	if (a85 == 0x836561bed556)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a86 = __rdtsc() % 1337;
	a86 ^= 0xaf00c13bc5b0;
	if (a86 == 0x06b4b695acfb)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a87 = __rdtsc() % 1337;
	a87 ^= 0x78e1b6ee0b3f;
	if (a87 == 0x4fe0b9046035)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a88 = __rdtsc() % 1337;
	a88 ^= 0x9bbcb5965d46;
	if (a88 == 0xd55d22686ad2)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a89 = __rdtsc() % 1337;
	a89 ^= 0x056c8843eb65;
	if (a89 == 0x61261d26313f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a90 = __rdtsc() % 1337;
	a90 ^= 0xe451723f6255;
	if (a90 == 0x518e5b93f6f3)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a91 = __rdtsc() % 1337;
	a91 ^= 0xfa112874c11a;
	if (a91 == 0x6dae3d95f4b2)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a92 = __rdtsc() % 1337;
	a92 ^= 0x3f39b7a3ff34;
	if (a92 == 0xc1173d8d88bf)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a93 = __rdtsc() % 1337;
	a93 ^= 0xf4dcaa96e9e2;
	if (a93 == 0x23e0d4ea66f3)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a94 = __rdtsc() % 1337;
	a94 ^= 0xb7eaad866b98;
	if (a94 == 0xc771b26781d1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a95 = __rdtsc() % 1337;
	a95 ^= 0x45cda7564be4;
	if (a95 == 0x21f8e586e7f4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a96 = __rdtsc() % 1337;
	a96 ^= 0xc81b0c08572b;
	if (a96 == 0x00de9232e4c5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a97 = __rdtsc() % 1337;
	a97 ^= 0x260e67241146;
	if (a97 == 0xb54ef46c55a1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a98 = __rdtsc() % 1337;
	a98 ^= 0x05661494a8fb;
	if (a98 == 0xc2af6bb35e0f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a99 = __rdtsc() % 1337;
	a99 ^= 0x774055540e30;
	if (a99 == 0xcac8b1079866)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a100 = __rdtsc() % 1337;
	a100 ^= 0x93edea8db6bc;
	if (a100 == 0xe7aca187e9b0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a101 = __rdtsc() % 1337;
	a101 ^= 0x0b899a9b7c49;
	if (a101 == 0x3a13bcc829e3)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a102 = __rdtsc() % 1337;
	a102 ^= 0x4c4052a620cc;
	if (a102 == 0x044c7d55e79f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a103 = __rdtsc() % 1337;
	a103 ^= 0xc45c3c56002e;
	if (a103 == 0x3808b88dd48c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a104 = __rdtsc() % 1337;
	a104 ^= 0x93f50226383b;
	if (a104 == 0x37b0ba1c4baa)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a105 = __rdtsc() % 1337;
	a105 ^= 0xcc59259396d8;
	if (a105 == 0xa93b3660b49a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a106 = __rdtsc() % 1337;
	a106 ^= 0xff79ed2585c5;
	if (a106 == 0x775852c33ecc)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a107 = __rdtsc() % 1337;
	a107 ^= 0xe6ca48d3e69d;
	if (a107 == 0x04f23ed355ca)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a108 = __rdtsc() % 1337;
	a108 ^= 0xfaee57b4b6a8;
	if (a108 == 0x73a095c6cfaa)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a109 = __rdtsc() % 1337;
	a109 ^= 0x93dbe6728bb2;
	if (a109 == 0xac894ed9a4f0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a110 = __rdtsc() % 1337;
	a110 ^= 0xd7121059e9c2;
	if (a110 == 0xe8803ba2a546)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a111 = __rdtsc() % 1337;
	a111 ^= 0x0446d5e312e8;
	if (a111 == 0xf205af151822)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a112 = __rdtsc() % 1337;
	a112 ^= 0x4ca3fe06c633;
	if (a112 == 0xaffd4cfaf2e0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a113 = __rdtsc() % 1337;
	a113 ^= 0x91d63e84f438;
	if (a113 == 0x389c78a117ec)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a114 = __rdtsc() % 1337;
	a114 ^= 0x29b30148fcde;
	if (a114 == 0xcf0da35e951b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a115 = __rdtsc() % 1337;
	a115 ^= 0xd39114918dba;
	if (a115 == 0x6f46499d3d2e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a116 = __rdtsc() % 1337;
	a116 ^= 0x8ca7c6f2d681;
	if (a116 == 0x1138059eeb1a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a117 = __rdtsc() % 1337;
	a117 ^= 0x157a579aee45;
	if (a117 == 0x6a0e1902cf91)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a118 = __rdtsc() % 1337;
	a118 ^= 0xf8b79664aaa2;
	if (a118 == 0xd7e06acc7373)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a119 = __rdtsc() % 1337;
	a119 ^= 0x6c6bda0cd810;
	if (a119 == 0xea2b9848cdc7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a120 = __rdtsc() % 1337;
	a120 ^= 0xd2c045cc831c;
	if (a120 == 0x2aacc8b8b80f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a121 = __rdtsc() % 1337;
	a121 ^= 0x651d805461f8;
	if (a121 == 0x66ee1560b7cd)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a122 = __rdtsc() % 1337;
	a122 ^= 0x0c30a0574d0d;
	if (a122 == 0xaa6690412eec)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a123 = __rdtsc() % 1337;
	a123 ^= 0x3eeb11de0ae2;
	if (a123 == 0xb5dc8489738b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a124 = __rdtsc() % 1337;
	a124 ^= 0x3f6cbc867cbc;
	if (a124 == 0x1694ba8e1a96)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a125 = __rdtsc() % 1337;
	a125 ^= 0x90b19b67358d;
	if (a125 == 0x0dd75b3e7d06)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a126 = __rdtsc() % 1337;
	a126 ^= 0xa84f78e33f89;
	if (a126 == 0xf13747282d08)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a127 = __rdtsc() % 1337;
	a127 ^= 0x3992ac259680;
	if (a127 == 0xe0c84f217588)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a128 = __rdtsc() % 1337;
	a128 ^= 0x97cb71405513;
	if (a128 == 0xc5133e0eb16e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a129 = __rdtsc() % 1337;
	a129 ^= 0xbae1f91f065b;
	if (a129 == 0x6a79676fd919)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a130 = __rdtsc() % 1337;
	a130 ^= 0x397e3217e7ce;
	if (a130 == 0x1e5690bff110)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a131 = __rdtsc() % 1337;
	a131 ^= 0xb0d5ba71255b;
	if (a131 == 0x8eec90fc5d78)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a132 = __rdtsc() % 1337;
	a132 ^= 0xe8262e78a62a;
	if (a132 == 0xe0c711970ee1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a133 = __rdtsc() % 1337;
	a133 ^= 0xa38d653a880e;
	if (a133 == 0x6710e69e1699)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a134 = __rdtsc() % 1337;
	a134 ^= 0xc98894f6e461;
	if (a134 == 0xfcecc59988a4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a135 = __rdtsc() % 1337;
	a135 ^= 0x601a1d00dccd;
	if (a135 == 0x6ac861479325)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a136 = __rdtsc() % 1337;
	a136 ^= 0xebb506253528;
	if (a136 == 0x7667184132bf)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a137 = __rdtsc() % 1337;
	a137 ^= 0x5bf6542adf92;
	if (a137 == 0x2462ddcc51d4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a138 = __rdtsc() % 1337;
	a138 ^= 0xf8ddb64660f8;
	if (a138 == 0x88436eb9e818)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a139 = __rdtsc() % 1337;
	a139 ^= 0x486485bd9ab6;
	if (a139 == 0x3f32d7ecbc21)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a140 = __rdtsc() % 1337;
	a140 ^= 0xf9eba0280ef9;
	if (a140 == 0x4d9d95d6620a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a141 = __rdtsc() % 1337;
	a141 ^= 0xdcfdb26d3376;
	if (a141 == 0x93fbf3d2b051)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a142 = __rdtsc() % 1337;
	a142 ^= 0xcf9395a7300c;
	if (a142 == 0x88b42bba5538)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a143 = __rdtsc() % 1337;
	a143 ^= 0x2460028be09a;
	if (a143 == 0x929591e97f5c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a144 = __rdtsc() % 1337;
	a144 ^= 0x27dac03d6c37;
	if (a144 == 0xf0b5307d0ff4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a145 = __rdtsc() % 1337;
	a145 ^= 0xcdb8f118b760;
	if (a145 == 0x795ff66d6115)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a146 = __rdtsc() % 1337;
	a146 ^= 0x4e939e4dd314;
	if (a146 == 0xd31a13acb48f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a147 = __rdtsc() % 1337;
	a147 ^= 0x1521dbee0bac;
	if (a147 == 0xeb285c62a610)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a148 = __rdtsc() % 1337;
	a148 ^= 0xf9960f96216e;
	if (a148 == 0x3df6934aaf1d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a149 = __rdtsc() % 1337;
	a149 ^= 0xb74105076c28;
	if (a149 == 0x3ce272d35795)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a150 = __rdtsc() % 1337;
	a150 ^= 0x1a5c8fc05633;
	if (a150 == 0xeec920192c4e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a151 = __rdtsc() % 1337;
	a151 ^= 0x9e4824008bbc;
	if (a151 == 0x76b34827476c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a152 = __rdtsc() % 1337;
	a152 ^= 0xd48c0ae6be4b;
	if (a152 == 0xa07c0ce32c39)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a153 = __rdtsc() % 1337;
	a153 ^= 0xfc0ea2215c58;
	if (a153 == 0x50cf9afef88d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a154 = __rdtsc() % 1337;
	a154 ^= 0x38808c7ea803;
	if (a154 == 0x81397d0f4727)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a155 = __rdtsc() % 1337;
	a155 ^= 0x19cd4a6e206e;
	if (a155 == 0x1dca9170884f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a156 = __rdtsc() % 1337;
	a156 ^= 0x93bfd1223efa;
	if (a156 == 0x5894a5c7614c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a157 = __rdtsc() % 1337;
	a157 ^= 0x78566003e6ca;
	if (a157 == 0x4952383cbe1f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a158 = __rdtsc() % 1337;
	a158 ^= 0x5ef43dd9f9f6;
	if (a158 == 0x74a4849f57d5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a159 = __rdtsc() % 1337;
	a159 ^= 0x949b7a8c08b9;
	if (a159 == 0x42b6562f1233)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a160 = __rdtsc() % 1337;
	a160 ^= 0xe3a4b2a1926c;
	if (a160 == 0xd07d14e99b3f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a161 = __rdtsc() % 1337;
	a161 ^= 0xfea289ff9765;
	if (a161 == 0x26c192335c44)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a162 = __rdtsc() % 1337;
	a162 ^= 0xe5fbb4b4587f;
	if (a162 == 0xf7194bf9bded)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a163 = __rdtsc() % 1337;
	a163 ^= 0xe84e0278c774;
	if (a163 == 0x45c59ebdf59b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a164 = __rdtsc() % 1337;
	a164 ^= 0xa3f51eadc055;
	if (a164 == 0x1ff70e47e0e9)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a165 = __rdtsc() % 1337;
	a165 ^= 0x58786a63e169;
	if (a165 == 0xfdcdb37a5d45)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a166 = __rdtsc() % 1337;
	a166 ^= 0x2c6ecb33f2d3;
	if (a166 == 0xfe0c0546aa8f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a167 = __rdtsc() % 1337;
	a167 ^= 0x876a72e5ea41;
	if (a167 == 0x7508fd982271)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a168 = __rdtsc() % 1337;
	a168 ^= 0xb808e9da63c4;
	if (a168 == 0xbac4afd6f9f5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a169 = __rdtsc() % 1337;
	a169 ^= 0x991854d32df5;
	if (a169 == 0xf48093cca230)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a170 = __rdtsc() % 1337;
	a170 ^= 0xa2bdfbcd0b13;
	if (a170 == 0xbe5c991c3a9b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a171 = __rdtsc() % 1337;
	a171 ^= 0x9dcce255ad97;
	if (a171 == 0xd2292f65f732)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a172 = __rdtsc() % 1337;
	a172 ^= 0xc3768598a9d6;
	if (a172 == 0xee2d86706178)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a173 = __rdtsc() % 1337;
	a173 ^= 0x47b4e4cb6718;
	if (a173 == 0xaff6ce6ebb6e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a174 = __rdtsc() % 1337;
	a174 ^= 0x272021552024;
	if (a174 == 0x39426adaa732)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a175 = __rdtsc() % 1337;
	a175 ^= 0x28c910481fbc;
	if (a175 == 0x75ede876e65e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a176 = __rdtsc() % 1337;
	a176 ^= 0xc08079404ed2;
	if (a176 == 0x3b7f537ca080)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a177 = __rdtsc() % 1337;
	a177 ^= 0xb33ab323db1b;
	if (a177 == 0xf56571e9018a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a178 = __rdtsc() % 1337;
	a178 ^= 0xb533fe2f91f2;
	if (a178 == 0x07282ddac886)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a179 = __rdtsc() % 1337;
	a179 ^= 0xeb2d8c3dd801;
	if (a179 == 0xea475e12f8fa)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a180 = __rdtsc() % 1337;
	a180 ^= 0xb2d01ef794d4;
	if (a180 == 0x80eb92aa017b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a181 = __rdtsc() % 1337;
	a181 ^= 0xb22eb205ea44;
	if (a181 == 0xd35e99c93409)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a182 = __rdtsc() % 1337;
	a182 ^= 0x0182ff686cf5;
	if (a182 == 0x8d0e9835e14c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a183 = __rdtsc() % 1337;
	a183 ^= 0xb4d44d32210d;
	if (a183 == 0x2408b9cb1a70)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a184 = __rdtsc() % 1337;
	a184 ^= 0xb0c7895c5c25;
	if (a184 == 0xf757d9e743ed)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a185 = __rdtsc() % 1337;
	a185 ^= 0x5c96823e8895;
	if (a185 == 0x3431821f7fda)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a186 = __rdtsc() % 1337;
	a186 ^= 0x74b56c9e0d85;
	if (a186 == 0x3fa4dea891cf)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a187 = __rdtsc() % 1337;
	a187 ^= 0xb963c14adccc;
	if (a187 == 0x1f74b01c54be)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a188 = __rdtsc() % 1337;
	a188 ^= 0x72a421ff3c45;
	if (a188 == 0x8ee5ed9ed452)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a189 = __rdtsc() % 1337;
	a189 ^= 0x0dce3a232efc;
	if (a189 == 0x955fc8822d9d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a190 = __rdtsc() % 1337;
	a190 ^= 0x11777c4e15be;
	if (a190 == 0x961ed1ec3a0c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a191 = __rdtsc() % 1337;
	a191 ^= 0xf09e052c1919;
	if (a191 == 0x03f35260451a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a192 = __rdtsc() % 1337;
	a192 ^= 0xa847155a139a;
	if (a192 == 0xd1a2389b39b4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a193 = __rdtsc() % 1337;
	a193 ^= 0x605abebc1048;
	if (a193 == 0xdeb23d9db230)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a194 = __rdtsc() % 1337;
	a194 ^= 0x44b374a3cfaa;
	if (a194 == 0xe59ebf8d77b1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a195 = __rdtsc() % 1337;
	a195 ^= 0x5d352dd8de5f;
	if (a195 == 0x4bc01f920c09)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a196 = __rdtsc() % 1337;
	a196 ^= 0x95369ff5012a;
	if (a196 == 0x751b0ffdf75e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a197 = __rdtsc() % 1337;
	a197 ^= 0xa5d8006e864b;
	if (a197 == 0x8896e48aaf13)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a198 = __rdtsc() % 1337;
	a198 ^= 0x28667aa452e4;
	if (a198 == 0x4d8c63d6c807)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a199 = __rdtsc() % 1337;
	a199 ^= 0xbb6def7706ed;
	if (a199 == 0xe4ad280330cc)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a200 = __rdtsc() % 1337;
	a200 ^= 0x0ab292a01928;
	if (a200 == 0x5b0f35c9ae99)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a201 = __rdtsc() % 1337;
	a201 ^= 0xdf697d06df58;
	if (a201 == 0xba8b1f67faeb)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a202 = __rdtsc() % 1337;
	a202 ^= 0x218233577a19;
	if (a202 == 0x208cd704342a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a203 = __rdtsc() % 1337;
	a203 ^= 0x3772155fdbf3;
	if (a203 == 0xa4ac5d53b3f1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a204 = __rdtsc() % 1337;
	a204 ^= 0x336be38fd877;
	if (a204 == 0xa0b2325225ba)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a205 = __rdtsc() % 1337;
	a205 ^= 0xd9cedabe33c6;
	if (a205 == 0xe8f4d86ae6e3)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a206 = __rdtsc() % 1337;
	a206 ^= 0xad094f8a0d6d;
	if (a206 == 0x6e859ed08364)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a207 = __rdtsc() % 1337;
	a207 ^= 0x3166ad8fc356;
	if (a207 == 0x52edb17964d0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a208 = __rdtsc() % 1337;
	a208 ^= 0x611e795584ed;
	if (a208 == 0x19fa602914d4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a209 = __rdtsc() % 1337;
	a209 ^= 0x1dcad330a233;
	if (a209 == 0x474e99268608)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a210 = __rdtsc() % 1337;
	a210 ^= 0x7f3a2821bb24;
	if (a210 == 0x7d645b4ddcde)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a211 = __rdtsc() % 1337;
	a211 ^= 0x1f9a2043b24b;
	if (a211 == 0xecebf901ca28)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a212 = __rdtsc() % 1337;
	a212 ^= 0x610c05a6e9ba;
	if (a212 == 0xcfadc8fb2b5f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a213 = __rdtsc() % 1337;
	a213 ^= 0x609e982ff83e;
	if (a213 == 0x1f026ec8304a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a214 = __rdtsc() % 1337;
	a214 ^= 0xec2ad6d3e588;
	if (a214 == 0xe132ff53349b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a215 = __rdtsc() % 1337;
	a215 ^= 0xcf98197691db;
	if (a215 == 0x5bda600aaf7d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a216 = __rdtsc() % 1337;
	a216 ^= 0x662fe2c390a3;
	if (a216 == 0x27f740f7b373)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a217 = __rdtsc() % 1337;
	a217 ^= 0x7edd4174161a;
	if (a217 == 0x39e101c63a00)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a218 = __rdtsc() % 1337;
	a218 ^= 0x0d5a45d65598;
	if (a218 == 0xa7cff2dba341)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a219 = __rdtsc() % 1337;
	a219 ^= 0x3b957025b479;
	if (a219 == 0x56c75ef82f96)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a220 = __rdtsc() % 1337;
	a220 ^= 0x5bc8a8408bc4;
	if (a220 == 0x85998f5a813d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a221 = __rdtsc() % 1337;
	a221 ^= 0x4cc2b9cb9e20;
	if (a221 == 0xa60cb04ab826)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a222 = __rdtsc() % 1337;
	a222 ^= 0x2f25dab71f5c;
	if (a222 == 0x853c7ea63cb1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a223 = __rdtsc() % 1337;
	a223 ^= 0x52e0e1899a36;
	if (a223 == 0xdb549747b328)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a224 = __rdtsc() % 1337;
	a224 ^= 0xdfe644d4c405;
	if (a224 == 0x8971fd1195b0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a225 = __rdtsc() % 1337;
	a225 ^= 0x92a295352d7c;
	if (a225 == 0x4cc917b639ab)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a226 = __rdtsc() % 1337;
	a226 ^= 0xf93ce764a6af;
	if (a226 == 0xce3f466ef506)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a227 = __rdtsc() % 1337;
	a227 ^= 0x2b300dc77479;
	if (a227 == 0x7b49214d8e72)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a228 = __rdtsc() % 1337;
	a228 ^= 0x5047a7af25ee;
	if (a228 == 0x0b454b882c2a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a229 = __rdtsc() % 1337;
	a229 ^= 0x600049d1de12;
	if (a229 == 0xefa94a2977d0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a230 = __rdtsc() % 1337;
	a230 ^= 0x2d25ca05a2b8;
	if (a230 == 0x271c3b7aa717)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a231 = __rdtsc() % 1337;
	a231 ^= 0xd66430ac0c11;
	if (a231 == 0xbb670837571f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a232 = __rdtsc() % 1337;
	a232 ^= 0xe82683565481;
	if (a232 == 0x00deba3d8cc5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a233 = __rdtsc() % 1337;
	a233 ^= 0xeed509b67b14;
	if (a233 == 0x885b53ea6002)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a234 = __rdtsc() % 1337;
	a234 ^= 0xa67c6f82d6ca;
	if (a234 == 0xcec8449b05a3)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a235 = __rdtsc() % 1337;
	a235 ^= 0x669de068fad1;
	if (a235 == 0x7ff4ad319c32)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a236 = __rdtsc() % 1337;
	a236 ^= 0x589dea6abbd7;
	if (a236 == 0xd7cf90c14c8b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a237 = __rdtsc() % 1337;
	a237 ^= 0x8f269e34260b;
	if (a237 == 0x890ddd785e18)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a238 = __rdtsc() % 1337;
	a238 ^= 0x5c1761271edc;
	if (a238 == 0xb2c85013c735)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a239 = __rdtsc() % 1337;
	a239 ^= 0x13c6dc03a280;
	if (a239 == 0xf5b1c98f86ef)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a240 = __rdtsc() % 1337;
	a240 ^= 0x6a7e563ad45a;
	if (a240 == 0xf8b89ea8acf4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a241 = __rdtsc() % 1337;
	a241 ^= 0x215c31c8af95;
	if (a241 == 0xd419b1d68d84)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a242 = __rdtsc() % 1337;
	a242 ^= 0x8e00432441b5;
	if (a242 == 0xfd209c6e048c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a243 = __rdtsc() % 1337;
	a243 ^= 0x97dce0b53fb2;
	if (a243 == 0x6e57fe9f4c8a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a244 = __rdtsc() % 1337;
	a244 ^= 0x9d30216832b4;
	if (a244 == 0x2b7571ad9b7d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a245 = __rdtsc() % 1337;
	a245 ^= 0xa9892570c6a2;
	if (a245 == 0x252e894749ad)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a246 = __rdtsc() % 1337;
	a246 ^= 0x22576a293ab6;
	if (a246 == 0xba164664dd8c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a247 = __rdtsc() % 1337;
	a247 ^= 0xe17ead01d522;
	if (a247 == 0x49a19eeb19e0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a248 = __rdtsc() % 1337;
	a248 ^= 0xa19bc95304b2;
	if (a248 == 0xdd67dc8df491)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a249 = __rdtsc() % 1337;
	a249 ^= 0xffabd5245480;
	if (a249 == 0x55838953ab30)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a250 = __rdtsc() % 1337;
	a250 ^= 0x47d3ae45ca79;
	if (a250 == 0xba032bfdb289)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a251 = __rdtsc() % 1337;
	a251 ^= 0x6b3f3609ea6c;
	if (a251 == 0xb301832247dd)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a252 = __rdtsc() % 1337;
	a252 ^= 0x8d3912fb8932;
	if (a252 == 0x4303371d5a32)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a253 = __rdtsc() % 1337;
	a253 ^= 0xf1dc42fae81f;
	if (a253 == 0x3825aca2c705)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a254 = __rdtsc() % 1337;
	a254 ^= 0x3e175fe031c4;
	if (a254 == 0xaf2f2bd3f371)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a255 = __rdtsc() % 1337;
	a255 ^= 0x7a6e91a2c18b;
	if (a255 == 0x759be1b59471)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a256 = __rdtsc() % 1337;
	a256 ^= 0x6c399abfcd4f;
	if (a256 == 0x5ec6b4c46b18)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a257 = __rdtsc() % 1337;
	a257 ^= 0x2ddc4e866891;
	if (a257 == 0x1e6d1c80fc4e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a258 = __rdtsc() % 1337;
	a258 ^= 0xd8fa10050c62;
	if (a258 == 0x5351aeb2e141)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a259 = __rdtsc() % 1337;
	a259 ^= 0x09b05570337d;
	if (a259 == 0x4a0ae40b421f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a260 = __rdtsc() % 1337;
	a260 ^= 0xe024d67de16b;
	if (a260 == 0x15e155e03c5b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a261 = __rdtsc() % 1337;
	a261 ^= 0xb345ef392aad;
	if (a261 == 0x874542554f1f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a262 = __rdtsc() % 1337;
	a262 ^= 0x61dbc9c19c59;
	if (a262 == 0x5836a839b567)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a263 = __rdtsc() % 1337;
	a263 ^= 0xe8cf72ae86aa;
	if (a263 == 0xd2144f093c49)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a264 = __rdtsc() % 1337;
	a264 ^= 0x050f31ec8d4b;
	if (a264 == 0x74969727ce3a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a265 = __rdtsc() % 1337;
	a265 ^= 0x8f03cc667aee;
	if (a265 == 0x775a4461009b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a266 = __rdtsc() % 1337;
	a266 ^= 0x7bb5ef4e2a1b;
	if (a266 == 0x1a1e513b2365)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a267 = __rdtsc() % 1337;
	a267 ^= 0xdd0a747b34c7;
	if (a267 == 0x86a7c3a967e3)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a268 = __rdtsc() % 1337;
	a268 ^= 0x83caead07757;
	if (a268 == 0xfa99a17cafc7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a269 = __rdtsc() % 1337;
	a269 ^= 0xa26c944fc2e0;
	if (a269 == 0xc5ef21013e74)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a270 = __rdtsc() % 1337;
	a270 ^= 0x4d3cda66acf6;
	if (a270 == 0x2bde23d3c2fb)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a271 = __rdtsc() % 1337;
	a271 ^= 0x0644591d4944;
	if (a271 == 0x58d55b920632)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a272 = __rdtsc() % 1337;
	a272 ^= 0x3862d0e06db0;
	if (a272 == 0xb5f598f8fe75)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a273 = __rdtsc() % 1337;
	a273 ^= 0x3af44bf761bb;
	if (a273 == 0x2a6aa92da545)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a274 = __rdtsc() % 1337;
	a274 ^= 0xf1487c11e71e;
	if (a274 == 0xbee3046c74bc)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a275 = __rdtsc() % 1337;
	a275 ^= 0x2f6d19ed3cbf;
	if (a275 == 0xc8dbbf865ffe)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a276 = __rdtsc() % 1337;
	a276 ^= 0x4fb321561f28;
	if (a276 == 0xc64ec880f5e0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a277 = __rdtsc() % 1337;
	a277 ^= 0x7b8c61b1506b;
	if (a277 == 0x61cabcc1e1f9)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a278 = __rdtsc() % 1337;
	a278 ^= 0xab7dc93df296;
	if (a278 == 0x2a5ee93f47c9)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a279 = __rdtsc() % 1337;
	a279 ^= 0xc162260fb5ae;
	if (a279 == 0x718c1e6620d6)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a280 = __rdtsc() % 1337;
	a280 ^= 0xa6bd7c86d1f9;
	if (a280 == 0x517c0e658fb1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a281 = __rdtsc() % 1337;
	a281 ^= 0xd4f39c14aedb;
	if (a281 == 0x87c0da9cdded)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a282 = __rdtsc() % 1337;
	a282 ^= 0x79c5a8caee91;
	if (a282 == 0x51da63a05b11)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a283 = __rdtsc() % 1337;
	a283 ^= 0x8af45dba9b69;
	if (a283 == 0x0eddfede31c9)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a284 = __rdtsc() % 1337;
	a284 ^= 0x87e9207e107e;
	if (a284 == 0x1bf3ef30aa73)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a285 = __rdtsc() % 1337;
	a285 ^= 0x5ad75cfbc242;
	if (a285 == 0x87e3fce63975)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a286 = __rdtsc() % 1337;
	a286 ^= 0x4b1f51f246ad;
	if (a286 == 0xb063a253f8bf)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a287 = __rdtsc() % 1337;
	a287 ^= 0x7f503c9ee7cf;
	if (a287 == 0x8a09233257b4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a288 = __rdtsc() % 1337;
	a288 ^= 0xf21118cf67d5;
	if (a288 == 0x6d327d15d84a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a289 = __rdtsc() % 1337;
	a289 ^= 0xa27ffdc77f12;
	if (a289 == 0x474d561aca33)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a290 = __rdtsc() % 1337;
	a290 ^= 0xf5d7ceaae371;
	if (a290 == 0x55eb0794ed8b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a291 = __rdtsc() % 1337;
	a291 ^= 0xe2d80014267a;
	if (a291 == 0xf73849a11111)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a292 = __rdtsc() % 1337;
	a292 ^= 0x6421f2220aa2;
	if (a292 == 0x85310d3381af)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a293 = __rdtsc() % 1337;
	a293 ^= 0xf42da126eaad;
	if (a293 == 0x1c4f1158032e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a294 = __rdtsc() % 1337;
	a294 ^= 0x57eb6dedeb02;
	if (a294 == 0xfc1883d83671)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a295 = __rdtsc() % 1337;
	a295 ^= 0x8f76c2b8a3c4;
	if (a295 == 0xb411f89851a0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a296 = __rdtsc() % 1337;
	a296 ^= 0xe46167d0ce07;
	if (a296 == 0xaaffba7c9af6)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a297 = __rdtsc() % 1337;
	a297 ^= 0x7af0f023165b;
	if (a297 == 0x57d28700a847)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a298 = __rdtsc() % 1337;
	a298 ^= 0xb09371ed235d;
	if (a298 == 0x3ee5fe429f2c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a299 = __rdtsc() % 1337;
	a299 ^= 0xa50a9fde7386;
	if (a299 == 0x37b246207650)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a300 = __rdtsc() % 1337;
	a300 ^= 0x371b9e4def41;
	if (a300 == 0x25705c2e5dcd)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a301 = __rdtsc() % 1337;
	a301 ^= 0x75f3c7e9e4e0;
	if (a301 == 0xd3f62c4fafdc)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a302 = __rdtsc() % 1337;
	a302 ^= 0x743127c52562;
	if (a302 == 0xf40ecd0f8182)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a303 = __rdtsc() % 1337;
	a303 ^= 0x07c6e24c15d4;
	if (a303 == 0x3893abc7cf24)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a304 = __rdtsc() % 1337;
	a304 ^= 0xd944c44f090a;
	if (a304 == 0x11e76b39f857)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a305 = __rdtsc() % 1337;
	a305 ^= 0xded9e5e66fec;
	if (a305 == 0xac1291346a3d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a306 = __rdtsc() % 1337;
	a306 ^= 0xd9293ecffa3e;
	if (a306 == 0xdd339345e56c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a307 = __rdtsc() % 1337;
	a307 ^= 0xc28a034e5835;
	if (a307 == 0x629a44cf20c2)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a308 = __rdtsc() % 1337;
	a308 ^= 0xcef2305b05ee;
	if (a308 == 0xa088a153ba4c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a309 = __rdtsc() % 1337;
	a309 ^= 0x03b89b0c8355;
	if (a309 == 0x194843de0bc7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a310 = __rdtsc() % 1337;
	a310 ^= 0x83ceb819d24d;
	if (a310 == 0x40506ce0f9fe)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a311 = __rdtsc() % 1337;
	a311 ^= 0x064c57feff8c;
	if (a311 == 0xdd5a18bc8405)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a312 = __rdtsc() % 1337;
	a312 ^= 0x6a49aafc8da6;
	if (a312 == 0xecec1ba364ab)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a313 = __rdtsc() % 1337;
	a313 ^= 0x01e443570423;
	if (a313 == 0xfc0f40f3e7fc)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a314 = __rdtsc() % 1337;
	a314 ^= 0x0fecb1dad146;
	if (a314 == 0xfd7ab8ad6e9d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a315 = __rdtsc() % 1337;
	a315 ^= 0x64e8814a5322;
	if (a315 == 0x0df01c5b3dfc)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a316 = __rdtsc() % 1337;
	a316 ^= 0x364f51c31d97;
	if (a316 == 0xcaa74241202c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a317 = __rdtsc() % 1337;
	a317 ^= 0x6893e703a8cb;
	if (a317 == 0xab09fb732e8b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a318 = __rdtsc() % 1337;
	a318 ^= 0xd4a2016fcec5;
	if (a318 == 0xe901e2f3b4ba)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a319 = __rdtsc() % 1337;
	a319 ^= 0xd6936c61b1ac;
	if (a319 == 0x7f4406ab8cb2)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a320 = __rdtsc() % 1337;
	a320 ^= 0x4106ddb1c526;
	if (a320 == 0x2b20f9f72598)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a321 = __rdtsc() % 1337;
	a321 ^= 0x1e932d87310a;
	if (a321 == 0xff1504784065)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a322 = __rdtsc() % 1337;
	a322 ^= 0xf603309027a3;
	if (a322 == 0x531f5dd009d4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a323 = __rdtsc() % 1337;
	a323 ^= 0x5a3a1bd54bf7;
	if (a323 == 0xb120a41ae2b7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a324 = __rdtsc() % 1337;
	a324 ^= 0x53dfbb21ba9f;
	if (a324 == 0xa9fc6310b1bf)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a325 = __rdtsc() % 1337;
	a325 ^= 0xad4da247271f;
	if (a325 == 0x0b1b32ac94ca)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a326 = __rdtsc() % 1337;
	a326 ^= 0x59e100261ce8;
	if (a326 == 0xfff7e8f3157e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a327 = __rdtsc() % 1337;
	a327 ^= 0x45b39346ba47;
	if (a327 == 0xbec2c62324f8)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a328 = __rdtsc() % 1337;
	a328 ^= 0x4a7ac5c7669d;
	if (a328 == 0xaed251719080)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a329 = __rdtsc() % 1337;
	a329 ^= 0x662c0a676019;
	if (a329 == 0x438ac628ae3e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a330 = __rdtsc() % 1337;
	a330 ^= 0x1e2577fc2aba;
	if (a330 == 0x406f22f316aa)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a331 = __rdtsc() % 1337;
	a331 ^= 0x15310cee7e74;
	if (a331 == 0xadfd30359bfa)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a332 = __rdtsc() % 1337;
	a332 ^= 0xf5c135b5e612;
	if (a332 == 0x67e910a7c60c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a333 = __rdtsc() % 1337;
	a333 ^= 0x97b5c649318b;
	if (a333 == 0x821d95671673)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a334 = __rdtsc() % 1337;
	a334 ^= 0x53f31d06a2ba;
	if (a334 == 0x22b7206376ac)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a335 = __rdtsc() % 1337;
	a335 ^= 0xa2e1fdadaaa2;
	if (a335 == 0xc4dbc0b33a7f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a336 = __rdtsc() % 1337;
	a336 ^= 0x353967953551;
	if (a336 == 0xe15a4fd921c0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a337 = __rdtsc() % 1337;
	a337 ^= 0xd3d64026f4db;
	if (a337 == 0x53b4f253745c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a338 = __rdtsc() % 1337;
	a338 ^= 0x70f1c09b50cf;
	if (a338 == 0x5635bb2fa764)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a339 = __rdtsc() % 1337;
	a339 ^= 0x9c3a02c7d418;
	if (a339 == 0xf8f722b9daa5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a340 = __rdtsc() % 1337;
	a340 ^= 0xa4f5fa93b4c7;
	if (a340 == 0x788a77b3f7e5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a341 = __rdtsc() % 1337;
	a341 ^= 0x2f2e54f6d673;
	if (a341 == 0x8d06dd5746ce)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a342 = __rdtsc() % 1337;
	a342 ^= 0x5f341ddc8ed6;
	if (a342 == 0x941e68be56c0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a343 = __rdtsc() % 1337;
	a343 ^= 0xf527472cd82c;
	if (a343 == 0xcb113a10e7d4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a344 = __rdtsc() % 1337;
	a344 ^= 0xaf91cf603beb;
	if (a344 == 0xfe006321fc7a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a345 = __rdtsc() % 1337;
	a345 ^= 0x7f98b1892d4a;
	if (a345 == 0xf96c2f5695bc)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a346 = __rdtsc() % 1337;
	a346 ^= 0x2a041892a55f;
	if (a346 == 0xea6fb62c7bf0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a347 = __rdtsc() % 1337;
	a347 ^= 0x875340ea4766;
	if (a347 == 0xa470553f647b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a348 = __rdtsc() % 1337;
	a348 ^= 0xdf0f4a4b83d0;
	if (a348 == 0xf388660ac85c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a349 = __rdtsc() % 1337;
	a349 ^= 0xc79f566c0e30;
	if (a349 == 0x0dafcf576806)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a350 = __rdtsc() % 1337;
	a350 ^= 0x50efcdf9006f;
	if (a350 == 0x0cd2d13272ed)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a351 = __rdtsc() % 1337;
	a351 ^= 0x0e2d2a6b59d3;
	if (a351 == 0x85cf411bd81e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a352 = __rdtsc() % 1337;
	a352 ^= 0xdd755c98fe3a;
	if (a352 == 0x221437b61e9f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a353 = __rdtsc() % 1337;
	a353 ^= 0xf0d73396f9ff;
	if (a353 == 0xb5f4922f3e29)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a354 = __rdtsc() % 1337;
	a354 ^= 0xb09cb8c2b3f3;
	if (a354 == 0xf2818a5f0634)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a355 = __rdtsc() % 1337;
	a355 ^= 0x504eddfdf809;
	if (a355 == 0x0865446b5029)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a356 = __rdtsc() % 1337;
	a356 ^= 0x7bb1f31501b4;
	if (a356 == 0xdbe48f20bff0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a357 = __rdtsc() % 1337;
	a357 ^= 0x873efb672ddb;
	if (a357 == 0xac01c3347144)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a358 = __rdtsc() % 1337;
	a358 ^= 0xe38a4adbd419;
	if (a358 == 0x9db7e1fd943b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a359 = __rdtsc() % 1337;
	a359 ^= 0x0ce0cb899e21;
	if (a359 == 0x18ffdd2b6e03)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a360 = __rdtsc() % 1337;
	a360 ^= 0xae3859a9d56b;
	if (a360 == 0x47d70ff1bb54)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a361 = __rdtsc() % 1337;
	a361 ^= 0xfe42688fe93f;
	if (a361 == 0xecd28c4cd50d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a362 = __rdtsc() % 1337;
	a362 ^= 0x98b712de62f1;
	if (a362 == 0x5e94e6934a40)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a363 = __rdtsc() % 1337;
	a363 ^= 0xd07b53dc6827;
	if (a363 == 0x875b5f287b35)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a364 = __rdtsc() % 1337;
	a364 ^= 0x0534d35207f7;
	if (a364 == 0xa53d982bdab3)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a365 = __rdtsc() % 1337;
	a365 ^= 0xd1ab824d2691;
	if (a365 == 0xd88ef5d0dbc6)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a366 = __rdtsc() % 1337;
	a366 ^= 0xba6f917944e4;
	if (a366 == 0x09e1177fcc59)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a367 = __rdtsc() % 1337;
	a367 ^= 0x32f4c6c80c4a;
	if (a367 == 0xaed19a9ef172)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a368 = __rdtsc() % 1337;
	a368 ^= 0x8c933ae098bb;
	if (a368 == 0x3898f832b45c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a369 = __rdtsc() % 1337;
	a369 ^= 0x3ee61b55c0f3;
	if (a369 == 0xa01df5c852d3)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a370 = __rdtsc() % 1337;
	a370 ^= 0x397288791973;
	if (a370 == 0xe007fc4f4037)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a371 = __rdtsc() % 1337;
	a371 ^= 0x4b4c888393a9;
	if (a371 == 0xcc42e6d69f40)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a372 = __rdtsc() % 1337;
	a372 ^= 0xc16c3ddfbb65;
	if (a372 == 0x95d8c43f3ad7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a373 = __rdtsc() % 1337;
	a373 ^= 0x7b31e7894b2b;
	if (a373 == 0x6b9efb1dedfb)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a374 = __rdtsc() % 1337;
	a374 ^= 0x6da487c68fdc;
	if (a374 == 0x05313b3ad45a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a375 = __rdtsc() % 1337;
	a375 ^= 0xb7b5df4fb023;
	if (a375 == 0xf0f1d8eece86)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a376 = __rdtsc() % 1337;
	a376 ^= 0xc885117079d8;
	if (a376 == 0x9edc08367761)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a377 = __rdtsc() % 1337;
	a377 ^= 0x36a875a0c615;
	if (a377 == 0x491a4db81751)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a378 = __rdtsc() % 1337;
	a378 ^= 0x8b925dd6a443;
	if (a378 == 0xfdc7d8f129a6)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a379 = __rdtsc() % 1337;
	a379 ^= 0x3412fe169f6a;
	if (a379 == 0x88caee6388c8)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a380 = __rdtsc() % 1337;
	a380 ^= 0x2dca02dee201;
	if (a380 == 0xad883e4effa6)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a381 = __rdtsc() % 1337;
	a381 ^= 0x5e644e137146;
	if (a381 == 0x10af0f0f1c47)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a382 = __rdtsc() % 1337;
	a382 ^= 0x8a04f6986cd5;
	if (a382 == 0xa58a0c2f24ca)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a383 = __rdtsc() % 1337;
	a383 ^= 0x7ebe0463e846;
	if (a383 == 0x4a87ec069058)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a384 = __rdtsc() % 1337;
	a384 ^= 0x945bf2f4386c;
	if (a384 == 0x9452eebcc2f9)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a385 = __rdtsc() % 1337;
	a385 ^= 0x9ed690549246;
	if (a385 == 0xadb672e5646d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a386 = __rdtsc() % 1337;
	a386 ^= 0x16c546b6f8dc;
	if (a386 == 0x643661a63396)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a387 = __rdtsc() % 1337;
	a387 ^= 0x9d732bcc21f7;
	if (a387 == 0x60ced35a71d8)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a388 = __rdtsc() % 1337;
	a388 ^= 0x02ad9071a9ba;
	if (a388 == 0x8df52e64c467)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a389 = __rdtsc() % 1337;
	a389 ^= 0x2374b394aa26;
	if (a389 == 0x0789c55d7e42)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a390 = __rdtsc() % 1337;
	a390 ^= 0x4543218a7178;
	if (a390 == 0x6009659b6331)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a391 = __rdtsc() % 1337;
	a391 ^= 0x736357a0a24b;
	if (a391 == 0x4326307ac884)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a392 = __rdtsc() % 1337;
	a392 ^= 0x9e2d59fc5d45;
	if (a392 == 0x4d52eb8064b9)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a393 = __rdtsc() % 1337;
	a393 ^= 0x6dcd82c3aa2a;
	if (a393 == 0x52edae283ece)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a394 = __rdtsc() % 1337;
	a394 ^= 0x21f4e36e0d92;
	if (a394 == 0x48770ea3a4ab)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a395 = __rdtsc() % 1337;
	a395 ^= 0xec4ed2368e3f;
	if (a395 == 0xf066c0784954)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a396 = __rdtsc() % 1337;
	a396 ^= 0x5d31112d8362;
	if (a396 == 0x1e75244a8f67)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a397 = __rdtsc() % 1337;
	a397 ^= 0x40c22a1f6ab4;
	if (a397 == 0xacb54ca02580)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a398 = __rdtsc() % 1337;
	a398 ^= 0x6b430a2d48f5;
	if (a398 == 0x1c440fe98338)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a399 = __rdtsc() % 1337;
	a399 ^= 0x60ca937e2ac8;
	if (a399 == 0x49c411b6e78c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a400 = __rdtsc() % 1337;
	a400 ^= 0xa68b7902d1d1;
	if (a400 == 0x61e3ae9c01df)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a401 = __rdtsc() % 1337;
	a401 ^= 0x4366f48c832f;
	if (a401 == 0x0f870a1e79e1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a402 = __rdtsc() % 1337;
	a402 ^= 0x0adcdf0c3b0b;
	if (a402 == 0x45ec78876b87)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a403 = __rdtsc() % 1337;
	a403 ^= 0x39098421bc9a;
	if (a403 == 0x9f92225d96cb)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a404 = __rdtsc() % 1337;
	a404 ^= 0x6b0fd6ddd8a9;
	if (a404 == 0x52ff4fce5e15)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a405 = __rdtsc() % 1337;
	a405 ^= 0xdc8c6c938e9d;
	if (a405 == 0x5599cab2b9c9)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a406 = __rdtsc() % 1337;
	a406 ^= 0x7a62a1175c17;
	if (a406 == 0xf1d57bfc96ba)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a407 = __rdtsc() % 1337;
	a407 ^= 0xd9e9f3a5716f;
	if (a407 == 0x94f960cddd9f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a408 = __rdtsc() % 1337;
	a408 ^= 0xea740c085dbf;
	if (a408 == 0x277fc3db8740)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a409 = __rdtsc() % 1337;
	a409 ^= 0x71db0de2661f;
	if (a409 == 0xe5c3b349f2d3)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a410 = __rdtsc() % 1337;
	a410 ^= 0xa12010b771d3;
	if (a410 == 0x10f616e63bdb)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a411 = __rdtsc() % 1337;
	a411 ^= 0xe185cc4ae431;
	if (a411 == 0xf3316e2987e8)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a412 = __rdtsc() % 1337;
	a412 ^= 0xe02a01535d1a;
	if (a412 == 0x9bcf65e6df26)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a413 = __rdtsc() % 1337;
	a413 ^= 0x6f83f402f453;
	if (a413 == 0xca692c0cb7ea)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a414 = __rdtsc() % 1337;
	a414 ^= 0xf5114f6b6b75;
	if (a414 == 0x28ddb77907e7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a415 = __rdtsc() % 1337;
	a415 ^= 0x361838c5b835;
	if (a415 == 0xc7d044fb1a1d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a416 = __rdtsc() % 1337;
	a416 ^= 0xfaa1136c7b9f;
	if (a416 == 0xbbe6bd5b24f2)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a417 = __rdtsc() % 1337;
	a417 ^= 0xfd5778a90426;
	if (a417 == 0x78283024d745)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a418 = __rdtsc() % 1337;
	a418 ^= 0xeb1136a45548;
	if (a418 == 0x0f1a4ec6490c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a419 = __rdtsc() % 1337;
	a419 ^= 0xe640f5e1a9aa;
	if (a419 == 0xbbc3a33590ce)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a420 = __rdtsc() % 1337;
	a420 ^= 0x5bf31bfc07d9;
	if (a420 == 0xd0bfe6b49133)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a421 = __rdtsc() % 1337;
	a421 ^= 0xda87ec066dd2;
	if (a421 == 0x054c89f8e17a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a422 = __rdtsc() % 1337;
	a422 ^= 0xa33a4052500c;
	if (a422 == 0x779f3dbb7787)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a423 = __rdtsc() % 1337;
	a423 ^= 0xdedc3fc90c87;
	if (a423 == 0x866bd0f8d657)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a424 = __rdtsc() % 1337;
	a424 ^= 0x4d438db767f0;
	if (a424 == 0xf0ae13fdc530)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a425 = __rdtsc() % 1337;
	a425 ^= 0x6b73191f62c3;
	if (a425 == 0x07483397e9f5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a426 = __rdtsc() % 1337;
	a426 ^= 0xb3ed3d1ad98a;
	if (a426 == 0xbb930a74c88a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a427 = __rdtsc() % 1337;
	a427 ^= 0x301bc62d41eb;
	if (a427 == 0xfe3ce8c77cee)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a428 = __rdtsc() % 1337;
	a428 ^= 0xc4a36f02a69d;
	if (a428 == 0x4799d7e0f5bd)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a429 = __rdtsc() % 1337;
	a429 ^= 0xf142581d8f77;
	if (a429 == 0x19c97eae3542)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a430 = __rdtsc() % 1337;
	a430 ^= 0x86350102fd45;
	if (a430 == 0xc4bf0e5fe193)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a431 = __rdtsc() % 1337;
	a431 ^= 0x06cab5578adc;
	if (a431 == 0x827588df2202)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a432 = __rdtsc() % 1337;
	a432 ^= 0x32ea35aa5a7a;
	if (a432 == 0x3f72ca64eb72)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a433 = __rdtsc() % 1337;
	a433 ^= 0xc6b39c80335c;
	if (a433 == 0xfbdc248bafb3)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a434 = __rdtsc() % 1337;
	a434 ^= 0xe27812da04cb;
	if (a434 == 0xd334ce3aa00d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a435 = __rdtsc() % 1337;
	a435 ^= 0x794c82d15a4f;
	if (a435 == 0x351f98fce43f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a436 = __rdtsc() % 1337;
	a436 ^= 0x2c03f33d93e3;
	if (a436 == 0x3e0b0b32f9a5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a437 = __rdtsc() % 1337;
	a437 ^= 0xb5fedd08d33e;
	if (a437 == 0x0ed038252530)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a438 = __rdtsc() % 1337;
	a438 ^= 0xa475a6425f5d;
	if (a438 == 0x12861ce8b71a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a439 = __rdtsc() % 1337;
	a439 ^= 0x02cc4869b4bd;
	if (a439 == 0x7009e061081d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a440 = __rdtsc() % 1337;
	a440 ^= 0xb7d0ec96ce4a;
	if (a440 == 0x01630a091660)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a441 = __rdtsc() % 1337;
	a441 ^= 0xc5283896518a;
	if (a441 == 0x818daab13ef7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a442 = __rdtsc() % 1337;
	a442 ^= 0xb0b36f23f822;
	if (a442 == 0xf873c8b8c4fa)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a443 = __rdtsc() % 1337;
	a443 ^= 0x93f1d409c193;
	if (a443 == 0x43b727bf3bee)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a444 = __rdtsc() % 1337;
	a444 ^= 0x67f0cc19b925;
	if (a444 == 0x4c21bab1e9b6)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a445 = __rdtsc() % 1337;
	a445 ^= 0x1602e46da15e;
	if (a445 == 0x43dc39b215a5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a446 = __rdtsc() % 1337;
	a446 ^= 0x0de48b3cee9d;
	if (a446 == 0x16cdf0967f9e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a447 = __rdtsc() % 1337;
	a447 ^= 0xa9b2d2e40407;
	if (a447 == 0x379f7c6cc72a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a448 = __rdtsc() % 1337;
	a448 ^= 0x6fe45e6be577;
	if (a448 == 0xecfd8e370f5c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a449 = __rdtsc() % 1337;
	a449 ^= 0x59e88b71b2c0;
	if (a449 == 0x8aed2be17314)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a450 = __rdtsc() % 1337;
	a450 ^= 0x166fa1413664;
	if (a450 == 0x6a61c7d1872f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a451 = __rdtsc() % 1337;
	a451 ^= 0x0ba25c06ab6b;
	if (a451 == 0x77749fff660e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a452 = __rdtsc() % 1337;
	a452 ^= 0x2f6e45b6f4c8;
	if (a452 == 0x0da0798757c7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a453 = __rdtsc() % 1337;
	a453 ^= 0x1625c75325f4;
	if (a453 == 0xb8f870cf9c77)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a454 = __rdtsc() % 1337;
	a454 ^= 0xce071ab5f9d2;
	if (a454 == 0x73ed6376d955)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a455 = __rdtsc() % 1337;
	a455 ^= 0x6f294e19387f;
	if (a455 == 0x80c6af97d105)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a456 = __rdtsc() % 1337;
	a456 ^= 0xbaee84740849;
	if (a456 == 0xdec01cf0af05)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a457 = __rdtsc() % 1337;
	a457 ^= 0x6dcb44e0fdc5;
	if (a457 == 0xb894623325cc)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a458 = __rdtsc() % 1337;
	a458 ^= 0x2dfa832b2a95;
	if (a458 == 0x3a4900efe5a2)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a459 = __rdtsc() % 1337;
	a459 ^= 0x818649014da7;
	if (a459 == 0x152d68577112)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a460 = __rdtsc() % 1337;
	a460 ^= 0x41fdcb3143c1;
	if (a460 == 0x7e4b7053f049)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a461 = __rdtsc() % 1337;
	a461 ^= 0x48af5b6b5ce0;
	if (a461 == 0x30550a681120)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a462 = __rdtsc() % 1337;
	a462 ^= 0xbcb075353fab;
	if (a462 == 0xb132815c937b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a463 = __rdtsc() % 1337;
	a463 ^= 0x2a9df195b143;
	if (a463 == 0xb952c00b0d3b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a464 = __rdtsc() % 1337;
	a464 ^= 0x2d43b6f0b5b1;
	if (a464 == 0x9e4138e8b0f9)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a465 = __rdtsc() % 1337;
	a465 ^= 0xe30c88ca330f;
	if (a465 == 0xd3d3740fbab9)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a466 = __rdtsc() % 1337;
	a466 ^= 0xdf2ea1c7d3d5;
	if (a466 == 0xd2756345b560)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a467 = __rdtsc() % 1337;
	a467 ^= 0xb906bc79b273;
	if (a467 == 0x0fda3acee999)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a468 = __rdtsc() % 1337;
	a468 ^= 0xd43b2ab72454;
	if (a468 == 0xf914c0447768)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a469 = __rdtsc() % 1337;
	a469 ^= 0x397f3f2f2a25;
	if (a469 == 0x58141a4614bf)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a470 = __rdtsc() % 1337;
	a470 ^= 0x256fec25a070;
	if (a470 == 0xeb6cb6cce442)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a471 = __rdtsc() % 1337;
	a471 ^= 0xa159bd8a8af9;
	if (a471 == 0x4b49eb80950d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a472 = __rdtsc() % 1337;
	a472 ^= 0xcf93487ba4b8;
	if (a472 == 0x4c0c9bd99795)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a473 = __rdtsc() % 1337;
	a473 ^= 0x694c84e92434;
	if (a473 == 0x07f0b60746ba)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a474 = __rdtsc() % 1337;
	a474 ^= 0x26da3a4a59eb;
	if (a474 == 0x3e0276e8c311)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a475 = __rdtsc() % 1337;
	a475 ^= 0x2970d6b49577;
	if (a475 == 0xc21747e2a17a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a476 = __rdtsc() % 1337;
	a476 ^= 0x7189dc981ed2;
	if (a476 == 0xb01fe0660aa5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a477 = __rdtsc() % 1337;
	a477 ^= 0x3fe04f323ec2;
	if (a477 == 0xe89ebbcf3755)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a478 = __rdtsc() % 1337;
	a478 ^= 0x983bc1285772;
	if (a478 == 0xdc566cc0cbb4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a479 = __rdtsc() % 1337;
	a479 ^= 0x07768a0fd20c;
	if (a479 == 0x046355691231)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a480 = __rdtsc() % 1337;
	a480 ^= 0x980f0b890404;
	if (a480 == 0x74e5e7a3df31)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a481 = __rdtsc() % 1337;
	a481 ^= 0xc23c608f2894;
	if (a481 == 0x3e1b911b86d2)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a482 = __rdtsc() % 1337;
	a482 ^= 0x8c0bbbf525a0;
	if (a482 == 0x80c8bf9aea9c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a483 = __rdtsc() % 1337;
	a483 ^= 0x2d53b918feee;
	if (a483 == 0xbaa7c65cb112)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a484 = __rdtsc() % 1337;
	a484 ^= 0x9f81ade48148;
	if (a484 == 0xb3f328f324c6)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a485 = __rdtsc() % 1337;
	a485 ^= 0x500d0c62a2d4;
	if (a485 == 0x5be1b34af0db)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a486 = __rdtsc() % 1337;
	a486 ^= 0x52e694f72ccf;
	if (a486 == 0x39d44d8996ef)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a487 = __rdtsc() % 1337;
	a487 ^= 0xed9c6a94db9f;
	if (a487 == 0xf31cf8cc44cb)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a488 = __rdtsc() % 1337;
	a488 ^= 0x536d25ab70d3;
	if (a488 == 0x31d442e24966)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a489 = __rdtsc() % 1337;
	a489 ^= 0x3496052c87df;
	if (a489 == 0xa27c2dc4cc2c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a490 = __rdtsc() % 1337;
	a490 ^= 0x292b7773209b;
	if (a490 == 0x9ece8842d13a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a491 = __rdtsc() % 1337;
	a491 ^= 0x748523f0c3d3;
	if (a491 == 0x40b4e9262d63)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a492 = __rdtsc() % 1337;
	a492 ^= 0x0ba63ab050d5;
	if (a492 == 0xad2986465ee1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a493 = __rdtsc() % 1337;
	a493 ^= 0x26c4c7eafb90;
	if (a493 == 0x7fcb02f02610)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a494 = __rdtsc() % 1337;
	a494 ^= 0xc7d34713a82d;
	if (a494 == 0x54e743bfe7d1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a495 = __rdtsc() % 1337;
	a495 ^= 0xa0c242a894a0;
	if (a495 == 0xc25c339d00c0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a496 = __rdtsc() % 1337;
	a496 ^= 0x0dc6241bcce2;
	if (a496 == 0x20dc7f4c9fe3)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a497 = __rdtsc() % 1337;
	a497 ^= 0xa196de1edee5;
	if (a497 == 0x10b0a6e14995)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a498 = __rdtsc() % 1337;
	a498 ^= 0x5ef540053a20;
	if (a498 == 0x241cf076b364)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a499 = __rdtsc() % 1337;
	a499 ^= 0xa5eddae36bb3;
	if (a499 == 0x3e8c03ad72b2)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a500 = __rdtsc() % 1337;
	a500 ^= 0x5b8e3e84d0d6;
	if (a500 == 0x2bc6141c6f03)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a501 = __rdtsc() % 1337;
	a501 ^= 0xe4c79a25b0b3;
	if (a501 == 0x3b2266cb3e56)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a502 = __rdtsc() % 1337;
	a502 ^= 0x5433263f1eef;
	if (a502 == 0x95b4230f98e7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a503 = __rdtsc() % 1337;
	a503 ^= 0x25d076351916;
	if (a503 == 0x97ab327f57a5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a504 = __rdtsc() % 1337;
	a504 ^= 0xc267689749c7;
	if (a504 == 0x12e702357c9f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a505 = __rdtsc() % 1337;
	a505 ^= 0x92218fbf25f4;
	if (a505 == 0x4ae086729e10)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a506 = __rdtsc() % 1337;
	a506 ^= 0xfe3d3cb63a34;
	if (a506 == 0x42092f067e2d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a507 = __rdtsc() % 1337;
	a507 ^= 0x0e87460df832;
	if (a507 == 0xe5e0e6af7938)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a508 = __rdtsc() % 1337;
	a508 ^= 0xcbd62cb2f83f;
	if (a508 == 0x59c67e4579e5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a509 = __rdtsc() % 1337;
	a509 ^= 0x760c46bc520e;
	if (a509 == 0x05502a0a7357)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a510 = __rdtsc() % 1337;
	a510 ^= 0x00467efa5d57;
	if (a510 == 0xbfa2b6dcd78e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a511 = __rdtsc() % 1337;
	a511 ^= 0x9368700b5b0f;
	if (a511 == 0x7214b65d4721)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a512 = __rdtsc() % 1337;
	a512 ^= 0xf086838c44b8;
	if (a512 == 0x9f902b717d8c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a513 = __rdtsc() % 1337;
	a513 ^= 0xa97d92fb4f42;
	if (a513 == 0x288272ec6795)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a514 = __rdtsc() % 1337;
	a514 ^= 0xe32457f64e0b;
	if (a514 == 0x311dc713416e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a515 = __rdtsc() % 1337;
	a515 ^= 0x3f3106ab7363;
	if (a515 == 0xfd3233b875ae)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a516 = __rdtsc() % 1337;
	a516 ^= 0x6b217b485739;
	if (a516 == 0xaeacdc982635)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a517 = __rdtsc() % 1337;
	a517 ^= 0xfc9f9acee555;
	if (a517 == 0x8524fc3efce8)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a518 = __rdtsc() % 1337;
	a518 ^= 0xeaf049867ae1;
	if (a518 == 0xdfa1434ba5a8)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a519 = __rdtsc() % 1337;
	a519 ^= 0x0bdb3efbc9e8;
	if (a519 == 0x2b3ea6a81d32)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a520 = __rdtsc() % 1337;
	a520 ^= 0x30d872c6cfc5;
	if (a520 == 0xe6a559924750)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a521 = __rdtsc() % 1337;
	a521 ^= 0x0a6d4980e335;
	if (a521 == 0xae66007ab509)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a522 = __rdtsc() % 1337;
	a522 ^= 0x8e9fc369cbe8;
	if (a522 == 0x0ca98d3cb855)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a523 = __rdtsc() % 1337;
	a523 ^= 0xbb86de234c2a;
	if (a523 == 0x94237d8d23f5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a524 = __rdtsc() % 1337;
	a524 ^= 0x036d459bddf0;
	if (a524 == 0x3df6dbdd7348)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a525 = __rdtsc() % 1337;
	a525 ^= 0x2e6aa829762a;
	if (a525 == 0xe079ffa59af4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a526 = __rdtsc() % 1337;
	a526 ^= 0xf593b9903b77;
	if (a526 == 0xa41b88e89f59)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a527 = __rdtsc() % 1337;
	a527 ^= 0x1d0d35bc727a;
	if (a527 == 0x7e5cb3fcabde)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a528 = __rdtsc() % 1337;
	a528 ^= 0xf08b29661936;
	if (a528 == 0xa4875dc5a632)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a529 = __rdtsc() % 1337;
	a529 ^= 0x85714582a196;
	if (a529 == 0x561e9584e013)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a530 = __rdtsc() % 1337;
	a530 ^= 0xc09fe82a76ca;
	if (a530 == 0x54982aa95a76)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a531 = __rdtsc() % 1337;
	a531 ^= 0x12804a27e298;
	if (a531 == 0x37548fb7ba29)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a532 = __rdtsc() % 1337;
	a532 ^= 0xba83f1b6338e;
	if (a532 == 0x012604de2436)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a533 = __rdtsc() % 1337;
	a533 ^= 0x5eb2a3158bca;
	if (a533 == 0xc04d551f5ced)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a534 = __rdtsc() % 1337;
	a534 ^= 0x20733e1f1ed2;
	if (a534 == 0xaee4160f45bb)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a535 = __rdtsc() % 1337;
	a535 ^= 0x9d12a9a44b6e;
	if (a535 == 0x26be526992a7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a536 = __rdtsc() % 1337;
	a536 ^= 0xfcb361b73adf;
	if (a536 == 0xb017281ccc9b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a537 = __rdtsc() % 1337;
	a537 ^= 0xafd074b23671;
	if (a537 == 0xa0149a3e8a73)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a538 = __rdtsc() % 1337;
	a538 ^= 0x87d7cd531855;
	if (a538 == 0xf7b6d031a98b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a539 = __rdtsc() % 1337;
	a539 ^= 0x1bd5df02c16a;
	if (a539 == 0xcd7f7decfadf)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a540 = __rdtsc() % 1337;
	a540 ^= 0xb22436b7293a;
	if (a540 == 0xe32162cd3235)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a541 = __rdtsc() % 1337;
	a541 ^= 0x2865421f67c4;
	if (a541 == 0x8df485851d35)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a542 = __rdtsc() % 1337;
	a542 ^= 0xf8ecabd4ff76;
	if (a542 == 0x5e671766ae10)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a543 = __rdtsc() % 1337;
	a543 ^= 0x10a3811cb5db;
	if (a543 == 0x7638558ad6df)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a544 = __rdtsc() % 1337;
	a544 ^= 0x95f19e964db8;
	if (a544 == 0x9cfa5594203a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a545 = __rdtsc() % 1337;
	a545 ^= 0xc3dafdc793c6;
	if (a545 == 0x192e922ce429)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a546 = __rdtsc() % 1337;
	a546 ^= 0xc6fbfda5b217;
	if (a546 == 0x865e2a5cc2f7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a547 = __rdtsc() % 1337;
	a547 ^= 0x877986d35725;
	if (a547 == 0x4a244f209e55)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a548 = __rdtsc() % 1337;
	a548 ^= 0x23c3cdfacf1e;
	if (a548 == 0x3820b3c18271)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a549 = __rdtsc() % 1337;
	a549 ^= 0x208634152417;
	if (a549 == 0x4285ce65a5e0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a550 = __rdtsc() % 1337;
	a550 ^= 0x850e235bd42a;
	if (a550 == 0xd265790e588f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a551 = __rdtsc() % 1337;
	a551 ^= 0x457b6e5d58db;
	if (a551 == 0xfdb2a84c8eb1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a552 = __rdtsc() % 1337;
	a552 ^= 0x236b2dd73494;
	if (a552 == 0x122c52ce830a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a553 = __rdtsc() % 1337;
	a553 ^= 0x8f2d5534cd81;
	if (a553 == 0xdba4173c161e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a554 = __rdtsc() % 1337;
	a554 ^= 0x0a8f2dea4401;
	if (a554 == 0x83c7cf1c2948)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a555 = __rdtsc() % 1337;
	a555 ^= 0x6399e55c23fb;
	if (a555 == 0x174b13ef322d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a556 = __rdtsc() % 1337;
	a556 ^= 0xdc7b8e900df8;
	if (a556 == 0x3c39963154d9)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a557 = __rdtsc() % 1337;
	a557 ^= 0x08aaad15dd0d;
	if (a557 == 0x0236e8cb0017)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a558 = __rdtsc() % 1337;
	a558 ^= 0xae80d837d958;
	if (a558 == 0xcf31e65f8f0b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a559 = __rdtsc() % 1337;
	a559 ^= 0x9413c9ab2bd6;
	if (a559 == 0x81af07faff08)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a560 = __rdtsc() % 1337;
	a560 ^= 0x56bc767e8244;
	if (a560 == 0x06675a5f5065)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a561 = __rdtsc() % 1337;
	a561 ^= 0x5336d61dafe3;
	if (a561 == 0x97e3348a933f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a562 = __rdtsc() % 1337;
	a562 ^= 0xb7d4c809144c;
	if (a562 == 0x27c3c4bd6b65)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a563 = __rdtsc() % 1337;
	a563 ^= 0x3c2faa77674b;
	if (a563 == 0xf309995231a0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a564 = __rdtsc() % 1337;
	a564 ^= 0xf45119b625c0;
	if (a564 == 0x1253f4e8b73c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a565 = __rdtsc() % 1337;
	a565 ^= 0x296f233d6b21;
	if (a565 == 0x5ca3fd1dec43)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a566 = __rdtsc() % 1337;
	a566 ^= 0x888e1ef05083;
	if (a566 == 0xc4e288252505)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a567 = __rdtsc() % 1337;
	a567 ^= 0x0e7261da9447;
	if (a567 == 0x33271736690b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a568 = __rdtsc() % 1337;
	a568 ^= 0x7c5d3c93cd0f;
	if (a568 == 0xdb28693ee182)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a569 = __rdtsc() % 1337;
	a569 ^= 0x9d115b6d5254;
	if (a569 == 0xd1bea546bdcf)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a570 = __rdtsc() % 1337;
	a570 ^= 0xf6f33a1b3776;
	if (a570 == 0x558fe3ebe3fb)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a571 = __rdtsc() % 1337;
	a571 ^= 0x0d0c708f85d8;
	if (a571 == 0x4958faebf286)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a572 = __rdtsc() % 1337;
	a572 ^= 0x768fb5773a76;
	if (a572 == 0xb98b41afc591)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a573 = __rdtsc() % 1337;
	a573 ^= 0x5207d07d46ef;
	if (a573 == 0x594cec08cb3b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a574 = __rdtsc() % 1337;
	a574 ^= 0x5c1d0f8d9640;
	if (a574 == 0xd97d2201517f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a575 = __rdtsc() % 1337;
	a575 ^= 0x5fc72d50dc8f;
	if (a575 == 0xd4b693846997)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a576 = __rdtsc() % 1337;
	a576 ^= 0x16f4b9aa5ac4;
	if (a576 == 0x5596cbe664ea)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a577 = __rdtsc() % 1337;
	a577 ^= 0xbea3bfc84ce4;
	if (a577 == 0x1b1972a614e1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a578 = __rdtsc() % 1337;
	a578 ^= 0xafc095fa9110;
	if (a578 == 0x65d6b7c10d9d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a579 = __rdtsc() % 1337;
	a579 ^= 0x3b6297d5b18c;
	if (a579 == 0x279a807a8f61)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a580 = __rdtsc() % 1337;
	a580 ^= 0x67dbf1cc5bf2;
	if (a580 == 0xcfbc6c008edc)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a581 = __rdtsc() % 1337;
	a581 ^= 0xf314dc54b006;
	if (a581 == 0xa9de2b1993f7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a582 = __rdtsc() % 1337;
	a582 ^= 0xa2fc5e2b2306;
	if (a582 == 0x634f21936b18)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a583 = __rdtsc() % 1337;
	a583 ^= 0x27cc7e82d5ae;
	if (a583 == 0x5846d3fa8561)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a584 = __rdtsc() % 1337;
	a584 ^= 0x50b46265282f;
	if (a584 == 0x38c737f8426e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a585 = __rdtsc() % 1337;
	a585 ^= 0xa84548207fff;
	if (a585 == 0xc2c285f283b6)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a586 = __rdtsc() % 1337;
	a586 ^= 0x19d00d306a52;
	if (a586 == 0x6add8cbe1796)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a587 = __rdtsc() % 1337;
	a587 ^= 0x90b52a787340;
	if (a587 == 0xfc7ef03e44d4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a588 = __rdtsc() % 1337;
	a588 ^= 0x0ee5d869c999;
	if (a588 == 0x3beca790028b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a589 = __rdtsc() % 1337;
	a589 ^= 0x14115e2d8df4;
	if (a589 == 0x695d9d6f11a1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a590 = __rdtsc() % 1337;
	a590 ^= 0x5b1cc5d5ce83;
	if (a590 == 0xf8d69b51aba6)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a591 = __rdtsc() % 1337;
	a591 ^= 0xa425993c4797;
	if (a591 == 0x4c6cf5ba8618)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a592 = __rdtsc() % 1337;
	a592 ^= 0xf77c130a5004;
	if (a592 == 0xeb15fa8f22cc)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a593 = __rdtsc() % 1337;
	a593 ^= 0x251308ad6818;
	if (a593 == 0x855808fcbb9f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a594 = __rdtsc() % 1337;
	a594 ^= 0x18d83ca4c7b8;
	if (a594 == 0x95af56676d1a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a595 = __rdtsc() % 1337;
	a595 ^= 0x410ac17de4f2;
	if (a595 == 0xefb30eb0c215)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a596 = __rdtsc() % 1337;
	a596 ^= 0x399f5fc42d15;
	if (a596 == 0x11581d737f5d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a597 = __rdtsc() % 1337;
	a597 ^= 0x1ac930015a97;
	if (a597 == 0x92f5225832ee)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a598 = __rdtsc() % 1337;
	a598 ^= 0xa7a3a00dcba8;
	if (a598 == 0x7f026739d42c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a599 = __rdtsc() % 1337;
	a599 ^= 0x2fe194b8fe74;
	if (a599 == 0x1412a50a29b6)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a600 = __rdtsc() % 1337;
	a600 ^= 0x527b31a212bd;
	if (a600 == 0x8f796dc5f694)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a601 = __rdtsc() % 1337;
	a601 ^= 0x812516438daf;
	if (a601 == 0x29ab2aea1783)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a602 = __rdtsc() % 1337;
	a602 ^= 0x36516450f26b;
	if (a602 == 0xe9006e0d4126)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a603 = __rdtsc() % 1337;
	a603 ^= 0xd7dda07a1151;
	if (a603 == 0xeed28e043323)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a604 = __rdtsc() % 1337;
	a604 ^= 0xae71e8a5316e;
	if (a604 == 0xe274f460ce84)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a605 = __rdtsc() % 1337;
	a605 ^= 0xa0aea6f1b796;
	if (a605 == 0xc500d0b1a027)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a606 = __rdtsc() % 1337;
	a606 ^= 0x40ae49cc4c07;
	if (a606 == 0x498a28cd2d7a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a607 = __rdtsc() % 1337;
	a607 ^= 0x23a0c6aa346f;
	if (a607 == 0x51dc14f1c559)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a608 = __rdtsc() % 1337;
	a608 ^= 0x84c188a72b46;
	if (a608 == 0x98eb0c41a397)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a609 = __rdtsc() % 1337;
	a609 ^= 0x478d21870509;
	if (a609 == 0xa73890a547ed)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a610 = __rdtsc() % 1337;
	a610 ^= 0x65ba2ba63ea4;
	if (a610 == 0xe66e31dbbbee)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a611 = __rdtsc() % 1337;
	a611 ^= 0x9f92e643f0e9;
	if (a611 == 0xa3efe81cefc0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a612 = __rdtsc() % 1337;
	a612 ^= 0xa31c174e5185;
	if (a612 == 0xdf5b09f0c19f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a613 = __rdtsc() % 1337;
	a613 ^= 0xa76bc6605781;
	if (a613 == 0xbb3f076f7bc2)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a614 = __rdtsc() % 1337;
	a614 ^= 0xe59ed0039f06;
	if (a614 == 0xd0e6a10cc5f0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a615 = __rdtsc() % 1337;
	a615 ^= 0x8e09364ac17f;
	if (a615 == 0x7410847d16c7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a616 = __rdtsc() % 1337;
	a616 ^= 0x605b6f44c3dc;
	if (a616 == 0x45ae2ac732b9)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a617 = __rdtsc() % 1337;
	a617 ^= 0xe4686d036e75;
	if (a617 == 0x7c7f9f117a34)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a618 = __rdtsc() % 1337;
	a618 ^= 0xc1e1b6708c61;
	if (a618 == 0x373a52adc16e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a619 = __rdtsc() % 1337;
	a619 ^= 0xbee36ece3632;
	if (a619 == 0x702ce3ca7c87)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a620 = __rdtsc() % 1337;
	a620 ^= 0x0306972d19a9;
	if (a620 == 0x09906d9e150f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a621 = __rdtsc() % 1337;
	a621 ^= 0x06af015ffecc;
	if (a621 == 0xee89147979d5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a622 = __rdtsc() % 1337;
	a622 ^= 0x8a626f907eda;
	if (a622 == 0x42662a31d3bf)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a623 = __rdtsc() % 1337;
	a623 ^= 0x19e100d1da1e;
	if (a623 == 0x306856bb2936)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a624 = __rdtsc() % 1337;
	a624 ^= 0x45671f95bb18;
	if (a624 == 0xccfba181ced2)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a625 = __rdtsc() % 1337;
	a625 ^= 0x5ab4c822516c;
	if (a625 == 0xc08c7bc2be2b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a626 = __rdtsc() % 1337;
	a626 ^= 0x9c7925909034;
	if (a626 == 0x1b959d8447c8)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a627 = __rdtsc() % 1337;
	a627 ^= 0xdba596b95632;
	if (a627 == 0xfd3bc832d316)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a628 = __rdtsc() % 1337;
	a628 ^= 0x7d53b2adc222;
	if (a628 == 0x5f29a6ec326f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a629 = __rdtsc() % 1337;
	a629 ^= 0xf3e5d056f9e5;
	if (a629 == 0x86716dce6e12)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a630 = __rdtsc() % 1337;
	a630 ^= 0x829b65a7f6b6;
	if (a630 == 0xa18130ecb9ae)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a631 = __rdtsc() % 1337;
	a631 ^= 0xeeea12523323;
	if (a631 == 0x35814ec60bf7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a632 = __rdtsc() % 1337;
	a632 ^= 0xc8fa6dd1f202;
	if (a632 == 0x94e303461c94)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a633 = __rdtsc() % 1337;
	a633 ^= 0xc567bf95198f;
	if (a633 == 0xbdad8c6e64cc)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a634 = __rdtsc() % 1337;
	a634 ^= 0xfd946844cbc0;
	if (a634 == 0xbf7f43690923)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a635 = __rdtsc() % 1337;
	a635 ^= 0x3bbaf07d7cf5;
	if (a635 == 0x9fab0c856868)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a636 = __rdtsc() % 1337;
	a636 ^= 0xf3d5393bfdce;
	if (a636 == 0x5e3ecd0fc825)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a637 = __rdtsc() % 1337;
	a637 ^= 0x610d062aa731;
	if (a637 == 0x6b55c625f716)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a638 = __rdtsc() % 1337;
	a638 ^= 0xea0d8c5c3888;
	if (a638 == 0x7f305e26f07b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a639 = __rdtsc() % 1337;
	a639 ^= 0x9829dc85303f;
	if (a639 == 0x1eb104e2c31b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a640 = __rdtsc() % 1337;
	a640 ^= 0x82f52b9fe097;
	if (a640 == 0x01b28e15146e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a641 = __rdtsc() % 1337;
	a641 ^= 0x4b1e753e3786;
	if (a641 == 0x40c5f1d1fc42)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a642 = __rdtsc() % 1337;
	a642 ^= 0x572cb732d5a4;
	if (a642 == 0xc191e8c0a905)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a643 = __rdtsc() % 1337;
	a643 ^= 0xa0cd8eedd04f;
	if (a643 == 0xf47b14b38b76)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a644 = __rdtsc() % 1337;
	a644 ^= 0x0b8ba5c1fa93;
	if (a644 == 0xd7afdcd08fc5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a645 = __rdtsc() % 1337;
	a645 ^= 0x8a4ad726c7bc;
	if (a645 == 0xf7bbafb8f353)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a646 = __rdtsc() % 1337;
	a646 ^= 0x57af2741ac52;
	if (a646 == 0x9e20783a8001)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a647 = __rdtsc() % 1337;
	a647 ^= 0xdf92b20c151f;
	if (a647 == 0x8c35788d9910)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a648 = __rdtsc() % 1337;
	a648 ^= 0x1f30ce0645de;
	if (a648 == 0x21b360be56db)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a649 = __rdtsc() % 1337;
	a649 ^= 0xd098f3839ac2;
	if (a649 == 0x21f5f0bf5789)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a650 = __rdtsc() % 1337;
	a650 ^= 0xcb2c527f5423;
	if (a650 == 0x216d6f235d98)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a651 = __rdtsc() % 1337;
	a651 ^= 0x9a606ab09525;
	if (a651 == 0x13acc5b14e4d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a652 = __rdtsc() % 1337;
	a652 ^= 0x98c96dc2729f;
	if (a652 == 0xfd39dc433b6e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a653 = __rdtsc() % 1337;
	a653 ^= 0xf3833ca95edc;
	if (a653 == 0xfc4ced06cdba)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a654 = __rdtsc() % 1337;
	a654 ^= 0x8e8fb93f3199;
	if (a654 == 0x78ee5d7ef21e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a655 = __rdtsc() % 1337;
	a655 ^= 0x4e2adbe65365;
	if (a655 == 0xad033531bcdb)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a656 = __rdtsc() % 1337;
	a656 ^= 0x96db8ba6ed51;
	if (a656 == 0xafafc7294b1d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a657 = __rdtsc() % 1337;
	a657 ^= 0x8f9580a10d23;
	if (a657 == 0x1b1368e969bc)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a658 = __rdtsc() % 1337;
	a658 ^= 0xd2a511b43f91;
	if (a658 == 0x49596e0d9f93)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a659 = __rdtsc() % 1337;
	a659 ^= 0x103b1dba570e;
	if (a659 == 0x27c872f19148)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a660 = __rdtsc() % 1337;
	a660 ^= 0x14c4947976f9;
	if (a660 == 0xabfecead1711)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a661 = __rdtsc() % 1337;
	a661 ^= 0xacdfb728f442;
	if (a661 == 0x92e1f5eeea63)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a662 = __rdtsc() % 1337;
	a662 ^= 0x84d749779ca5;
	if (a662 == 0x53fcb7b17b88)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a663 = __rdtsc() % 1337;
	a663 ^= 0xb31c2c8523de;
	if (a663 == 0x26eba4b0d8e2)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a664 = __rdtsc() % 1337;
	a664 ^= 0xd5f06097fcec;
	if (a664 == 0xc99e0cef8e9f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a665 = __rdtsc() % 1337;
	a665 ^= 0x580e859439ed;
	if (a665 == 0xd26dd3081085)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a666 = __rdtsc() % 1337;
	a666 ^= 0x91d53642f6af;
	if (a666 == 0x3786e8d3c6f2)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a667 = __rdtsc() % 1337;
	a667 ^= 0x5faf4eece313;
	if (a667 == 0xdc3081cde779)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a668 = __rdtsc() % 1337;
	a668 ^= 0xa9210a0abdd7;
	if (a668 == 0x2844370e8170)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a669 = __rdtsc() % 1337;
	a669 ^= 0x077095d2837b;
	if (a669 == 0x96994470a397)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a670 = __rdtsc() % 1337;
	a670 ^= 0xcd70dd53239c;
	if (a670 == 0x6063d9a2e9d0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a671 = __rdtsc() % 1337;
	a671 ^= 0xf9bd533fad27;
	if (a671 == 0x6993eb6c7e52)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a672 = __rdtsc() % 1337;
	a672 ^= 0xcf10e4eb9cd5;
	if (a672 == 0xfc64d168e677)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a673 = __rdtsc() % 1337;
	a673 ^= 0xb9d540c191b6;
	if (a673 == 0xab844ed82fca)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a674 = __rdtsc() % 1337;
	a674 ^= 0xb87a4600540f;
	if (a674 == 0xdc2fcd3691ac)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a675 = __rdtsc() % 1337;
	a675 ^= 0x583244ddaa99;
	if (a675 == 0xef6c531b93dc)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a676 = __rdtsc() % 1337;
	a676 ^= 0x5a0a84acad8d;
	if (a676 == 0x37672ed8492f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a677 = __rdtsc() % 1337;
	a677 ^= 0x9802a734f185;
	if (a677 == 0xfada799b58b1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a678 = __rdtsc() % 1337;
	a678 ^= 0xf1562fb431c3;
	if (a678 == 0xf787919b93af)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a679 = __rdtsc() % 1337;
	a679 ^= 0xb3adfdc28258;
	if (a679 == 0x3b39246ab5a5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a680 = __rdtsc() % 1337;
	a680 ^= 0x542d3ccaad3f;
	if (a680 == 0x36da0bd92563)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a681 = __rdtsc() % 1337;
	a681 ^= 0x52f926276979;
	if (a681 == 0xbbbee5083471)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a682 = __rdtsc() % 1337;
	a682 ^= 0x34229ba48777;
	if (a682 == 0x94002ff82ef8)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a683 = __rdtsc() % 1337;
	a683 ^= 0xead999665d8a;
	if (a683 == 0xcc9d79f53ccb)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a684 = __rdtsc() % 1337;
	a684 ^= 0xcedac96b4327;
	if (a684 == 0xa9eca9c25071)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a685 = __rdtsc() % 1337;
	a685 ^= 0xe9b03812aeef;
	if (a685 == 0x51006871ff5c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a686 = __rdtsc() % 1337;
	a686 ^= 0x437c85f5d4b9;
	if (a686 == 0x9c8acd251d37)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a687 = __rdtsc() % 1337;
	a687 ^= 0xb0d6d106ae33;
	if (a687 == 0xca4f5b869dc8)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a688 = __rdtsc() % 1337;
	a688 ^= 0x8f0da5127398;
	if (a688 == 0xa32cd1dd2b27)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a689 = __rdtsc() % 1337;
	a689 ^= 0xc051deaab2d6;
	if (a689 == 0x19427612b5d8)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a690 = __rdtsc() % 1337;
	a690 ^= 0x5f0cd9ea3685;
	if (a690 == 0xdeb3ba88decc)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a691 = __rdtsc() % 1337;
	a691 ^= 0x90ad624d480d;
	if (a691 == 0xd8fed3eef4c2)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a692 = __rdtsc() % 1337;
	a692 ^= 0x1b2b61912df3;
	if (a692 == 0x49196372ee42)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a693 = __rdtsc() % 1337;
	a693 ^= 0xaf5c293accc6;
	if (a693 == 0x8e1f59f09785)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a694 = __rdtsc() % 1337;
	a694 ^= 0x4df73199e826;
	if (a694 == 0x8215bc63890f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a695 = __rdtsc() % 1337;
	a695 ^= 0x70bd00cdd007;
	if (a695 == 0x649c870e1899)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a696 = __rdtsc() % 1337;
	a696 ^= 0x817a5f527e56;
	if (a696 == 0x3b54c420a30d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a697 = __rdtsc() % 1337;
	a697 ^= 0xe823e0276d64;
	if (a697 == 0xd4bdd511c77f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a698 = __rdtsc() % 1337;
	a698 ^= 0x5cac8bae749a;
	if (a698 == 0x32278227ca6e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a699 = __rdtsc() % 1337;
	a699 ^= 0xd0e397900b0e;
	if (a699 == 0xf3f9a080cdd9)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a700 = __rdtsc() % 1337;
	a700 ^= 0xbef66493b3b1;
	if (a700 == 0xcad0d95fee5c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a701 = __rdtsc() % 1337;
	a701 ^= 0x497e0de3f9b7;
	if (a701 == 0x73bdc3676006)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a702 = __rdtsc() % 1337;
	a702 ^= 0x36a649e24860;
	if (a702 == 0xcd3783e94011)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a703 = __rdtsc() % 1337;
	a703 ^= 0x3afe44e2e426;
	if (a703 == 0x9c6621826ae4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a704 = __rdtsc() % 1337;
	a704 ^= 0x6b8080033336;
	if (a704 == 0x77e9e457d1fa)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a705 = __rdtsc() % 1337;
	a705 ^= 0x5faac6562ad4;
	if (a705 == 0xab86fdaf907f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a706 = __rdtsc() % 1337;
	a706 ^= 0xf29f26fab03d;
	if (a706 == 0xc081a533daeb)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a707 = __rdtsc() % 1337;
	a707 ^= 0x95591090193d;
	if (a707 == 0x8530343a890a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a708 = __rdtsc() % 1337;
	a708 ^= 0x04ba32fbbbd7;
	if (a708 == 0xa81d8909ba39)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a709 = __rdtsc() % 1337;
	a709 ^= 0x54e4d2205117;
	if (a709 == 0x7dc4ea9c8684)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a710 = __rdtsc() % 1337;
	a710 ^= 0x2eac6805fd87;
	if (a710 == 0xff4cbb667926)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a711 = __rdtsc() % 1337;
	a711 ^= 0x901d2902b3d1;
	if (a711 == 0x2f0c27a52b5f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a712 = __rdtsc() % 1337;
	a712 ^= 0xfc35117ee16e;
	if (a712 == 0x4e72e8732d5a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a713 = __rdtsc() % 1337;
	a713 ^= 0xcc33c0fa41d3;
	if (a713 == 0x580b4b6b6947)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a714 = __rdtsc() % 1337;
	a714 ^= 0x5bcb4e4aa269;
	if (a714 == 0xb274b79d0427)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a715 = __rdtsc() % 1337;
	a715 ^= 0x144139902061;
	if (a715 == 0x76b53008369f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a716 = __rdtsc() % 1337;
	a716 ^= 0x154cddd67ba8;
	if (a716 == 0x1d39ba488606)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a717 = __rdtsc() % 1337;
	a717 ^= 0xd4ac26f553ba;
	if (a717 == 0x7c60489b4095)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a718 = __rdtsc() % 1337;
	a718 ^= 0x27ad77980816;
	if (a718 == 0x081d4a5aa005)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a719 = __rdtsc() % 1337;
	a719 ^= 0x6770a3216f34;
	if (a719 == 0x3b0a24d473f9)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a720 = __rdtsc() % 1337;
	a720 ^= 0xbfe723babe97;
	if (a720 == 0x8544e203a9ad)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a721 = __rdtsc() % 1337;
	a721 ^= 0xa9f5e8ba9ffe;
	if (a721 == 0xffe7c937169b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a722 = __rdtsc() % 1337;
	a722 ^= 0x8aaa334291e8;
	if (a722 == 0xae40c9d068a4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a723 = __rdtsc() % 1337;
	a723 ^= 0x10a893797973;
	if (a723 == 0x2dbaebb5fc29)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a724 = __rdtsc() % 1337;
	a724 ^= 0x8c8bc1a9c0b0;
	if (a724 == 0x0432b8ff4bf3)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a725 = __rdtsc() % 1337;
	a725 ^= 0xb75025863e99;
	if (a725 == 0xbc1a801f1c5f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a726 = __rdtsc() % 1337;
	a726 ^= 0x7b0d6d97a872;
	if (a726 == 0xa170fe8a8ce3)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a727 = __rdtsc() % 1337;
	a727 ^= 0xa54688adc387;
	if (a727 == 0xc832d6940ab1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a728 = __rdtsc() % 1337;
	a728 ^= 0xee26eec6d43f;
	if (a728 == 0x2f10e04fcd01)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a729 = __rdtsc() % 1337;
	a729 ^= 0xfbf932224fdc;
	if (a729 == 0x36671612eaf7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a730 = __rdtsc() % 1337;
	a730 ^= 0xc047d642b1bd;
	if (a730 == 0x5cf3dfb2dc94)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a731 = __rdtsc() % 1337;
	a731 ^= 0x39147eab93b1;
	if (a731 == 0x4adc04067a43)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a732 = __rdtsc() % 1337;
	a732 ^= 0xd90a29bb7456;
	if (a732 == 0x624b71da59df)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a733 = __rdtsc() % 1337;
	a733 ^= 0x3c786db4a11d;
	if (a733 == 0xc47580e56795)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a734 = __rdtsc() % 1337;
	a734 ^= 0x787576b53378;
	if (a734 == 0xd224628f1e22)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a735 = __rdtsc() % 1337;
	a735 ^= 0x6f23a58a1960;
	if (a735 == 0xf1abd67044cc)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a736 = __rdtsc() % 1337;
	a736 ^= 0x20382fac0948;
	if (a736 == 0x81b83c80430b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a737 = __rdtsc() % 1337;
	a737 ^= 0xf0c57b5292b0;
	if (a737 == 0xc5a40580a125)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a738 = __rdtsc() % 1337;
	a738 ^= 0x48eb3ca9c8a7;
	if (a738 == 0x737fcbd25158)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a739 = __rdtsc() % 1337;
	a739 ^= 0xd0dfedceb5b7;
	if (a739 == 0x4f3c705c50be)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a740 = __rdtsc() % 1337;
	a740 ^= 0xb7a55d10a69a;
	if (a740 == 0xa3d0207f4bc5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a741 = __rdtsc() % 1337;
	a741 ^= 0x528fe56247e9;
	if (a741 == 0xb981d3264f58)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a742 = __rdtsc() % 1337;
	a742 ^= 0xe230976b0f87;
	if (a742 == 0xdbd08facb094)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a743 = __rdtsc() % 1337;
	a743 ^= 0xb9e0facb7bca;
	if (a743 == 0xebdd2bd1836f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a744 = __rdtsc() % 1337;
	a744 ^= 0x22ca4fbdeecb;
	if (a744 == 0x56cbffe9ae9f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a745 = __rdtsc() % 1337;
	a745 ^= 0xc1de0c996218;
	if (a745 == 0xbfd20abc7e3c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a746 = __rdtsc() % 1337;
	a746 ^= 0x7399ac8451f3;
	if (a746 == 0xdb1fcf853354)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a747 = __rdtsc() % 1337;
	a747 ^= 0xd0eb07e2994f;
	if (a747 == 0xaa6c341488d2)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a748 = __rdtsc() % 1337;
	a748 ^= 0x5f08f95e9431;
	if (a748 == 0x9a8596a6d5f6)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a749 = __rdtsc() % 1337;
	a749 ^= 0x7df1939196ed;
	if (a749 == 0xee4d3b1c3760)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a750 = __rdtsc() % 1337;
	a750 ^= 0x74f0a4ce0361;
	if (a750 == 0x8df86547227f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a751 = __rdtsc() % 1337;
	a751 ^= 0x3ef67f35089a;
	if (a751 == 0x47f54a6cfbbf)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a752 = __rdtsc() % 1337;
	a752 ^= 0xca97cc527880;
	if (a752 == 0xf8af78f195aa)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a753 = __rdtsc() % 1337;
	a753 ^= 0x1a2f2670e8e7;
	if (a753 == 0x33cd8d0f261e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a754 = __rdtsc() % 1337;
	a754 ^= 0x728aa5e34c55;
	if (a754 == 0x4c4f3dfaccdf)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a755 = __rdtsc() % 1337;
	a755 ^= 0x9e425cf02286;
	if (a755 == 0xf5b82ba59ea1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a756 = __rdtsc() % 1337;
	a756 ^= 0x6ffd19aceeaa;
	if (a756 == 0x5171172834bb)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a757 = __rdtsc() % 1337;
	a757 ^= 0xca7319513c96;
	if (a757 == 0xaebe5b19625a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a758 = __rdtsc() % 1337;
	a758 ^= 0xcec3bcf829aa;
	if (a758 == 0x335008b32af7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a759 = __rdtsc() % 1337;
	a759 ^= 0xf5292ef64a64;
	if (a759 == 0x984eb3cb5e15)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a760 = __rdtsc() % 1337;
	a760 ^= 0x1c990f4b2890;
	if (a760 == 0x97cae746ead5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a761 = __rdtsc() % 1337;
	a761 ^= 0xafcecdceb77e;
	if (a761 == 0xecb5626b501c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a762 = __rdtsc() % 1337;
	a762 ^= 0x40f7ea91cbd8;
	if (a762 == 0x3fcf5d1b0517)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a763 = __rdtsc() % 1337;
	a763 ^= 0xf84b7974814c;
	if (a763 == 0x5427bb7a6907)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a764 = __rdtsc() % 1337;
	a764 ^= 0x93bbb91e0b2e;
	if (a764 == 0xe6d480c3f454)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a765 = __rdtsc() % 1337;
	a765 ^= 0x5403388ed0bf;
	if (a765 == 0x002c50409ac6)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a766 = __rdtsc() % 1337;
	a766 ^= 0x8b878e65ff6b;
	if (a766 == 0x80f58a45b8f0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a767 = __rdtsc() % 1337;
	a767 ^= 0x2d6300467dce;
	if (a767 == 0x85c4b2d2c712)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a768 = __rdtsc() % 1337;
	a768 ^= 0x07d58de40a41;
	if (a768 == 0x5c992238b84d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a769 = __rdtsc() % 1337;
	a769 ^= 0x9606758e9ca6;
	if (a769 == 0x33034be4aa0c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a770 = __rdtsc() % 1337;
	a770 ^= 0x9ea07c9de54c;
	if (a770 == 0x404267043abd)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a771 = __rdtsc() % 1337;
	a771 ^= 0x2ed07da4f426;
	if (a771 == 0x5d402f3b521c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a772 = __rdtsc() % 1337;
	a772 ^= 0x0311179368af;
	if (a772 == 0x1b8477b3a422)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a773 = __rdtsc() % 1337;
	a773 ^= 0x22329ee3aa40;
	if (a773 == 0xf01456b13107)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a774 = __rdtsc() % 1337;
	a774 ^= 0x4a4808d0c727;
	if (a774 == 0x799874f04f8a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a775 = __rdtsc() % 1337;
	a775 ^= 0xdeb9ea49ebff;
	if (a775 == 0xd6fccb67247a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a776 = __rdtsc() % 1337;
	a776 ^= 0xd0dff52ac1dd;
	if (a776 == 0x62ee7b27ffcd)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a777 = __rdtsc() % 1337;
	a777 ^= 0xeeeffc60b660;
	if (a777 == 0x48f7e864d5f1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a778 = __rdtsc() % 1337;
	a778 ^= 0x861b9a3be05f;
	if (a778 == 0x3593333ab0f1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a779 = __rdtsc() % 1337;
	a779 ^= 0xc19ddb507d1f;
	if (a779 == 0xdc5697f3211e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a780 = __rdtsc() % 1337;
	a780 ^= 0x63a134b46547;
	if (a780 == 0xac2f9e2b1944)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a781 = __rdtsc() % 1337;
	a781 ^= 0x2b719cc8bbf8;
	if (a781 == 0xa2bfc0bcfc40)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a782 = __rdtsc() % 1337;
	a782 ^= 0x70baa2bad506;
	if (a782 == 0xfd6fbf8affb0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a783 = __rdtsc() % 1337;
	a783 ^= 0x4eed65e6ea0c;
	if (a783 == 0xedf7b3a411ff)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a784 = __rdtsc() % 1337;
	a784 ^= 0x503cd15ab252;
	if (a784 == 0x92eeacc2c123)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a785 = __rdtsc() % 1337;
	a785 ^= 0x9e83f1e77eca;
	if (a785 == 0x14bc432a5db4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a786 = __rdtsc() % 1337;
	a786 ^= 0x825fd8fb63fb;
	if (a786 == 0x527badc4e736)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a787 = __rdtsc() % 1337;
	a787 ^= 0x298385eee918;
	if (a787 == 0x2af1a7b3759a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a788 = __rdtsc() % 1337;
	a788 ^= 0x41effdd33f2e;
	if (a788 == 0x4e04c9c9138b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a789 = __rdtsc() % 1337;
	a789 ^= 0xf9a579528a3c;
	if (a789 == 0x14a4fbb892b1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a790 = __rdtsc() % 1337;
	a790 ^= 0x516ad5be38c4;
	if (a790 == 0x40370f3209bb)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a791 = __rdtsc() % 1337;
	a791 ^= 0xd949a38fd3ff;
	if (a791 == 0x537e1f37e011)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a792 = __rdtsc() % 1337;
	a792 ^= 0xb50831a1ef2f;
	if (a792 == 0x3113b213a83a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a793 = __rdtsc() % 1337;
	a793 ^= 0x588bc8f03829;
	if (a793 == 0x053ed945788c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a794 = __rdtsc() % 1337;
	a794 ^= 0x904839ad907d;
	if (a794 == 0xddf37b119cca)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a795 = __rdtsc() % 1337;
	a795 ^= 0xb9bc50980da7;
	if (a795 == 0xc5d54277b7f9)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a796 = __rdtsc() % 1337;
	a796 ^= 0x7338a2aae7d0;
	if (a796 == 0x1e9fbc52c706)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a797 = __rdtsc() % 1337;
	a797 ^= 0xa42c3cc01ac5;
	if (a797 == 0x0a3411d7cae4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a798 = __rdtsc() % 1337;
	a798 ^= 0x5ea9d84ab14c;
	if (a798 == 0x81233a7e8132)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a799 = __rdtsc() % 1337;
	a799 ^= 0x2c4cb87375c5;
	if (a799 == 0x26193d157e6c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a800 = __rdtsc() % 1337;
	a800 ^= 0xe1beb3e2aef7;
	if (a800 == 0xe052747632ed)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a801 = __rdtsc() % 1337;
	a801 ^= 0x8b51b92ed763;
	if (a801 == 0x067fa1c2cc34)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a802 = __rdtsc() % 1337;
	a802 ^= 0x84dc59bec54e;
	if (a802 == 0x176368f0949a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a803 = __rdtsc() % 1337;
	a803 ^= 0x0655602d0140;
	if (a803 == 0x7604b6dec8a8)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a804 = __rdtsc() % 1337;
	a804 ^= 0x6108eb9b9cef;
	if (a804 == 0xf060e1414fc0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a805 = __rdtsc() % 1337;
	a805 ^= 0x68b8d9c4e471;
	if (a805 == 0x6c0da104188f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a806 = __rdtsc() % 1337;
	a806 ^= 0x9f9e5c525a83;
	if (a806 == 0x9e4feb013168)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a807 = __rdtsc() % 1337;
	a807 ^= 0x596b89751215;
	if (a807 == 0xb9fc0bebf8f1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a808 = __rdtsc() % 1337;
	a808 ^= 0x473a8b5afd99;
	if (a808 == 0xeca5d07052bb)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a809 = __rdtsc() % 1337;
	a809 ^= 0x09aa66b01663;
	if (a809 == 0x8562474279ac)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a810 = __rdtsc() % 1337;
	a810 ^= 0xd54496999074;
	if (a810 == 0xf4d178df872c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a811 = __rdtsc() % 1337;
	a811 ^= 0x9e4c10045313;
	if (a811 == 0x3724e8e589e9)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a812 = __rdtsc() % 1337;
	a812 ^= 0x2a8d2dfa649d;
	if (a812 == 0x65ea4daedd43)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a813 = __rdtsc() % 1337;
	a813 ^= 0x1aaece9882b6;
	if (a813 == 0x956931344d8e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a814 = __rdtsc() % 1337;
	a814 ^= 0x62f559b160e6;
	if (a814 == 0x8b2d22dac210)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a815 = __rdtsc() % 1337;
	a815 ^= 0xebd499a4bfa8;
	if (a815 == 0x6981aa07bcb6)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a816 = __rdtsc() % 1337;
	a816 ^= 0x60b78a3fdf55;
	if (a816 == 0xba579cece446)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a817 = __rdtsc() % 1337;
	a817 ^= 0x90f33b91cce5;
	if (a817 == 0x749fc54bf92a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a818 = __rdtsc() % 1337;
	a818 ^= 0xe0506428669e;
	if (a818 == 0x8847666f0d31)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a819 = __rdtsc() % 1337;
	a819 ^= 0x66b0893671f7;
	if (a819 == 0xdcec242bfdc5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a820 = __rdtsc() % 1337;
	a820 ^= 0x9c47aa2ddb92;
	if (a820 == 0x96c71b5ed422)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a821 = __rdtsc() % 1337;
	a821 ^= 0x38c887d442dd;
	if (a821 == 0xd9c943193ebc)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a822 = __rdtsc() % 1337;
	a822 ^= 0xb6d1db0285f4;
	if (a822 == 0xb506a4bb5ea5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a823 = __rdtsc() % 1337;
	a823 ^= 0x7309b0a49181;
	if (a823 == 0x67549b21a836)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a824 = __rdtsc() % 1337;
	a824 ^= 0x2cb82090f58e;
	if (a824 == 0x2756e5c1275d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a825 = __rdtsc() % 1337;
	a825 ^= 0x82056c7cbf0b;
	if (a825 == 0x20094e3dcb51)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a826 = __rdtsc() % 1337;
	a826 ^= 0x6efb20e8093d;
	if (a826 == 0xde57b6f2f410)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a827 = __rdtsc() % 1337;
	a827 ^= 0x8ef5acb845f5;
	if (a827 == 0xac100cb6e33d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a828 = __rdtsc() % 1337;
	a828 ^= 0x3d420c127305;
	if (a828 == 0x3a0049d00dd6)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a829 = __rdtsc() % 1337;
	a829 ^= 0xb37e15874591;
	if (a829 == 0xc280e51f3de0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a830 = __rdtsc() % 1337;
	a830 ^= 0x17de5afd971c;
	if (a830 == 0xeb30ddc89e28)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a831 = __rdtsc() % 1337;
	a831 ^= 0x8b69d3c882d3;
	if (a831 == 0x1e0dda34fb77)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a832 = __rdtsc() % 1337;
	a832 ^= 0xc03b10701898;
	if (a832 == 0xf95e59c2d205)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a833 = __rdtsc() % 1337;
	a833 ^= 0x60deb331e83f;
	if (a833 == 0x113d4af89260)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a834 = __rdtsc() % 1337;
	a834 ^= 0xc03adfbe682a;
	if (a834 == 0x9f68e680a2eb)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a835 = __rdtsc() % 1337;
	a835 ^= 0x46d4b99152dd;
	if (a835 == 0x02dd0de3a358)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a836 = __rdtsc() % 1337;
	a836 ^= 0x44f0b9e146a3;
	if (a836 == 0x437868f51d47)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a837 = __rdtsc() % 1337;
	a837 ^= 0x30fc1f4c61ba;
	if (a837 == 0x087a07866eaa)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a838 = __rdtsc() % 1337;
	a838 ^= 0x6e76a61799f0;
	if (a838 == 0xf47c685f8f6c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a839 = __rdtsc() % 1337;
	a839 ^= 0xdc091651f0a6;
	if (a839 == 0x319301f0308f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a840 = __rdtsc() % 1337;
	a840 ^= 0x8f11d70c6628;
	if (a840 == 0x492e764fbdda)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a841 = __rdtsc() % 1337;
	a841 ^= 0x03634df9593c;
	if (a841 == 0xb6c7552a43ed)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a842 = __rdtsc() % 1337;
	a842 ^= 0x74e156c0b5f8;
	if (a842 == 0x67f0e54815e2)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a843 = __rdtsc() % 1337;
	a843 ^= 0xa00cb8dc034a;
	if (a843 == 0x73909407642f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a844 = __rdtsc() % 1337;
	a844 ^= 0x1db1d6186bff;
	if (a844 == 0x9dd85b36133f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a845 = __rdtsc() % 1337;
	a845 ^= 0x48771d1fe237;
	if (a845 == 0x9c82f9f00379)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a846 = __rdtsc() % 1337;
	a846 ^= 0xdc5f74901f0b;
	if (a846 == 0x4b4f8b9c6620)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a847 = __rdtsc() % 1337;
	a847 ^= 0x290aaa7caf4b;
	if (a847 == 0xde93520a41d6)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a848 = __rdtsc() % 1337;
	a848 ^= 0xfeacd05bd8f2;
	if (a848 == 0xef0a02daa09b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a849 = __rdtsc() % 1337;
	a849 ^= 0x2f7147224705;
	if (a849 == 0x15f576768a04)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a850 = __rdtsc() % 1337;
	a850 ^= 0x02c7c39f279c;
	if (a850 == 0xd3143ded41be)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a851 = __rdtsc() % 1337;
	a851 ^= 0x211938561274;
	if (a851 == 0x6bbb8d8eaaf4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a852 = __rdtsc() % 1337;
	a852 ^= 0xf99917c78d58;
	if (a852 == 0x0c2e7960d378)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a853 = __rdtsc() % 1337;
	a853 ^= 0xf1d3eefb0513;
	if (a853 == 0x94a4880faf65)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a854 = __rdtsc() % 1337;
	a854 ^= 0xf003e3a83675;
	if (a854 == 0x3da3dd2d062b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a855 = __rdtsc() % 1337;
	a855 ^= 0xe0c25ca56135;
	if (a855 == 0x5687a3092c14)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a856 = __rdtsc() % 1337;
	a856 ^= 0x42caa6a7d9da;
	if (a856 == 0x08c341fc1f48)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a857 = __rdtsc() % 1337;
	a857 ^= 0x66a267c96847;
	if (a857 == 0x7b6f10f50da8)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a858 = __rdtsc() % 1337;
	a858 ^= 0x9c0f428aa78a;
	if (a858 == 0xef0cabc4f7ed)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a859 = __rdtsc() % 1337;
	a859 ^= 0x0361eaa01c88;
	if (a859 == 0xe3b95f4972e7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a860 = __rdtsc() % 1337;
	a860 ^= 0x8d0c11931ff9;
	if (a860 == 0x46b703a0b8a8)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a861 = __rdtsc() % 1337;
	a861 ^= 0xd38cde874f6d;
	if (a861 == 0x3607d9de592f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a862 = __rdtsc() % 1337;
	a862 ^= 0x9aea1a321760;
	if (a862 == 0x4c42c1aaab98)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a863 = __rdtsc() % 1337;
	a863 ^= 0xe346eb667b29;
	if (a863 == 0x9b2dbe08009e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a864 = __rdtsc() % 1337;
	a864 ^= 0x28f4e3da4336;
	if (a864 == 0xfada460754c4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a865 = __rdtsc() % 1337;
	a865 ^= 0x783599fc0580;
	if (a865 == 0x6f681f6fb56f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a866 = __rdtsc() % 1337;
	a866 ^= 0xf2af054c16b1;
	if (a866 == 0x055889ed2c5c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a867 = __rdtsc() % 1337;
	a867 ^= 0x8a1aaa5e3ef9;
	if (a867 == 0x44b806caff52)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a868 = __rdtsc() % 1337;
	a868 ^= 0x40b87bab4df3;
	if (a868 == 0x4a8b3ccee675)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a869 = __rdtsc() % 1337;
	a869 ^= 0x8327b99a9442;
	if (a869 == 0x48ff8a28ac8e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a870 = __rdtsc() % 1337;
	a870 ^= 0x38f9c7e16d24;
	if (a870 == 0x9af01e788de7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a871 = __rdtsc() % 1337;
	a871 ^= 0xb83c9acc7bd4;
	if (a871 == 0x975a497f576f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a872 = __rdtsc() % 1337;
	a872 ^= 0x5b64240d19a4;
	if (a872 == 0xe0ad72f9acd5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a873 = __rdtsc() % 1337;
	a873 ^= 0xaaf5ed0d6ac2;
	if (a873 == 0xbef57a05dce3)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a874 = __rdtsc() % 1337;
	a874 ^= 0x039ef40950a6;
	if (a874 == 0x9952de50184c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a875 = __rdtsc() % 1337;
	a875 ^= 0x0d5a13ab5492;
	if (a875 == 0xe1d58f7a1fac)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a876 = __rdtsc() % 1337;
	a876 ^= 0xcf1bc713a09d;
	if (a876 == 0x9e90503dc78a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a877 = __rdtsc() % 1337;
	a877 ^= 0xb589164c8400;
	if (a877 == 0x654477949720)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a878 = __rdtsc() % 1337;
	a878 ^= 0x3de38365d3d6;
	if (a878 == 0xdab67d8ad774)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a879 = __rdtsc() % 1337;
	a879 ^= 0x216b59795c7f;
	if (a879 == 0xe4919a2a32c9)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a880 = __rdtsc() % 1337;
	a880 ^= 0x0f25ca5304cb;
	if (a880 == 0xd3f714d57729)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a881 = __rdtsc() % 1337;
	a881 ^= 0x1dc42d283f64;
	if (a881 == 0x64d13bb93bb9)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a882 = __rdtsc() % 1337;
	a882 ^= 0x9bb4b3d0f716;
	if (a882 == 0x42acdc1e0719)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a883 = __rdtsc() % 1337;
	a883 ^= 0xd8e2044951d3;
	if (a883 == 0x4970d3aab608)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a884 = __rdtsc() % 1337;
	a884 ^= 0xbb34b46735ea;
	if (a884 == 0x41b8bf3005e0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a885 = __rdtsc() % 1337;
	a885 ^= 0xf065dd08cded;
	if (a885 == 0x655254257fc7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a886 = __rdtsc() % 1337;
	a886 ^= 0x8cc697ec501c;
	if (a886 == 0xbea445b214e3)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a887 = __rdtsc() % 1337;
	a887 ^= 0x2522c95c0f7e;
	if (a887 == 0xe47635d6a2eb)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a888 = __rdtsc() % 1337;
	a888 ^= 0x5017cd3a77e0;
	if (a888 == 0x67dd7da6bb7d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a889 = __rdtsc() % 1337;
	a889 ^= 0x411853feaf77;
	if (a889 == 0x8f1b50052770)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a890 = __rdtsc() % 1337;
	a890 ^= 0x3d7cadbdfd07;
	if (a890 == 0xeb9ed30bd7fa)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a891 = __rdtsc() % 1337;
	a891 ^= 0x729fc319bd90;
	if (a891 == 0x76f79db6bf37)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a892 = __rdtsc() % 1337;
	a892 ^= 0x145c487171f1;
	if (a892 == 0x0ced731b7814)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a893 = __rdtsc() % 1337;
	a893 ^= 0x7549c161f99d;
	if (a893 == 0x9f149496a5ce)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a894 = __rdtsc() % 1337;
	a894 ^= 0x1ea896040aed;
	if (a894 == 0xb336d86f3527)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a895 = __rdtsc() % 1337;
	a895 ^= 0x46b283a6b532;
	if (a895 == 0x97bb7f028ca4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a896 = __rdtsc() % 1337;
	a896 ^= 0x3541e12d25b9;
	if (a896 == 0x6c788e229c36)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a897 = __rdtsc() % 1337;
	a897 ^= 0xe104a42d30c6;
	if (a897 == 0x7a7a5c2c7f12)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a898 = __rdtsc() % 1337;
	a898 ^= 0xf94528cf7e61;
	if (a898 == 0xdb3897375682)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a899 = __rdtsc() % 1337;
	a899 ^= 0x8a42a8b10b21;
	if (a899 == 0xf3f9e604ce97)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a900 = __rdtsc() % 1337;
	a900 ^= 0x7468dac558f9;
	if (a900 == 0x361348a031b3)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a901 = __rdtsc() % 1337;
	a901 ^= 0xdc244277b152;
	if (a901 == 0xb465ed738d2f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a902 = __rdtsc() % 1337;
	a902 ^= 0xacaee48ac7c3;
	if (a902 == 0x657cfc36b6b9)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a903 = __rdtsc() % 1337;
	a903 ^= 0xb21384aa9094;
	if (a903 == 0xb760e901521b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a904 = __rdtsc() % 1337;
	a904 ^= 0x369b7820c2e0;
	if (a904 == 0xb8f0499efd5a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a905 = __rdtsc() % 1337;
	a905 ^= 0x47f439d46c64;
	if (a905 == 0x9784c8b87ae0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a906 = __rdtsc() % 1337;
	a906 ^= 0x3a3fa677236a;
	if (a906 == 0x58e6f1ab222d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a907 = __rdtsc() % 1337;
	a907 ^= 0xee16e8f1dd2d;
	if (a907 == 0xd361fac2dded)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a908 = __rdtsc() % 1337;
	a908 ^= 0x9e9d38db18d1;
	if (a908 == 0x347daf8956fa)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a909 = __rdtsc() % 1337;
	a909 ^= 0xe795c5399ba4;
	if (a909 == 0x2fe90402bfaa)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a910 = __rdtsc() % 1337;
	a910 ^= 0x08920518bf9f;
	if (a910 == 0xa28ea055be40)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a911 = __rdtsc() % 1337;
	a911 ^= 0x63a56066894a;
	if (a911 == 0x0bfa02e925dc)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a912 = __rdtsc() % 1337;
	a912 ^= 0xf243f035d6ac;
	if (a912 == 0xf54bbfda3bc7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a913 = __rdtsc() % 1337;
	a913 ^= 0x879f69c15d3e;
	if (a913 == 0xcffc63bf5f5f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a914 = __rdtsc() % 1337;
	a914 ^= 0x8ce245301c32;
	if (a914 == 0x2a608f0ea8a1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a915 = __rdtsc() % 1337;
	a915 ^= 0x7f51e35dd59a;
	if (a915 == 0x89333d60d612)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a916 = __rdtsc() % 1337;
	a916 ^= 0x81ab819df330;
	if (a916 == 0x6383dd6fb222)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a917 = __rdtsc() % 1337;
	a917 ^= 0xd9062164043d;
	if (a917 == 0xbc7a7d2a84dc)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a918 = __rdtsc() % 1337;
	a918 ^= 0x7e3a9e500538;
	if (a918 == 0x6da5f9480e33)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a919 = __rdtsc() % 1337;
	a919 ^= 0xe05a1f4887c4;
	if (a919 == 0xa86efabfbc97)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a920 = __rdtsc() % 1337;
	a920 ^= 0xa1ddf277c9da;
	if (a920 == 0x5245889dd00b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a921 = __rdtsc() % 1337;
	a921 ^= 0xe52fa4929385;
	if (a921 == 0xe261cfc06f26)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a922 = __rdtsc() % 1337;
	a922 ^= 0xcae069d948d0;
	if (a922 == 0xbee3c7039f6e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a923 = __rdtsc() % 1337;
	a923 ^= 0x051cf3e0ea1a;
	if (a923 == 0x3d9ef7ac97ed)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a924 = __rdtsc() % 1337;
	a924 ^= 0xa270d81be79a;
	if (a924 == 0x8bff59709507)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a925 = __rdtsc() % 1337;
	a925 ^= 0xa890bccc53c1;
	if (a925 == 0x61582521b934)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a926 = __rdtsc() % 1337;
	a926 ^= 0x8b19cbaea9cf;
	if (a926 == 0xbb8efa4b7593)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a927 = __rdtsc() % 1337;
	a927 ^= 0xe2ee0762b365;
	if (a927 == 0xf61ef394a42d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a928 = __rdtsc() % 1337;
	a928 ^= 0xb7c7d06ecd07;
	if (a928 == 0xf26956827967)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a929 = __rdtsc() % 1337;
	a929 ^= 0x6d256cc20b2c;
	if (a929 == 0xffd2ceecd1d2)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a930 = __rdtsc() % 1337;
	a930 ^= 0xaf2212c5dfa8;
	if (a930 == 0xcf0a97af224f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a931 = __rdtsc() % 1337;
	a931 ^= 0x0475f5a15fcd;
	if (a931 == 0x3ee6c025d00b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a932 = __rdtsc() % 1337;
	a932 ^= 0x45f0e2a92d2b;
	if (a932 == 0x88cd5e264745)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a933 = __rdtsc() % 1337;
	a933 ^= 0x03635216cea9;
	if (a933 == 0x41fc16ea844f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a934 = __rdtsc() % 1337;
	a934 ^= 0x0aac1af7cb06;
	if (a934 == 0x9f2934b5c200)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a935 = __rdtsc() % 1337;
	a935 ^= 0x9e14859c00a5;
	if (a935 == 0x96dc8cd6e9fd)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a936 = __rdtsc() % 1337;
	a936 ^= 0xc12c1fe07207;
	if (a936 == 0x2df37fa3a8e0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a937 = __rdtsc() % 1337;
	a937 ^= 0xded15f6e4b3c;
	if (a937 == 0x8cd871136a4f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a938 = __rdtsc() % 1337;
	a938 ^= 0x8b6f3686e6fa;
	if (a938 == 0x4d54fd9218ea)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a939 = __rdtsc() % 1337;
	a939 ^= 0xf7550896ec7c;
	if (a939 == 0x49f0091a1e29)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a940 = __rdtsc() % 1337;
	a940 ^= 0x08db97830e4e;
	if (a940 == 0x899f189da39f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a941 = __rdtsc() % 1337;
	a941 ^= 0x27e0006ccb6d;
	if (a941 == 0x1f90b52ae65b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a942 = __rdtsc() % 1337;
	a942 ^= 0xa55d2df3c3e9;
	if (a942 == 0x29d65dcd8733)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a943 = __rdtsc() % 1337;
	a943 ^= 0x9adfa62b9fe4;
	if (a943 == 0x92b4506e0b74)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a944 = __rdtsc() % 1337;
	a944 ^= 0xb49abe557cd7;
	if (a944 == 0x485a0620b396)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a945 = __rdtsc() % 1337;
	a945 ^= 0xf61d472685a4;
	if (a945 == 0xd7d8e8b5b96d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a946 = __rdtsc() % 1337;
	a946 ^= 0x499e65284a80;
	if (a946 == 0x9ce078127ac5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a947 = __rdtsc() % 1337;
	a947 ^= 0xa3a64b9a5c9e;
	if (a947 == 0x6636567e100e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a948 = __rdtsc() % 1337;
	a948 ^= 0x5091461c5c1e;
	if (a948 == 0x732d3aa753aa)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a949 = __rdtsc() % 1337;
	a949 ^= 0x8dc25505864c;
	if (a949 == 0x14b06ef85be8)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a950 = __rdtsc() % 1337;
	a950 ^= 0x4638625bdc5e;
	if (a950 == 0x84583246f78a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a951 = __rdtsc() % 1337;
	a951 ^= 0xc63d031270fa;
	if (a951 == 0x9d0856adbc9d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a952 = __rdtsc() % 1337;
	a952 ^= 0x108a181c4148;
	if (a952 == 0x99bc3925af73)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a953 = __rdtsc() % 1337;
	a953 ^= 0x2dc97ea808ef;
	if (a953 == 0x3a4acb1ae9e5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a954 = __rdtsc() % 1337;
	a954 ^= 0xff63c67f9418;
	if (a954 == 0xbb51ed44743c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a955 = __rdtsc() % 1337;
	a955 ^= 0x4fc8c6f69f79;
	if (a955 == 0xaaeacc3f0f82)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a956 = __rdtsc() % 1337;
	a956 ^= 0x1154f5bc6169;
	if (a956 == 0x43bd149c41ed)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a957 = __rdtsc() % 1337;
	a957 ^= 0xf9028c63e52c;
	if (a957 == 0xd23b55151808)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a958 = __rdtsc() % 1337;
	a958 ^= 0x0a570b99ee5b;
	if (a958 == 0xf8daa07fbb99)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a959 = __rdtsc() % 1337;
	a959 ^= 0x5a12c848e3a4;
	if (a959 == 0xa3b879604559)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a960 = __rdtsc() % 1337;
	a960 ^= 0x2f621618e66b;
	if (a960 == 0x5520c1faa522)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a961 = __rdtsc() % 1337;
	a961 ^= 0x39d5f5617381;
	if (a961 == 0x4e63ce28b7dc)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a962 = __rdtsc() % 1337;
	a962 ^= 0xe9f391b85462;
	if (a962 == 0x00d2762a165d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a963 = __rdtsc() % 1337;
	a963 ^= 0xf4db2bd066fd;
	if (a963 == 0x842946f44ba1)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a964 = __rdtsc() % 1337;
	a964 ^= 0xc4d896f9ab06;
	if (a964 == 0xfcb2c83d4163)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a965 = __rdtsc() % 1337;
	a965 ^= 0xac86d90f7235;
	if (a965 == 0x0e217776e181)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a966 = __rdtsc() % 1337;
	a966 ^= 0x85df9a6077f4;
	if (a966 == 0xa6194c652ff4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a967 = __rdtsc() % 1337;
	a967 ^= 0xf5315ae04917;
	if (a967 == 0xfd48861e682a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a968 = __rdtsc() % 1337;
	a968 ^= 0xe44916069141;
	if (a968 == 0xa4d63f6a72b6)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a969 = __rdtsc() % 1337;
	a969 ^= 0x0d542ce741ec;
	if (a969 == 0x2d11899463d4)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a970 = __rdtsc() % 1337;
	a970 ^= 0x20f0689e401c;
	if (a970 == 0x5631fc51b163)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a971 = __rdtsc() % 1337;
	a971 ^= 0x6ccf40e2fdd3;
	if (a971 == 0xa8ffd210981f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a972 = __rdtsc() % 1337;
	a972 ^= 0xf755282ebc66;
	if (a972 == 0xc691e67342a0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a973 = __rdtsc() % 1337;
	a973 ^= 0x1ea0ad2c6ee9;
	if (a973 == 0x4fa8d25e765e)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a974 = __rdtsc() % 1337;
	a974 ^= 0x0be4feb84760;
	if (a974 == 0x101cef9f571d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a975 = __rdtsc() % 1337;
	a975 ^= 0x2c1754078d77;
	if (a975 == 0xcf1cd82e315c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a976 = __rdtsc() % 1337;
	a976 ^= 0xf2e64c7137f8;
	if (a976 == 0x74e81e8bb722)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a977 = __rdtsc() % 1337;
	a977 ^= 0x0e694853996c;
	if (a977 == 0x18b098947d69)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a978 = __rdtsc() % 1337;
	a978 ^= 0x074a470e6d9c;
	if (a978 == 0x2debd36b957d)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a979 = __rdtsc() % 1337;
	a979 ^= 0xf2c9f485566f;
	if (a979 == 0x4258dbd976bb)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a980 = __rdtsc() % 1337;
	a980 ^= 0x2d6b588b5592;
	if (a980 == 0x75aa9c18edcf)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a981 = __rdtsc() % 1337;
	a981 ^= 0x92de96635665;
	if (a981 == 0x85b474e03d9b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a982 = __rdtsc() % 1337;
	a982 ^= 0x1707f6199fc3;
	if (a982 == 0x35c0966fb47c)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a983 = __rdtsc() % 1337;
	a983 ^= 0x93ee8f413127;
	if (a983 == 0x181aadeb7b6a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a984 = __rdtsc() % 1337;
	a984 ^= 0xc8f383b3f90d;
	if (a984 == 0x275f1f7d5754)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a985 = __rdtsc() % 1337;
	a985 ^= 0xaa7d623cd64b;
	if (a985 == 0xc2a9ea00b9f5)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a986 = __rdtsc() % 1337;
	a986 ^= 0x963e8c57297e;
	if (a986 == 0x31ba762fe1d7)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a987 = __rdtsc() % 1337;
	a987 ^= 0x7f4f65091249;
	if (a987 == 0x48465907fd1b)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a988 = __rdtsc() % 1337;
	a988 ^= 0x742bc9d1f21b;
	if (a988 == 0x5786d0f45cba)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a989 = __rdtsc() % 1337;
	a989 ^= 0x217cdcf17cfb;
	if (a989 == 0xfe81fd857ea8)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a990 = __rdtsc() % 1337;
	a990 ^= 0x2eb802e0cb4d;
	if (a990 == 0xac3f3c4a34bf)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a991 = __rdtsc() % 1337;
	a991 ^= 0xedaaef5a1830;
	if (a991 == 0xf1d889288d1a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a992 = __rdtsc() % 1337;
	a992 ^= 0x00d37241d929;
	if (a992 == 0xe647cf17dcab)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a993 = __rdtsc() % 1337;
	a993 ^= 0x8e4ecd75d332;
	if (a993 == 0x260bc2bd1721)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a994 = __rdtsc() % 1337;
	a994 ^= 0x35cb99a7a0d2;
	if (a994 == 0xfce9b4631b3a)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a995 = __rdtsc() % 1337;
	a995 ^= 0xec1058589c1a;
	if (a995 == 0x722d7ba38bba)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a996 = __rdtsc() % 1337;
	a996 ^= 0xdee775c1b326;
	if (a996 == 0x801b40fa7985)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a997 = __rdtsc() % 1337;
	a997 ^= 0x91f1d1a5deb9;
	if (a997 == 0xcf5a39790cf0)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a998 = __rdtsc() % 1337;
	a998 ^= 0x309d106c05e5;
	if (a998 == 0x74f415401681)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);

	volatile int a999 = __rdtsc() % 1337;
	a999 ^= 0x62ec86b019d2;
	if (a999 == 0x25c01164717f)
		MessageBoxA(0, "good luck?!?!", "LOOL", 0);
}
#pragma optimize("", on)
#else
static __forceinline void rape_ida() {
	// do nothing cause it's not enabled :3
}
#endif
