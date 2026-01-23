#include "epoly8.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R5330[465])();
void R5330_init () {
	R5330[0] = (char *(*)()) F610_5951;
	{long i; for (i = 80; i < 83; i++) R5330[i] = (char *(*)()) F690_6098;}
	R5330[113] = (char *(*)()) F724_6430;
	R5330[114] = (char *(*)()) F725_6475;
	R5330[115] = (char *(*)()) F726_6475;
	R5330[116] = (char *(*)()) F727_6475;
	R5330[117] = (char *(*)()) F728_6475;
	R5330[118] = (char *(*)()) F729_6475;
	R5330[119] = (char *(*)()) F730_6475;
	R5330[120] = (char *(*)()) F731_6475;
	R5330[121] = (char *(*)()) F732_6475;
	R5330[122] = (char *(*)()) F733_6475;
	R5330[123] = (char *(*)()) F734_6475;
	R5330[124] = (char *(*)()) F735_6475;
	R5330[125] = (char *(*)()) F736_6475;
	R5330[126] = (char *(*)()) F737_6475;
	R5330[127] = (char *(*)()) F738_6475;
	R5330[128] = (char *(*)()) F739_6475;
	R5330[129] = (char *(*)()) F725_6475;
	R5330[130] = (char *(*)()) F733_6475;
	R5330[131] = (char *(*)()) F730_6475;
	R5330[132] = (char *(*)()) F738_6475;
	R5330[193] = (char *(*)()) F544_5895;
	R5330[194] = (char *(*)()) F550_5895;
	R5330[201] = (char *(*)()) F812_6766;
	R5330[206] = (char *(*)()) F817_6882;
	R5330[207] = (char *(*)()) F818_6882;
	R5330[208] = (char *(*)()) F819_6882;
	R5330[209] = (char *(*)()) F820_6882;
	R5330[210] = (char *(*)()) F821_6882;
	R5330[211] = (char *(*)()) F822_6882;
	R5330[212] = (char *(*)()) F823_6882;
	R5330[213] = (char *(*)()) F824_6882;
	R5330[214] = (char *(*)()) F825_6882;
	R5330[215] = (char *(*)()) F826_6882;
	R5330[216] = (char *(*)()) F827_6882;
	R5330[217] = (char *(*)()) F828_6882;
	R5330[218] = (char *(*)()) F829_6882;
	R5330[219] = (char *(*)()) F830_6882;
	R5330[220] = (char *(*)()) F831_6882;
	R5330[221] = (char *(*)()) F817_6882;
	R5330[222] = (char *(*)()) F543_5895;
	R5330[223] = (char *(*)()) F544_5895;
	R5330[224] = (char *(*)()) F549_5895;
	R5330[225] = (char *(*)()) F550_5895;
	{long i; for (i = 226; i < 228; i++) R5330[i] = (char *(*)()) F554_5895;}
	{long i; for (i = 228; i < 230; i++) R5330[i] = (char *(*)()) F543_5895;}
	R5330[230] = (char *(*)()) F549_5895;
	{long i; for (i = 417; i < 419; i++) R5330[i] = (char *(*)()) F546_5895;}
	R5330[421] = (char *(*)()) F545_5895;
	R5330[434] = (char *(*)()) F690_6098;
	{long i; for (i = 463; i < 465; i++) R5330[i] = (char *(*)()) F546_5895;}
}

char *(*R5331[465])();
void R5331_init () {
	R5331[0] = (char *(*)()) F500_5880_5331_2;
	{long i; for (i = 80; i < 83; i++) R5331[i] = (char *(*)()) F497_5880_5331_2;}
	R5331[113] = (char *(*)()) F500_5880_5331_2;
	R5331[114] = (char *(*)()) F495_5880;
	R5331[115] = (char *(*)()) F496_5880_5331_2;
	R5331[116] = (char *(*)()) F497_5880_5331_2;
	R5331[117] = (char *(*)()) F498_5880_5331_2;
	R5331[118] = (char *(*)()) F499_5880_5331_2;
	R5331[119] = (char *(*)()) F500_5880_5331_2;
	R5331[120] = (char *(*)()) F501_5880_5331_2;
	R5331[121] = (char *(*)()) F502_5880_5331_2;
	R5331[122] = (char *(*)()) F503_5880_5331_2;
	R5331[123] = (char *(*)()) F504_5880_5331_2;
	R5331[124] = (char *(*)()) F505_5880_5331_2;
	R5331[125] = (char *(*)()) F506_5880_5331_2;
	R5331[126] = (char *(*)()) F507_5880_5331_2;
	R5331[127] = (char *(*)()) F508_5880_5331_2;
	R5331[128] = (char *(*)()) F509_5880_5331_2;
	R5331[129] = (char *(*)()) F495_5880;
	R5331[130] = (char *(*)()) F503_5880_5331_2;
	R5331[131] = (char *(*)()) F500_5880_5331_2;
	R5331[132] = (char *(*)()) F508_5880_5331_2;
	R5331[193] = (char *(*)()) F804_6580;
	R5331[194] = (char *(*)()) F805_6580_5331_2;
	R5331[201] = (char *(*)()) F495_5880;
	R5331[206] = (char *(*)()) F817_6885;
	R5331[207] = (char *(*)()) F818_6885_5331_2;
	R5331[208] = (char *(*)()) F819_6885_5331_2;
	R5331[209] = (char *(*)()) F820_6885_5331_2;
	R5331[210] = (char *(*)()) F821_6885_5331_2;
	R5331[211] = (char *(*)()) F822_6885_5331_2;
	R5331[212] = (char *(*)()) F823_6885_5331_2;
	R5331[213] = (char *(*)()) F824_6885_5331_2;
	R5331[214] = (char *(*)()) F825_6885_5331_2;
	R5331[215] = (char *(*)()) F826_6885_5331_2;
	R5331[216] = (char *(*)()) F827_6885_5331_2;
	R5331[217] = (char *(*)()) F828_6885_5331_2;
	R5331[218] = (char *(*)()) F829_6885_5331_2;
	R5331[219] = (char *(*)()) F830_6885_5331_2;
	R5331[220] = (char *(*)()) F831_6885_5331_2;
	R5331[221] = (char *(*)()) F817_6885;
	{long i; for (i = 222; i < 224; i++) R5331[i] = (char *(*)()) F495_5880;}
	{long i; for (i = 224; i < 226; i++) R5331[i] = (char *(*)()) F500_5880_5331_2;}
	{long i; for (i = 226; i < 228; i++) R5331[i] = (char *(*)()) F499_5880_5331_2;}
	{long i; for (i = 228; i < 230; i++) R5331[i] = (char *(*)()) F495_5880;}
	R5331[230] = (char *(*)()) F500_5880_5331_2;
	{long i; for (i = 417; i < 419; i++) R5331[i] = (char *(*)()) F497_5880_5331_2;}
	R5331[421] = (char *(*)()) F496_5880_5331_2;
	R5331[434] = (char *(*)()) F497_5880_5331_2;
	{long i; for (i = 463; i < 465; i++) R5331[i] = (char *(*)()) F497_5880_5331_2;}
}
static EIF_BOOLEAN F500_5880_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F500_5880(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F497_5880_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F497_5880(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F496_5880_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F496_5880(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F498_5880_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F498_5880(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F499_5880_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F499_5880(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F501_5880_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F501_5880(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F502_5880_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F502_5880(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F503_5880_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F503_5880(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F504_5880_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F504_5880(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F505_5880_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F505_5880(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F506_5880_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F506_5880(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F507_5880_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F507_5880(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F508_5880_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F508_5880(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F509_5880_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F509_5880(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F805_6580_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F805_6580(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F818_6885_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F818_6885(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F819_6885_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F819_6885(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F820_6885_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F820_6885(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F821_6885_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F821_6885(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F822_6885_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F822_6885(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F823_6885_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F823_6885(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F824_6885_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F824_6885(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F825_6885_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F825_6885(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F826_6885_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F826_6885(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F827_6885_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F827_6885(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F828_6885_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F828_6885(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F829_6885_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F829_6885(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F830_6885_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F830_6885(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F831_6885_5331_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F831_6885(Current, *(EIF_NATURAL_16 *)arg1);
}

char *(*R5332[465])();
void R5332_init () {
	R5332[0] = (char *(*)()) F610_5961_5332_4;
	{long i; for (i = 80; i < 83; i++) R5332[i] = (char *(*)()) F662_6026_5332_4;}
	R5332[113] = (char *(*)()) F532_5894_5332_4;
	R5332[114] = (char *(*)()) F526_5894;
	R5332[115] = (char *(*)()) F527_5894_5332_4;
	R5332[116] = (char *(*)()) F528_5894_5332_4;
	R5332[117] = (char *(*)()) F529_5894_5332_4;
	R5332[118] = (char *(*)()) F530_5894_5332_4;
	R5332[119] = (char *(*)()) F532_5894_5332_4;
	R5332[120] = (char *(*)()) F533_5894_5332_4;
	R5332[121] = (char *(*)()) F534_5894_5332_4;
	R5332[122] = (char *(*)()) F535_5894_5332_4;
	R5332[123] = (char *(*)()) F537_5894_5332_4;
	R5332[124] = (char *(*)()) F538_5894_5332_4;
	R5332[125] = (char *(*)()) F539_5894_5332_4;
	R5332[126] = (char *(*)()) F540_5894_5332_4;
	R5332[127] = (char *(*)()) F541_5894_5332_4;
	R5332[128] = (char *(*)()) F542_5894_5332_4;
	R5332[129] = (char *(*)()) F526_5894;
	R5332[130] = (char *(*)()) F535_5894_5332_4;
	R5332[131] = (char *(*)()) F532_5894_5332_4;
	R5332[132] = (char *(*)()) F541_5894_5332_4;
	R5332[193] = (char *(*)()) F660_6026;
	R5332[194] = (char *(*)()) F665_6026_5332_4;
	R5332[201] = (char *(*)()) F812_6768;
	R5332[206] = (char *(*)()) F660_6026;
	R5332[207] = (char *(*)()) F661_6026_5332_4;
	R5332[208] = (char *(*)()) F662_6026_5332_4;
	R5332[209] = (char *(*)()) F663_6026_5332_4;
	R5332[210] = (char *(*)()) F664_6026_5332_4;
	R5332[211] = (char *(*)()) F665_6026_5332_4;
	R5332[212] = (char *(*)()) F666_6026_5332_4;
	R5332[213] = (char *(*)()) F667_6026_5332_4;
	R5332[214] = (char *(*)()) F668_6026_5332_4;
	R5332[215] = (char *(*)()) F669_6026_5332_4;
	R5332[216] = (char *(*)()) F670_6026_5332_4;
	R5332[217] = (char *(*)()) F671_6026_5332_4;
	R5332[218] = (char *(*)()) F672_6026_5332_4;
	R5332[219] = (char *(*)()) F673_6026_5332_4;
	R5332[220] = (char *(*)()) F674_6026_5332_4;
	R5332[221] = (char *(*)()) F832_6935;
	R5332[222] = (char *(*)()) F525_5894;
	R5332[223] = (char *(*)()) F526_5894;
	R5332[224] = (char *(*)()) F531_5894_5332_4;
	R5332[225] = (char *(*)()) F532_5894_5332_4;
	{long i; for (i = 226; i < 228; i++) R5332[i] = (char *(*)()) F536_5894_5332_4;}
	{long i; for (i = 228; i < 230; i++) R5332[i] = (char *(*)()) F525_5894;}
	R5332[230] = (char *(*)()) F531_5894_5332_4;
	{long i; for (i = 417; i < 419; i++) R5332[i] = (char *(*)()) F528_5894_5332_4;}
	R5332[421] = (char *(*)()) F527_5894_5332_4;
	R5332[434] = (char *(*)()) F662_6026_5332_4;
	{long i; for (i = 463; i < 465; i++) R5332[i] = (char *(*)()) F528_5894_5332_4;}
}
static void F610_5961_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F610_5961(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F662_6026_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F662_6026(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F532_5894_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F532_5894(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F527_5894_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F527_5894(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F528_5894_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F528_5894(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F529_5894_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F529_5894(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F530_5894_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F530_5894(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F533_5894_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F533_5894(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F534_5894_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F534_5894(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F535_5894_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F535_5894(Current, *(EIF_BOOLEAN *)arg1);
}
static void F537_5894_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F537_5894(Current, *(EIF_POINTER *)arg1);
}
static void F538_5894_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F538_5894(Current, *(EIF_REAL_32 *)arg1);
}
static void F539_5894_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F539_5894(Current, *(EIF_REAL_64 *)arg1);
}
static void F540_5894_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F540_5894(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F541_5894_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F541_5894(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F542_5894_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F542_5894(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F665_6026_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F665_6026(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F661_6026_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F661_6026(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F663_6026_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F663_6026(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F664_6026_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F664_6026(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F666_6026_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F666_6026(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F667_6026_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F667_6026(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F668_6026_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F668_6026(Current, *(EIF_BOOLEAN *)arg1);
}
static void F669_6026_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F669_6026(Current, *(EIF_POINTER *)arg1);
}
static void F670_6026_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F670_6026(Current, *(EIF_REAL_32 *)arg1);
}
static void F671_6026_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F671_6026(Current, *(EIF_REAL_64 *)arg1);
}
static void F672_6026_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F672_6026(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F673_6026_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F673_6026(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F674_6026_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F674_6026(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F531_5894_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F531_5894(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F536_5894_5332_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F536_5894(Current, *(EIF_NATURAL_32 *)arg1);
}

char *(*R5333[465])();
void R5333_init () {
	R5333[0] = (char *(*)()) F610_5957_5333_4;
	{long i; for (i = 80; i < 83; i++) R5333[i] = (char *(*)()) F690_6127_5333_4;}
	R5333[113] = (char *(*)()) F724_6431_5333_4;
	R5333[114] = (char *(*)()) F725_6509;
	R5333[115] = (char *(*)()) F726_6509_5333_4;
	R5333[116] = (char *(*)()) F727_6509_5333_4;
	R5333[117] = (char *(*)()) F728_6509_5333_4;
	R5333[118] = (char *(*)()) F729_6509_5333_4;
	R5333[119] = (char *(*)()) F730_6509_5333_4;
	R5333[120] = (char *(*)()) F731_6509_5333_4;
	R5333[121] = (char *(*)()) F732_6509_5333_4;
	R5333[122] = (char *(*)()) F733_6509_5333_4;
	R5333[123] = (char *(*)()) F734_6509_5333_4;
	R5333[124] = (char *(*)()) F735_6509_5333_4;
	R5333[125] = (char *(*)()) F736_6509_5333_4;
	R5333[126] = (char *(*)()) F737_6509_5333_4;
	R5333[127] = (char *(*)()) F738_6509_5333_4;
	R5333[128] = (char *(*)()) F739_6509_5333_4;
	R5333[129] = (char *(*)()) F725_6509;
	R5333[130] = (char *(*)()) F733_6509_5333_4;
	R5333[131] = (char *(*)()) F730_6509_5333_4;
	R5333[132] = (char *(*)()) F738_6509_5333_4;
	R5333[193] = (char *(*)()) F804_6589;
	R5333[194] = (char *(*)()) F805_6589_5333_4;
	R5333[201] = (char *(*)()) F812_6767;
	R5333[206] = (char *(*)()) F817_6898;
	R5333[207] = (char *(*)()) F818_6898_5333_4;
	R5333[208] = (char *(*)()) F819_6898_5333_4;
	R5333[209] = (char *(*)()) F820_6898_5333_4;
	R5333[210] = (char *(*)()) F821_6898_5333_4;
	R5333[211] = (char *(*)()) F822_6898_5333_4;
	R5333[212] = (char *(*)()) F823_6898_5333_4;
	R5333[213] = (char *(*)()) F824_6898_5333_4;
	R5333[214] = (char *(*)()) F825_6898_5333_4;
	R5333[215] = (char *(*)()) F826_6898_5333_4;
	R5333[216] = (char *(*)()) F827_6898_5333_4;
	R5333[217] = (char *(*)()) F828_6898_5333_4;
	R5333[218] = (char *(*)()) F829_6898_5333_4;
	R5333[219] = (char *(*)()) F830_6898_5333_4;
	R5333[220] = (char *(*)()) F831_6898_5333_4;
	R5333[221] = (char *(*)()) F832_6934;
	R5333[222] = (char *(*)()) F833_7056;
	R5333[223] = (char *(*)()) F834_7056;
	R5333[224] = (char *(*)()) F835_7056_5333_4;
	R5333[225] = (char *(*)()) F836_7056_5333_4;
	{long i; for (i = 226; i < 228; i++) R5333[i] = (char *(*)()) F837_7056_5333_4;}
	{long i; for (i = 228; i < 230; i++) R5333[i] = (char *(*)()) F833_7056;}
	R5333[230] = (char *(*)()) F835_7056_5333_4;
	{long i; for (i = 417; i < 419; i++) R5333[i] = (char *(*)()) F1028_8983_5333_4;}
	R5333[421] = (char *(*)()) F1032_9151_5333_4;
	R5333[434] = (char *(*)()) F690_6127_5333_4;
	{long i; for (i = 463; i < 465; i++) R5333[i] = (char *(*)()) F1028_8983_5333_4;}
}
static void F610_5957_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F610_5957(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F690_6127_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F690_6127(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F724_6431_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F724_6431(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F726_6509_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F726_6509(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F727_6509_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F727_6509(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F728_6509_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F728_6509(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F729_6509_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F729_6509(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F730_6509_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F730_6509(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F731_6509_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F731_6509(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F732_6509_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F732_6509(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F733_6509_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F733_6509(Current, *(EIF_BOOLEAN *)arg1);
}
static void F734_6509_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F734_6509(Current, *(EIF_POINTER *)arg1);
}
static void F735_6509_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F735_6509(Current, *(EIF_REAL_32 *)arg1);
}
static void F736_6509_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F736_6509(Current, *(EIF_REAL_64 *)arg1);
}
static void F737_6509_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F737_6509(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F738_6509_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F738_6509(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F739_6509_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F739_6509(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F805_6589_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F805_6589(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F818_6898_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F818_6898(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F819_6898_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F819_6898(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F820_6898_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F820_6898(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F821_6898_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F821_6898(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F822_6898_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F822_6898(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F823_6898_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F823_6898(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F824_6898_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F824_6898(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F825_6898_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F825_6898(Current, *(EIF_BOOLEAN *)arg1);
}
static void F826_6898_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F826_6898(Current, *(EIF_POINTER *)arg1);
}
static void F827_6898_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F827_6898(Current, *(EIF_REAL_32 *)arg1);
}
static void F828_6898_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F828_6898(Current, *(EIF_REAL_64 *)arg1);
}
static void F829_6898_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F829_6898(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F830_6898_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F830_6898(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F831_6898_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F831_6898(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F835_7056_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F835_7056(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F836_7056_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F836_7056(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F837_7056_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F837_7056(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F1028_8983_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1028_8983(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F1032_9151_5333_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1032_9151(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R5334[465])();
void R5334_init () {
	R5334[0] = (char *(*)()) F500_5883;
	{long i; for (i = 80; i < 83; i++) R5334[i] = (char *(*)()) F497_5883;}
	R5334[113] = (char *(*)()) F500_5883;
	R5334[114] = (char *(*)()) F495_5883;
	R5334[115] = (char *(*)()) F496_5883;
	R5334[116] = (char *(*)()) F497_5883;
	R5334[117] = (char *(*)()) F498_5883;
	R5334[118] = (char *(*)()) F499_5883;
	R5334[119] = (char *(*)()) F500_5883;
	R5334[120] = (char *(*)()) F501_5883;
	R5334[121] = (char *(*)()) F502_5883;
	R5334[122] = (char *(*)()) F503_5883;
	R5334[123] = (char *(*)()) F504_5883;
	R5334[124] = (char *(*)()) F505_5883;
	R5334[125] = (char *(*)()) F506_5883;
	R5334[126] = (char *(*)()) F507_5883;
	R5334[127] = (char *(*)()) F508_5883;
	R5334[128] = (char *(*)()) F509_5883;
	R5334[129] = (char *(*)()) F495_5883;
	R5334[130] = (char *(*)()) F503_5883;
	R5334[131] = (char *(*)()) F500_5883;
	R5334[132] = (char *(*)()) F508_5883;
	R5334[193] = (char *(*)()) F744_6532;
	R5334[194] = (char *(*)()) F749_6532;
	R5334[201] = (char *(*)()) F495_5883;
	R5334[206] = (char *(*)()) F744_6532;
	R5334[207] = (char *(*)()) F745_6532;
	R5334[208] = (char *(*)()) F746_6532;
	R5334[209] = (char *(*)()) F747_6532;
	R5334[210] = (char *(*)()) F748_6532;
	R5334[211] = (char *(*)()) F749_6532;
	R5334[212] = (char *(*)()) F750_6532;
	R5334[213] = (char *(*)()) F751_6532;
	R5334[214] = (char *(*)()) F752_6532;
	R5334[215] = (char *(*)()) F753_6532;
	R5334[216] = (char *(*)()) F754_6532;
	R5334[217] = (char *(*)()) F755_6532;
	R5334[218] = (char *(*)()) F756_6532;
	R5334[219] = (char *(*)()) F757_6532;
	R5334[220] = (char *(*)()) F758_6532;
	R5334[221] = (char *(*)()) F658_6020;
	{long i; for (i = 222; i < 224; i++) R5334[i] = (char *(*)()) F495_5883;}
	{long i; for (i = 224; i < 226; i++) R5334[i] = (char *(*)()) F500_5883;}
	{long i; for (i = 226; i < 228; i++) R5334[i] = (char *(*)()) F499_5883;}
	{long i; for (i = 228; i < 230; i++) R5334[i] = (char *(*)()) F495_5883;}
	R5334[230] = (char *(*)()) F500_5883;
	{long i; for (i = 417; i < 419; i++) R5334[i] = (char *(*)()) F497_5883;}
	R5334[421] = (char *(*)()) F496_5883;
	R5334[434] = (char *(*)()) F497_5883;
	{long i; for (i = 463; i < 465; i++) R5334[i] = (char *(*)()) F497_5883;}
}

char *(*R5335[465])();
void R5335_init () {
	R5335[0] = (char *(*)()) F610_5960_5335_4;
	{long i; for (i = 80; i < 83; i++) R5335[i] = (char *(*)()) F690_6248_5335_4;}
	R5335[113] = (char *(*)()) F724_6448_5335_4;
	R5335[114] = (char *(*)()) F725_6508;
	R5335[115] = (char *(*)()) F726_6508_5335_4;
	R5335[116] = (char *(*)()) F727_6508_5335_4;
	R5335[117] = (char *(*)()) F728_6508_5335_4;
	R5335[118] = (char *(*)()) F729_6508_5335_4;
	R5335[119] = (char *(*)()) F730_6508_5335_4;
	R5335[120] = (char *(*)()) F731_6508_5335_4;
	R5335[121] = (char *(*)()) F732_6508_5335_4;
	R5335[122] = (char *(*)()) F733_6508_5335_4;
	R5335[123] = (char *(*)()) F734_6508_5335_4;
	R5335[124] = (char *(*)()) F735_6508_5335_4;
	R5335[125] = (char *(*)()) F736_6508_5335_4;
	R5335[126] = (char *(*)()) F737_6508_5335_4;
	R5335[127] = (char *(*)()) F738_6508_5335_4;
	R5335[128] = (char *(*)()) F739_6508_5335_4;
	R5335[129] = (char *(*)()) F725_6508;
	R5335[130] = (char *(*)()) F733_6508_5335_4;
	R5335[131] = (char *(*)()) F730_6508_5335_4;
	R5335[132] = (char *(*)()) F738_6508_5335_4;
	R5335[193] = (char *(*)()) F759_6542;
	R5335[194] = (char *(*)()) F764_6542_5335_4;
	R5335[201] = (char *(*)()) F812_6773;
	R5335[206] = (char *(*)()) F817_6910;
	R5335[207] = (char *(*)()) F818_6910_5335_4;
	R5335[208] = (char *(*)()) F819_6910_5335_4;
	R5335[209] = (char *(*)()) F820_6910_5335_4;
	R5335[210] = (char *(*)()) F821_6910_5335_4;
	R5335[211] = (char *(*)()) F822_6910_5335_4;
	R5335[212] = (char *(*)()) F823_6910_5335_4;
	R5335[213] = (char *(*)()) F824_6910_5335_4;
	R5335[214] = (char *(*)()) F825_6910_5335_4;
	R5335[215] = (char *(*)()) F826_6910_5335_4;
	R5335[216] = (char *(*)()) F827_6910_5335_4;
	R5335[217] = (char *(*)()) F828_6910_5335_4;
	R5335[218] = (char *(*)()) F829_6910_5335_4;
	R5335[219] = (char *(*)()) F830_6910_5335_4;
	R5335[220] = (char *(*)()) F831_6910_5335_4;
	R5335[221] = (char *(*)()) F817_6910;
	R5335[222] = (char *(*)()) F833_6998;
	R5335[223] = (char *(*)()) F834_6998;
	R5335[224] = (char *(*)()) F835_6998_5335_4;
	R5335[225] = (char *(*)()) F836_6998_5335_4;
	{long i; for (i = 226; i < 228; i++) R5335[i] = (char *(*)()) F837_6998_5335_4;}
	{long i; for (i = 228; i < 230; i++) R5335[i] = (char *(*)()) F833_6998;}
	R5335[230] = (char *(*)()) F835_6998_5335_4;
	{long i; for (i = 417; i < 419; i++) R5335[i] = (char *(*)()) F1028_8994_5335_4;}
	R5335[421] = (char *(*)()) F1032_9162_5335_4;
	R5335[434] = (char *(*)()) F690_6248_5335_4;
	{long i; for (i = 463; i < 465; i++) R5335[i] = (char *(*)()) F1028_8994_5335_4;}
}
static void F610_5960_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F610_5960(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F690_6248_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F690_6248(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F724_6448_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F724_6448(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F726_6508_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F726_6508(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F727_6508_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F727_6508(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F728_6508_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F728_6508(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F729_6508_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F729_6508(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F730_6508_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F730_6508(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F731_6508_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F731_6508(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F732_6508_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F732_6508(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F733_6508_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F733_6508(Current, *(EIF_BOOLEAN *)arg1);
}
static void F734_6508_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F734_6508(Current, *(EIF_POINTER *)arg1);
}
static void F735_6508_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F735_6508(Current, *(EIF_REAL_32 *)arg1);
}
static void F736_6508_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F736_6508(Current, *(EIF_REAL_64 *)arg1);
}
static void F737_6508_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F737_6508(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F738_6508_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F738_6508(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F739_6508_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F739_6508(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F764_6542_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F764_6542(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F818_6910_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F818_6910(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F819_6910_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F819_6910(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F820_6910_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F820_6910(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F821_6910_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F821_6910(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F822_6910_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F822_6910(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F823_6910_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F823_6910(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F824_6910_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F824_6910(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F825_6910_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F825_6910(Current, *(EIF_BOOLEAN *)arg1);
}
static void F826_6910_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F826_6910(Current, *(EIF_POINTER *)arg1);
}
static void F827_6910_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F827_6910(Current, *(EIF_REAL_32 *)arg1);
}
static void F828_6910_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F828_6910(Current, *(EIF_REAL_64 *)arg1);
}
static void F829_6910_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F829_6910(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F830_6910_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F830_6910(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F831_6910_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F831_6910(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F835_6998_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F835_6998(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F836_6998_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F836_6998(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F837_6998_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F837_6998(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F1028_8994_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1028_8994(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F1032_9162_5335_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1032_9162(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R5337[465])();
void R5337_init () {
	R5337[0] = (char *(*)()) F610_5964;
	{long i; for (i = 80; i < 83; i++) R5337[i] = (char *(*)()) F690_6162;}
	R5337[113] = (char *(*)()) F724_6437;
	R5337[114] = (char *(*)()) F725_6489;
	R5337[115] = (char *(*)()) F726_6489;
	R5337[116] = (char *(*)()) F727_6489;
	R5337[117] = (char *(*)()) F728_6489;
	R5337[118] = (char *(*)()) F729_6489;
	R5337[119] = (char *(*)()) F730_6489;
	R5337[120] = (char *(*)()) F731_6489;
	R5337[121] = (char *(*)()) F732_6489;
	R5337[122] = (char *(*)()) F733_6489;
	R5337[123] = (char *(*)()) F734_6489;
	R5337[124] = (char *(*)()) F735_6489;
	R5337[125] = (char *(*)()) F736_6489;
	R5337[126] = (char *(*)()) F737_6489;
	R5337[127] = (char *(*)()) F738_6489;
	R5337[128] = (char *(*)()) F739_6489;
	R5337[129] = (char *(*)()) F725_6489;
	R5337[130] = (char *(*)()) F733_6489;
	R5337[131] = (char *(*)()) F730_6489;
	R5337[132] = (char *(*)()) F738_6489;
	R5337[193] = (char *(*)()) F804_6598;
	R5337[194] = (char *(*)()) F805_6598;
	R5337[201] = (char *(*)()) F812_6775;
	R5337[206] = (char *(*)()) F817_6916;
	R5337[207] = (char *(*)()) F818_6916;
	R5337[208] = (char *(*)()) F819_6916;
	R5337[209] = (char *(*)()) F820_6916;
	R5337[210] = (char *(*)()) F821_6916;
	R5337[211] = (char *(*)()) F822_6916;
	R5337[212] = (char *(*)()) F823_6916;
	R5337[213] = (char *(*)()) F824_6916;
	R5337[214] = (char *(*)()) F825_6916;
	R5337[215] = (char *(*)()) F826_6916;
	R5337[216] = (char *(*)()) F827_6916;
	R5337[217] = (char *(*)()) F828_6916;
	R5337[218] = (char *(*)()) F829_6916;
	R5337[219] = (char *(*)()) F830_6916;
	R5337[220] = (char *(*)()) F831_6916;
	R5337[221] = (char *(*)()) F817_6916;
	R5337[222] = (char *(*)()) F833_6999;
	R5337[223] = (char *(*)()) F834_6999;
	R5337[224] = (char *(*)()) F835_6999;
	R5337[225] = (char *(*)()) F836_6999;
	{long i; for (i = 226; i < 228; i++) R5337[i] = (char *(*)()) F837_6999;}
	{long i; for (i = 228; i < 230; i++) R5337[i] = (char *(*)()) F833_6999;}
	R5337[230] = (char *(*)()) F835_6999;
	{long i; for (i = 417; i < 419; i++) R5337[i] = (char *(*)()) F1028_8998;}
	R5337[421] = (char *(*)()) F1032_9166;
	R5337[434] = (char *(*)()) F690_6162;
	{long i; for (i = 463; i < 465; i++) R5337[i] = (char *(*)()) F1074_10455;}
}

char *(*R5338[465])();
void R5338_init () {
	R5338[0] = (char *(*)()) F470_5862_5338_33;
	{long i; for (i = 80; i < 83; i++) R5338[i] = (char *(*)()) F467_5862_5338_33;}
	R5338[113] = (char *(*)()) F724_6423_5338_33;
	R5338[114] = (char *(*)()) F725_6467;
	R5338[115] = (char *(*)()) F726_6467_5338_33;
	R5338[116] = (char *(*)()) F727_6467_5338_33;
	R5338[117] = (char *(*)()) F728_6467_5338_33;
	R5338[118] = (char *(*)()) F729_6467_5338_33;
	R5338[119] = (char *(*)()) F730_6467_5338_33;
	R5338[120] = (char *(*)()) F731_6467_5338_33;
	R5338[121] = (char *(*)()) F732_6467_5338_33;
	R5338[122] = (char *(*)()) F733_6467_5338_33;
	R5338[123] = (char *(*)()) F734_6467_5338_33;
	R5338[124] = (char *(*)()) F735_6467_5338_33;
	R5338[125] = (char *(*)()) F736_6467_5338_33;
	R5338[126] = (char *(*)()) F737_6467_5338_33;
	R5338[127] = (char *(*)()) F738_6467_5338_33;
	R5338[128] = (char *(*)()) F739_6467_5338_33;
	R5338[129] = (char *(*)()) F725_6467;
	R5338[130] = (char *(*)()) F733_6467_5338_33;
	R5338[131] = (char *(*)()) F730_6467_5338_33;
	R5338[132] = (char *(*)()) F738_6467_5338_33;
	R5338[193] = (char *(*)()) F744_6518;
	R5338[194] = (char *(*)()) F749_6518_5338_33;
	R5338[201] = (char *(*)()) F812_6761;
	R5338[206] = (char *(*)()) F744_6518;
	R5338[207] = (char *(*)()) F745_6518_5338_33;
	R5338[208] = (char *(*)()) F746_6518_5338_33;
	R5338[209] = (char *(*)()) F747_6518_5338_33;
	R5338[210] = (char *(*)()) F748_6518_5338_33;
	R5338[211] = (char *(*)()) F749_6518_5338_33;
	R5338[212] = (char *(*)()) F750_6518_5338_33;
	R5338[213] = (char *(*)()) F751_6518_5338_33;
	R5338[214] = (char *(*)()) F752_6518_5338_33;
	R5338[215] = (char *(*)()) F753_6518_5338_33;
	R5338[216] = (char *(*)()) F754_6518_5338_33;
	R5338[217] = (char *(*)()) F755_6518_5338_33;
	R5338[218] = (char *(*)()) F756_6518_5338_33;
	R5338[219] = (char *(*)()) F757_6518_5338_33;
	R5338[220] = (char *(*)()) F758_6518_5338_33;
	R5338[221] = (char *(*)()) F744_6518;
	R5338[222] = (char *(*)()) F833_6965;
	R5338[223] = (char *(*)()) F834_6965;
	R5338[224] = (char *(*)()) F835_6965_5338_33;
	R5338[225] = (char *(*)()) F836_6965_5338_33;
	{long i; for (i = 226; i < 228; i++) R5338[i] = (char *(*)()) F837_6965_5338_33;}
	{long i; for (i = 228; i < 230; i++) R5338[i] = (char *(*)()) F833_6965;}
	R5338[230] = (char *(*)()) F835_6965_5338_33;
	{long i; for (i = 417; i < 419; i++) R5338[i] = (char *(*)()) F1026_8879_5338_33;}
	R5338[421] = (char *(*)()) F1030_9044_5338_33;
	R5338[434] = (char *(*)()) F467_5862_5338_33;
	{long i; for (i = 463; i < 465; i++) R5338[i] = (char *(*)()) F1074_10358_5338_33;}
}
static EIF_INTEGER_32 F470_5862_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F470_5862(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_INTEGER_32 F467_5862_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F467_5862(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_INTEGER_32 F724_6423_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F724_6423(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_INTEGER_32 F726_6467_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F726_6467(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_INTEGER_32 F727_6467_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F727_6467(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_INTEGER_32 F728_6467_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F728_6467(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_INTEGER_32 F729_6467_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F729_6467(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_INTEGER_32 F730_6467_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F730_6467(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_INTEGER_32 F731_6467_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F731_6467(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_INTEGER_32 F732_6467_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F732_6467(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_INTEGER_32 F733_6467_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F733_6467(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_INTEGER_32 F734_6467_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F734_6467(Current, *(EIF_POINTER *)arg1);
}
static EIF_INTEGER_32 F735_6467_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F735_6467(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_INTEGER_32 F736_6467_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F736_6467(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_INTEGER_32 F737_6467_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F737_6467(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_INTEGER_32 F738_6467_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F738_6467(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_INTEGER_32 F739_6467_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F739_6467(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_INTEGER_32 F749_6518_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F749_6518(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_INTEGER_32 F745_6518_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F745_6518(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_INTEGER_32 F746_6518_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F746_6518(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_INTEGER_32 F747_6518_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F747_6518(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_INTEGER_32 F748_6518_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F748_6518(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_INTEGER_32 F750_6518_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F750_6518(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_INTEGER_32 F751_6518_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F751_6518(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_INTEGER_32 F752_6518_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F752_6518(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_INTEGER_32 F753_6518_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F753_6518(Current, *(EIF_POINTER *)arg1);
}
static EIF_INTEGER_32 F754_6518_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F754_6518(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_INTEGER_32 F755_6518_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F755_6518(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_INTEGER_32 F756_6518_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F756_6518(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_INTEGER_32 F757_6518_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F757_6518(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_INTEGER_32 F758_6518_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F758_6518(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_INTEGER_32 F835_6965_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F835_6965(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_INTEGER_32 F836_6965_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F836_6965(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_INTEGER_32 F837_6965_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F837_6965(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_INTEGER_32 F1026_8879_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F1026_8879(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_INTEGER_32 F1030_9044_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F1030_9044(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_INTEGER_32 F1074_10358_5338_33 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F1074_10358(Current, *(EIF_CHARACTER_8 *)arg1);
}

char *(*R5339[352])();
void R5339_init () {
	R5339[0] = (char *(*)()) F724_6419_5339_5;
	R5339[1] = (char *(*)()) F725_6458_5339_5;
	R5339[2] = (char *(*)()) F726_6458_5339_5;
	R5339[3] = (char *(*)()) F727_6458_5339_5;
	R5339[4] = (char *(*)()) F728_6458_5339_5;
	R5339[5] = (char *(*)()) F729_6458_5339_5;
	R5339[6] = (char *(*)()) F730_6458_5339_5;
	R5339[7] = (char *(*)()) F731_6458_5339_5;
	R5339[8] = (char *(*)()) F732_6458_5339_5;
	R5339[9] = (char *(*)()) F733_6458_5339_5;
	R5339[10] = (char *(*)()) F734_6458_5339_5;
	R5339[11] = (char *(*)()) F735_6458_5339_5;
	R5339[12] = (char *(*)()) F736_6458_5339_5;
	R5339[13] = (char *(*)()) F737_6458_5339_5;
	R5339[14] = (char *(*)()) F738_6458_5339_5;
	R5339[15] = (char *(*)()) F739_6458_5339_5;
	R5339[16] = (char *(*)()) F725_6458_5339_5;
	R5339[17] = (char *(*)()) F733_6458_5339_5;
	R5339[18] = (char *(*)()) F730_6458_5339_5;
	R5339[19] = (char *(*)()) F738_6458_5339_5;
	R5339[80] = (char *(*)()) F744_6516_5339_5;
	R5339[81] = (char *(*)()) F749_6516_5339_5;
	R5339[93] = (char *(*)()) F817_6863_5339_5;
	R5339[94] = (char *(*)()) F818_6863_5339_5;
	R5339[95] = (char *(*)()) F819_6863_5339_5;
	R5339[96] = (char *(*)()) F820_6863_5339_5;
	R5339[97] = (char *(*)()) F821_6863_5339_5;
	R5339[98] = (char *(*)()) F822_6863_5339_5;
	R5339[99] = (char *(*)()) F823_6863_5339_5;
	R5339[100] = (char *(*)()) F824_6863_5339_5;
	R5339[101] = (char *(*)()) F825_6863_5339_5;
	R5339[102] = (char *(*)()) F826_6863_5339_5;
	R5339[103] = (char *(*)()) F827_6863_5339_5;
	R5339[104] = (char *(*)()) F828_6863_5339_5;
	R5339[105] = (char *(*)()) F829_6863_5339_5;
	R5339[106] = (char *(*)()) F830_6863_5339_5;
	R5339[107] = (char *(*)()) F831_6863_5339_5;
	R5339[108] = (char *(*)()) F817_6863_5339_5;
	R5339[109] = (char *(*)()) F833_6950;
	R5339[110] = (char *(*)()) F834_6950_5339_5;
	R5339[111] = (char *(*)()) F835_6950_5339_5;
	R5339[112] = (char *(*)()) F836_6950_5339_5;
	{long i; for (i = 113; i < 115; i++) R5339[i] = (char *(*)()) F837_6950_5339_5;}
	{long i; for (i = 115; i < 117; i++) R5339[i] = (char *(*)()) F833_6950;}
	R5339[117] = (char *(*)()) F835_6950_5339_5;
	{long i; for (i = 304; i < 306; i++) R5339[i] = (char *(*)()) F1028_8935_5339_5;}
	R5339[308] = (char *(*)()) F1032_9104_5339_5;
	{long i; for (i = 350; i < 352; i++) R5339[i] = (char *(*)()) F1074_10342_5339_5;}
}
static EIF_REFERENCE F724_6419_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F724_6419(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F725_6458_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F725_6458(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F726_6458_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F726_6458(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(973, 0x00).id, 973, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F727_6458_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F727_6458(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(976, 0x00).id, 976, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F728_6458_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F728_6458(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(946, 0x00).id, 946, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F729_6458_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F729_6458(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(961, 0x00).id, 961, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F730_6458_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F730_6458(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F731_6458_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F731_6458(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F732_6458_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F732_6458(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(964, 0x00).id, 964, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F733_6458_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F733_6458(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(979, 0x00).id, 979, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F734_6458_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F734_6458(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(1015, 0x00).id, 1015, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F735_6458_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F735_6458(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(967, 0x00).id, 967, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F736_6458_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F736_6458(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(970, 0x00).id, 970, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F737_6458_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F737_6458(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(952, 0x00).id, 952, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F738_6458_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F738_6458(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(955, 0x00).id, 955, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F739_6458_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F739_6458(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(982, 0x00).id, 982, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F744_6516_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F744_6516(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F749_6516_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F749_6516(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F817_6863_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F817_6863(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F818_6863_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F818_6863(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(973, 0x00).id, 973, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F819_6863_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F819_6863(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(976, 0x00).id, 976, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F820_6863_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F820_6863(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(946, 0x00).id, 946, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F821_6863_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F821_6863(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(961, 0x00).id, 961, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F822_6863_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F822_6863(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F823_6863_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F823_6863(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F824_6863_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F824_6863(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(964, 0x00).id, 964, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F825_6863_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F825_6863(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(979, 0x00).id, 979, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F826_6863_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F826_6863(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(1015, 0x00).id, 1015, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F827_6863_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F827_6863(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(967, 0x00).id, 967, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F828_6863_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F828_6863(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(970, 0x00).id, 970, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F829_6863_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F829_6863(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(952, 0x00).id, 952, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F830_6863_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F830_6863(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(955, 0x00).id, 955, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F831_6863_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F831_6863(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(982, 0x00).id, 982, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F834_6950_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F834_6950(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F835_6950_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F835_6950(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F836_6950_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F836_6950(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F837_6950_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F837_6950(Current, *(EIF_POINTER *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(961, 0x00).id, 961, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1028_8935_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F1028_8935(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(976, 0x00).id, 976, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1032_9104_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F1032_9104(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(973, 0x00).id, 973, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1074_10342_5339_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F1074_10342(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(976, 0x00).id, 976, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}

char *(*R5341[352])();
void R5341_init () {
	R5341[0] = (char *(*)()) F724_6422_5341_2;
	R5341[1] = (char *(*)()) F725_6473_5341_2;
	R5341[2] = (char *(*)()) F726_6473_5341_2;
	R5341[3] = (char *(*)()) F727_6473_5341_2;
	R5341[4] = (char *(*)()) F728_6473_5341_2;
	R5341[5] = (char *(*)()) F729_6473_5341_2;
	R5341[6] = (char *(*)()) F730_6473_5341_2;
	R5341[7] = (char *(*)()) F731_6473_5341_2;
	R5341[8] = (char *(*)()) F732_6473_5341_2;
	R5341[9] = (char *(*)()) F733_6473_5341_2;
	R5341[10] = (char *(*)()) F734_6473_5341_2;
	R5341[11] = (char *(*)()) F735_6473_5341_2;
	R5341[12] = (char *(*)()) F736_6473_5341_2;
	R5341[13] = (char *(*)()) F737_6473_5341_2;
	R5341[14] = (char *(*)()) F738_6473_5341_2;
	R5341[15] = (char *(*)()) F739_6473_5341_2;
	R5341[16] = (char *(*)()) F725_6473_5341_2;
	R5341[17] = (char *(*)()) F733_6473_5341_2;
	R5341[18] = (char *(*)()) F730_6473_5341_2;
	R5341[19] = (char *(*)()) F738_6473_5341_2;
	R5341[80] = (char *(*)()) F744_6524_5341_2;
	R5341[81] = (char *(*)()) F749_6524_5341_2;
	R5341[93] = (char *(*)()) F817_6884_5341_2;
	R5341[94] = (char *(*)()) F818_6884_5341_2;
	R5341[95] = (char *(*)()) F819_6884_5341_2;
	R5341[96] = (char *(*)()) F820_6884_5341_2;
	R5341[97] = (char *(*)()) F821_6884_5341_2;
	R5341[98] = (char *(*)()) F822_6884_5341_2;
	R5341[99] = (char *(*)()) F823_6884_5341_2;
	R5341[100] = (char *(*)()) F824_6884_5341_2;
	R5341[101] = (char *(*)()) F825_6884_5341_2;
	R5341[102] = (char *(*)()) F826_6884_5341_2;
	R5341[103] = (char *(*)()) F827_6884_5341_2;
	R5341[104] = (char *(*)()) F828_6884_5341_2;
	R5341[105] = (char *(*)()) F829_6884_5341_2;
	R5341[106] = (char *(*)()) F830_6884_5341_2;
	R5341[107] = (char *(*)()) F831_6884_5341_2;
	R5341[108] = (char *(*)()) F817_6884_5341_2;
	R5341[109] = (char *(*)()) F833_6953;
	R5341[110] = (char *(*)()) F834_6953_5341_2;
	R5341[111] = (char *(*)()) F835_6953;
	R5341[112] = (char *(*)()) F836_6953_5341_2;
	{long i; for (i = 113; i < 115; i++) R5341[i] = (char *(*)()) F837_6953_5341_2;}
	{long i; for (i = 115; i < 117; i++) R5341[i] = (char *(*)()) F833_6953;}
	R5341[117] = (char *(*)()) F835_6953;
	{long i; for (i = 304; i < 306; i++) R5341[i] = (char *(*)()) F1023_8738_5341_2;}
	R5341[308] = (char *(*)()) F1023_8738_5341_2;
	{long i; for (i = 350; i < 352; i++) R5341[i] = (char *(*)()) F1023_8738_5341_2;}
}
static EIF_BOOLEAN F724_6422_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F724_6422(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F725_6473_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F725_6473(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F726_6473_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F726_6473(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F727_6473_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F727_6473(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F728_6473_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F728_6473(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F729_6473_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F729_6473(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F730_6473_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F730_6473(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F731_6473_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F731_6473(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F732_6473_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F732_6473(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F733_6473_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F733_6473(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F734_6473_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F734_6473(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F735_6473_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F735_6473(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F736_6473_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F736_6473(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F737_6473_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F737_6473(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F738_6473_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F738_6473(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F739_6473_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F739_6473(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F744_6524_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F744_6524(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F749_6524_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F749_6524(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F817_6884_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F817_6884(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F818_6884_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F818_6884(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F819_6884_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F819_6884(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F820_6884_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F820_6884(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F821_6884_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F821_6884(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F822_6884_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F822_6884(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F823_6884_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F823_6884(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F824_6884_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F824_6884(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F825_6884_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F825_6884(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F826_6884_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F826_6884(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F827_6884_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F827_6884(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F828_6884_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F828_6884(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F829_6884_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F829_6884(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F830_6884_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F830_6884(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F831_6884_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F831_6884(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F834_6953_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F834_6953(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F836_6953_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F836_6953(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F837_6953_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F837_6953(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F1023_8738_5341_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F1023_8738(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R5342[352])();
void R5342_init () {
	R5342[0] = (char *(*)()) F724_6449_5342_30;
	R5342[1] = (char *(*)()) F725_6477_5342_30;
	R5342[2] = (char *(*)()) F726_6477_5342_30;
	R5342[3] = (char *(*)()) F727_6477_5342_30;
	R5342[4] = (char *(*)()) F728_6477_5342_30;
	R5342[5] = (char *(*)()) F729_6477_5342_30;
	R5342[6] = (char *(*)()) F730_6477_5342_30;
	R5342[7] = (char *(*)()) F731_6477_5342_30;
	R5342[8] = (char *(*)()) F732_6477_5342_30;
	R5342[9] = (char *(*)()) F733_6477_5342_30;
	R5342[10] = (char *(*)()) F734_6477_5342_30;
	R5342[11] = (char *(*)()) F735_6477_5342_30;
	R5342[12] = (char *(*)()) F736_6477_5342_30;
	R5342[13] = (char *(*)()) F737_6477_5342_30;
	R5342[14] = (char *(*)()) F738_6477_5342_30;
	R5342[15] = (char *(*)()) F739_6477_5342_30;
	R5342[16] = (char *(*)()) F725_6477_5342_30;
	R5342[17] = (char *(*)()) F733_6477_5342_30;
	R5342[18] = (char *(*)()) F730_6477_5342_30;
	R5342[19] = (char *(*)()) F738_6477_5342_30;
	R5342[80] = (char *(*)()) F744_6530_5342_30;
	R5342[81] = (char *(*)()) F749_6530_5342_30;
	R5342[93] = (char *(*)()) F817_6896_5342_30;
	R5342[94] = (char *(*)()) F818_6896_5342_30;
	R5342[95] = (char *(*)()) F819_6896_5342_30;
	R5342[96] = (char *(*)()) F820_6896_5342_30;
	R5342[97] = (char *(*)()) F821_6896_5342_30;
	R5342[98] = (char *(*)()) F822_6896_5342_30;
	R5342[99] = (char *(*)()) F823_6896_5342_30;
	R5342[100] = (char *(*)()) F824_6896_5342_30;
	R5342[101] = (char *(*)()) F825_6896_5342_30;
	R5342[102] = (char *(*)()) F826_6896_5342_30;
	R5342[103] = (char *(*)()) F827_6896_5342_30;
	R5342[104] = (char *(*)()) F828_6896_5342_30;
	R5342[105] = (char *(*)()) F829_6896_5342_30;
	R5342[106] = (char *(*)()) F830_6896_5342_30;
	R5342[107] = (char *(*)()) F831_6896_5342_30;
	R5342[108] = (char *(*)()) F817_6896_5342_30;
	R5342[109] = (char *(*)()) F833_6991;
	R5342[110] = (char *(*)()) F834_6991_5342_30;
	R5342[111] = (char *(*)()) F835_6991_5342_30;
	R5342[112] = (char *(*)()) F836_6991_5342_30;
	{long i; for (i = 113; i < 115; i++) R5342[i] = (char *(*)()) F837_6991_5342_30;}
	{long i; for (i = 115; i < 117; i++) R5342[i] = (char *(*)()) F833_6991;}
	R5342[117] = (char *(*)()) F835_6991_5342_30;
	{long i; for (i = 304; i < 306; i++) R5342[i] = (char *(*)()) F1028_8956_5342_30;}
	R5342[308] = (char *(*)()) F1032_9124_5342_30;
	{long i; for (i = 350; i < 352; i++) R5342[i] = (char *(*)()) F1074_10378_5342_30;}
}
static void F724_6449_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F724_6449(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F725_6477_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F725_6477(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F726_6477_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F726_6477(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F727_6477_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F727_6477(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F728_6477_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F728_6477(Current, *(EIF_INTEGER_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F729_6477_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F729_6477(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F730_6477_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F730_6477(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F731_6477_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F731_6477(Current, *(EIF_NATURAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F732_6477_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F732_6477(Current, *(EIF_NATURAL_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F733_6477_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F733_6477(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F734_6477_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F734_6477(Current, *(EIF_POINTER *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F735_6477_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F735_6477(Current, *(EIF_REAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F736_6477_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F736_6477(Current, *(EIF_REAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F737_6477_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F737_6477(Current, *(EIF_INTEGER_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F738_6477_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F738_6477(Current, *(EIF_INTEGER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F739_6477_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F739_6477(Current, *(EIF_NATURAL_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F744_6530_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F744_6530(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F749_6530_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F749_6530(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F817_6896_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F817_6896(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F818_6896_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F818_6896(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F819_6896_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F819_6896(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F820_6896_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F820_6896(Current, *(EIF_INTEGER_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F821_6896_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F821_6896(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F822_6896_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F822_6896(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F823_6896_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F823_6896(Current, *(EIF_NATURAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F824_6896_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F824_6896(Current, *(EIF_NATURAL_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F825_6896_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F825_6896(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F826_6896_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F826_6896(Current, *(EIF_POINTER *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F827_6896_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F827_6896(Current, *(EIF_REAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F828_6896_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F828_6896(Current, *(EIF_REAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F829_6896_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F829_6896(Current, *(EIF_INTEGER_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F830_6896_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F830_6896(Current, *(EIF_INTEGER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F831_6896_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F831_6896(Current, *(EIF_NATURAL_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F834_6991_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F834_6991(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F835_6991_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F835_6991(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F836_6991_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F836_6991(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F837_6991_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F837_6991(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_POINTER *)arg2);
}
static void F1028_8956_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F1028_8956(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F1032_9124_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F1032_9124(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F1074_10378_5342_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F1074_10378(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}

char *(*R5343[352])();
void R5343_init () {
	R5343[0] = (char *(*)()) F724_6449_5343_30;
	R5343[1] = (char *(*)()) F725_6477_5343_30;
	R5343[2] = (char *(*)()) F726_6477_5343_30;
	R5343[3] = (char *(*)()) F727_6477_5343_30;
	R5343[4] = (char *(*)()) F728_6477_5343_30;
	R5343[5] = (char *(*)()) F729_6477_5343_30;
	R5343[6] = (char *(*)()) F730_6477_5343_30;
	R5343[7] = (char *(*)()) F731_6477_5343_30;
	R5343[8] = (char *(*)()) F732_6477_5343_30;
	R5343[9] = (char *(*)()) F733_6477_5343_30;
	R5343[10] = (char *(*)()) F734_6477_5343_30;
	R5343[11] = (char *(*)()) F735_6477_5343_30;
	R5343[12] = (char *(*)()) F736_6477_5343_30;
	R5343[13] = (char *(*)()) F737_6477_5343_30;
	R5343[14] = (char *(*)()) F738_6477_5343_30;
	R5343[15] = (char *(*)()) F739_6477_5343_30;
	R5343[16] = (char *(*)()) F725_6477_5343_30;
	R5343[17] = (char *(*)()) F733_6477_5343_30;
	R5343[18] = (char *(*)()) F730_6477_5343_30;
	R5343[19] = (char *(*)()) F738_6477_5343_30;
	R5343[80] = (char *(*)()) F744_6530_5343_30;
	R5343[81] = (char *(*)()) F749_6530_5343_30;
	R5343[93] = (char *(*)()) F817_6896_5343_30;
	R5343[94] = (char *(*)()) F818_6896_5343_30;
	R5343[95] = (char *(*)()) F819_6896_5343_30;
	R5343[96] = (char *(*)()) F820_6896_5343_30;
	R5343[97] = (char *(*)()) F821_6896_5343_30;
	R5343[98] = (char *(*)()) F822_6896_5343_30;
	R5343[99] = (char *(*)()) F823_6896_5343_30;
	R5343[100] = (char *(*)()) F824_6896_5343_30;
	R5343[101] = (char *(*)()) F825_6896_5343_30;
	R5343[102] = (char *(*)()) F826_6896_5343_30;
	R5343[103] = (char *(*)()) F827_6896_5343_30;
	R5343[104] = (char *(*)()) F828_6896_5343_30;
	R5343[105] = (char *(*)()) F829_6896_5343_30;
	R5343[106] = (char *(*)()) F830_6896_5343_30;
	R5343[107] = (char *(*)()) F831_6896_5343_30;
	R5343[108] = (char *(*)()) F817_6896_5343_30;
	R5343[109] = (char *(*)()) F833_6992;
	R5343[110] = (char *(*)()) F834_6992_5343_30;
	R5343[111] = (char *(*)()) F835_6992_5343_30;
	R5343[112] = (char *(*)()) F836_6992_5343_30;
	{long i; for (i = 113; i < 115; i++) R5343[i] = (char *(*)()) F837_6992_5343_30;}
	{long i; for (i = 115; i < 117; i++) R5343[i] = (char *(*)()) F833_6992;}
	R5343[117] = (char *(*)()) F835_6992_5343_30;
	{long i; for (i = 304; i < 306; i++) R5343[i] = (char *(*)()) F1028_8956_5343_30;}
	R5343[308] = (char *(*)()) F1032_9124_5343_30;
	{long i; for (i = 350; i < 352; i++) R5343[i] = (char *(*)()) F1074_10378_5343_30;}
}
static void F724_6449_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F724_6449(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F725_6477_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F725_6477(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F726_6477_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F726_6477(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F727_6477_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F727_6477(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F728_6477_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F728_6477(Current, *(EIF_INTEGER_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F729_6477_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F729_6477(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F730_6477_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F730_6477(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F731_6477_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F731_6477(Current, *(EIF_NATURAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F732_6477_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F732_6477(Current, *(EIF_NATURAL_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F733_6477_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F733_6477(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F734_6477_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F734_6477(Current, *(EIF_POINTER *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F735_6477_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F735_6477(Current, *(EIF_REAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F736_6477_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F736_6477(Current, *(EIF_REAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F737_6477_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F737_6477(Current, *(EIF_INTEGER_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F738_6477_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F738_6477(Current, *(EIF_INTEGER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F739_6477_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F739_6477(Current, *(EIF_NATURAL_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F744_6530_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F744_6530(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F749_6530_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F749_6530(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F817_6896_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F817_6896(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F818_6896_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F818_6896(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F819_6896_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F819_6896(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F820_6896_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F820_6896(Current, *(EIF_INTEGER_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F821_6896_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F821_6896(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F822_6896_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F822_6896(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F823_6896_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F823_6896(Current, *(EIF_NATURAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F824_6896_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F824_6896(Current, *(EIF_NATURAL_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F825_6896_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F825_6896(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F826_6896_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F826_6896(Current, *(EIF_POINTER *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F827_6896_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F827_6896(Current, *(EIF_REAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F828_6896_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F828_6896(Current, *(EIF_REAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F829_6896_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F829_6896(Current, *(EIF_INTEGER_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F830_6896_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F830_6896(Current, *(EIF_INTEGER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F831_6896_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F831_6896(Current, *(EIF_NATURAL_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F834_6992_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F834_6992(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F835_6992_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F835_6992(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F836_6992_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F836_6992(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F837_6992_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F837_6992(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_POINTER *)arg2);
}
static void F1028_8956_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F1028_8956(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F1032_9124_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F1032_9124(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F1074_10378_5343_30 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F1074_10378(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}

static EIF_TYPE_INDEX Y5344_pgtype0[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype1[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype2[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype3[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype4[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype5[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype6[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype7[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype8[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype9[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype10[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype11[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype12[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype13[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype14[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype15[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype16[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype17[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype18[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype19[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype20[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype21[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype22[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype23[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype24[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype25[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype26[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype27[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype28[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype29[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype30[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype31[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype32[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype33[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype34[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype35[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype36[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype37[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype38[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype39[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype40[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype41[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype42[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype43[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype44[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype45[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype46[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype47[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype48[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype49[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype50[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype51[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype52[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype53[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype54[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype55[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype56[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype57[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype58[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype59[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype60[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype61[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype62[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype63[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype64[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype65[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype66[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype67[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype68[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype69[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype70[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype71[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype72[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype73[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype74[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype75[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype76[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype77[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype78[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype79[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype80[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype81[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype82[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype83[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype84[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype85[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype86[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype87[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype88[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype89[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype90[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype91[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype92[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype93[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype94[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype95[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype96[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype97[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype98[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype99[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype100[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype101[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype102[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype103[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype104[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype105[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype106[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype107[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype108[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype109[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype110[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype111[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype112[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype113[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype114[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype115[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype116[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype117[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype118[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype119[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype120[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype121[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype122[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype123[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype124[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype125[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype126[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype127[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype128[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype129[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype130[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype131[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype132[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype133[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype134[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype135[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype136[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype137[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype138[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype139[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype140[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype141[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype142[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype143[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype144[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype145[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype146[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype147[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype148[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype149[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype150[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype151[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype152[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype153[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype154[] = {1015,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype155[] = {0xFF01,1027,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype156[] = {0xFF01,1022,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype157[] = {0xFF01,1022,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype158[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype159[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype160[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype161[] = {949,0xFFFF};
static EIF_TYPE_INDEX Y5344_pgtype162[] = {949,0xFFFF};
EIF_TYPE_INDEX *Y5344_gen_type [551];
EIF_TYPE_INDEX Y5344 [551];
void Y5344_init (void)
{
	egc_routines_types [5344] = Y5344;
	egc_routines_gen_types [5344] = Y5344_gen_type;
	egc_routines_offset [5344] = 524;
	Y5344_gen_type [0] = Y5344_pgtype0;
	Y5344_gen_type [1] = Y5344_pgtype1;
	Y5344_gen_type [2] = Y5344_pgtype2;
	Y5344_gen_type [3] = Y5344_pgtype3;
	Y5344_gen_type [4] = Y5344_pgtype4;
	Y5344_gen_type [5] = Y5344_pgtype5;
	Y5344_gen_type [6] = Y5344_pgtype6;
	Y5344_gen_type [7] = Y5344_pgtype7;
	Y5344_gen_type [8] = Y5344_pgtype8;
	Y5344_gen_type [9] = Y5344_pgtype9;
	Y5344_gen_type [10] = Y5344_pgtype10;
	Y5344_gen_type [11] = Y5344_pgtype11;
	Y5344_gen_type [12] = Y5344_pgtype12;
	Y5344_gen_type [13] = Y5344_pgtype13;
	Y5344_gen_type [14] = Y5344_pgtype14;
	Y5344_gen_type [15] = Y5344_pgtype15;
	Y5344_gen_type [16] = Y5344_pgtype16;
	Y5344_gen_type [17] = Y5344_pgtype17;
	Y5344_gen_type [18] = Y5344_pgtype18;
	Y5344_gen_type [19] = Y5344_pgtype19;
	Y5344_gen_type [20] = Y5344_pgtype20;
	Y5344_gen_type [21] = Y5344_pgtype21;
	Y5344_gen_type [22] = Y5344_pgtype22;
	Y5344_gen_type [23] = Y5344_pgtype23;
	Y5344_gen_type [24] = Y5344_pgtype24;
	Y5344_gen_type [25] = Y5344_pgtype25;
	Y5344_gen_type [26] = Y5344_pgtype26;
	Y5344_gen_type [27] = Y5344_pgtype27;
	Y5344_gen_type [28] = Y5344_pgtype28;
	Y5344_gen_type [29] = Y5344_pgtype29;
	Y5344_gen_type [30] = Y5344_pgtype30;
	Y5344_gen_type [31] = Y5344_pgtype31;
	Y5344_gen_type [32] = Y5344_pgtype32;
	Y5344_gen_type [33] = Y5344_pgtype33;
	Y5344_gen_type [34] = Y5344_pgtype34;
	Y5344_gen_type [35] = Y5344_pgtype35;
	Y5344_gen_type [184] = Y5344_pgtype36;
	Y5344_gen_type [185] = Y5344_pgtype37;
	Y5344_gen_type [186] = Y5344_pgtype38;
	Y5344_gen_type [187] = Y5344_pgtype39;
	Y5344_gen_type [188] = Y5344_pgtype40;
	Y5344_gen_type [189] = Y5344_pgtype41;
	Y5344_gen_type [190] = Y5344_pgtype42;
	Y5344_gen_type [191] = Y5344_pgtype43;
	Y5344_gen_type [192] = Y5344_pgtype44;
	Y5344_gen_type [193] = Y5344_pgtype45;
	Y5344_gen_type [194] = Y5344_pgtype46;
	Y5344_gen_type [195] = Y5344_pgtype47;
	Y5344_gen_type [196] = Y5344_pgtype48;
	Y5344_gen_type [197] = Y5344_pgtype49;
	Y5344_gen_type [198] = Y5344_pgtype50;
	Y5344_gen_type [199] = Y5344_pgtype51;
	Y5344_gen_type [200] = Y5344_pgtype52;
	Y5344_gen_type [201] = Y5344_pgtype53;
	Y5344_gen_type [202] = Y5344_pgtype54;
	Y5344_gen_type [203] = Y5344_pgtype55;
	Y5344_gen_type [204] = Y5344_pgtype56;
	Y5344_gen_type [205] = Y5344_pgtype57;
	Y5344_gen_type [206] = Y5344_pgtype58;
	Y5344_gen_type [207] = Y5344_pgtype59;
	Y5344_gen_type [208] = Y5344_pgtype60;
	Y5344_gen_type [209] = Y5344_pgtype61;
	Y5344_gen_type [210] = Y5344_pgtype62;
	Y5344_gen_type [211] = Y5344_pgtype63;
	Y5344_gen_type [212] = Y5344_pgtype64;
	Y5344_gen_type [213] = Y5344_pgtype65;
	Y5344_gen_type [214] = Y5344_pgtype66;
	Y5344_gen_type [215] = Y5344_pgtype67;
	Y5344_gen_type [216] = Y5344_pgtype68;
	Y5344_gen_type [217] = Y5344_pgtype69;
	Y5344_gen_type [218] = Y5344_pgtype70;
	Y5344_gen_type [219] = Y5344_pgtype71;
	Y5344_gen_type [220] = Y5344_pgtype72;
	Y5344_gen_type [221] = Y5344_pgtype73;
	Y5344_gen_type [222] = Y5344_pgtype74;
	Y5344_gen_type [223] = Y5344_pgtype75;
	Y5344_gen_type [224] = Y5344_pgtype76;
	Y5344_gen_type [225] = Y5344_pgtype77;
	Y5344_gen_type [226] = Y5344_pgtype78;
	Y5344_gen_type [227] = Y5344_pgtype79;
	Y5344_gen_type [228] = Y5344_pgtype80;
	Y5344_gen_type [229] = Y5344_pgtype81;
	Y5344_gen_type [230] = Y5344_pgtype82;
	Y5344_gen_type [231] = Y5344_pgtype83;
	Y5344_gen_type [232] = Y5344_pgtype84;
	Y5344_gen_type [233] = Y5344_pgtype85;
	Y5344_gen_type [234] = Y5344_pgtype86;
	Y5344_gen_type [235] = Y5344_pgtype87;
	Y5344_gen_type [236] = Y5344_pgtype88;
	Y5344_gen_type [237] = Y5344_pgtype89;
	Y5344_gen_type [238] = Y5344_pgtype90;
	Y5344_gen_type [239] = Y5344_pgtype91;
	Y5344_gen_type [240] = Y5344_pgtype92;
	Y5344_gen_type [241] = Y5344_pgtype93;
	Y5344_gen_type [242] = Y5344_pgtype94;
	Y5344_gen_type [243] = Y5344_pgtype95;
	Y5344_gen_type [244] = Y5344_pgtype96;
	Y5344_gen_type [245] = Y5344_pgtype97;
	Y5344_gen_type [246] = Y5344_pgtype98;
	Y5344_gen_type [247] = Y5344_pgtype99;
	Y5344_gen_type [248] = Y5344_pgtype100;
	Y5344_gen_type [249] = Y5344_pgtype101;
	Y5344_gen_type [250] = Y5344_pgtype102;
	Y5344_gen_type [251] = Y5344_pgtype103;
	Y5344_gen_type [252] = Y5344_pgtype104;
	Y5344_gen_type [253] = Y5344_pgtype105;
	Y5344_gen_type [254] = Y5344_pgtype106;
	Y5344_gen_type [255] = Y5344_pgtype107;
	Y5344_gen_type [256] = Y5344_pgtype108;
	Y5344_gen_type [257] = Y5344_pgtype109;
	Y5344_gen_type [258] = Y5344_pgtype110;
	Y5344_gen_type [259] = Y5344_pgtype111;
	Y5344_gen_type [260] = Y5344_pgtype112;
	Y5344_gen_type [261] = Y5344_pgtype113;
	Y5344_gen_type [262] = Y5344_pgtype114;
	Y5344_gen_type [263] = Y5344_pgtype115;
	Y5344_gen_type [264] = Y5344_pgtype116;
	Y5344_gen_type [265] = Y5344_pgtype117;
	Y5344_gen_type [266] = Y5344_pgtype118;
	Y5344_gen_type [267] = Y5344_pgtype119;
	Y5344_gen_type [268] = Y5344_pgtype120;
	Y5344_gen_type [269] = Y5344_pgtype121;
	Y5344_gen_type [270] = Y5344_pgtype122;
	Y5344_gen_type [271] = Y5344_pgtype123;
	Y5344_gen_type [272] = Y5344_pgtype124;
	Y5344_gen_type [273] = Y5344_pgtype125;
	Y5344_gen_type [274] = Y5344_pgtype126;
	Y5344_gen_type [275] = Y5344_pgtype127;
	Y5344_gen_type [276] = Y5344_pgtype128;
	Y5344_gen_type [277] = Y5344_pgtype129;
	Y5344_gen_type [278] = Y5344_pgtype130;
	Y5344_gen_type [279] = Y5344_pgtype131;
	Y5344_gen_type [280] = Y5344_pgtype132;
	Y5344_gen_type [292] = Y5344_pgtype133;
	Y5344_gen_type [293] = Y5344_pgtype134;
	Y5344_gen_type [294] = Y5344_pgtype135;
	Y5344_gen_type [295] = Y5344_pgtype136;
	Y5344_gen_type [296] = Y5344_pgtype137;
	Y5344_gen_type [297] = Y5344_pgtype138;
	Y5344_gen_type [298] = Y5344_pgtype139;
	Y5344_gen_type [299] = Y5344_pgtype140;
	Y5344_gen_type [300] = Y5344_pgtype141;
	Y5344_gen_type [301] = Y5344_pgtype142;
	Y5344_gen_type [302] = Y5344_pgtype143;
	Y5344_gen_type [303] = Y5344_pgtype144;
	Y5344_gen_type [304] = Y5344_pgtype145;
	Y5344_gen_type [305] = Y5344_pgtype146;
	Y5344_gen_type [306] = Y5344_pgtype147;
	Y5344_gen_type [307] = Y5344_pgtype148;
	Y5344_gen_type [308] = Y5344_pgtype149;
	Y5344_gen_type [309] = Y5344_pgtype150;
	Y5344_gen_type [310] = Y5344_pgtype151;
	Y5344_gen_type [311] = Y5344_pgtype152;
	Y5344_gen_type [312] = Y5344_pgtype153;
	Y5344_gen_type [313] = Y5344_pgtype154;
	Y5344_gen_type [314] = Y5344_pgtype155;
	Y5344_gen_type [315] = Y5344_pgtype156;
	Y5344_gen_type [316] = Y5344_pgtype157;
	Y5344_gen_type [503] = Y5344_pgtype158;
	Y5344_gen_type [504] = Y5344_pgtype159;
	Y5344_gen_type [507] = Y5344_pgtype160;
	Y5344_gen_type [549] = Y5344_pgtype161;
	Y5344_gen_type [550] = Y5344_pgtype162;
	{long i; for (i = 184; i < 281; i++) Y5344[i] = 949;};
	{long i; for (i = 292; i < 308; i++) Y5344[i] = 949;};
	Y5344[313] = 1015;
	Y5344[314] = 1027;
	{long i; for (i = 315; i < 317; i++) Y5344[i] = 1022;};
	{long i; for (i = 503; i < 505; i++) Y5344[i] = 949;};
	Y5344[507] = 949;
	{long i; for (i = 549; i < 551; i++) Y5344[i] = 949;};
}

char *(*R5345[272])();
void R5345_init () {
	R5345[0] = (char *(*)()) F759_6546_5345_4;
	R5345[1] = (char *(*)()) F764_6546_5345_4;
	R5345[13] = (char *(*)()) F817_6912_5345_4;
	R5345[14] = (char *(*)()) F818_6912_5345_4;
	R5345[15] = (char *(*)()) F819_6912_5345_4;
	R5345[16] = (char *(*)()) F820_6912_5345_4;
	R5345[17] = (char *(*)()) F821_6912_5345_4;
	R5345[18] = (char *(*)()) F822_6912_5345_4;
	R5345[19] = (char *(*)()) F823_6912_5345_4;
	R5345[20] = (char *(*)()) F824_6912_5345_4;
	R5345[21] = (char *(*)()) F825_6912_5345_4;
	R5345[22] = (char *(*)()) F826_6912_5345_4;
	R5345[23] = (char *(*)()) F827_6912_5345_4;
	R5345[24] = (char *(*)()) F828_6912_5345_4;
	R5345[25] = (char *(*)()) F829_6912_5345_4;
	R5345[26] = (char *(*)()) F830_6912_5345_4;
	R5345[27] = (char *(*)()) F831_6912_5345_4;
	R5345[28] = (char *(*)()) F817_6912_5345_4;
	R5345[29] = (char *(*)()) F833_6997;
	R5345[30] = (char *(*)()) F834_6997_5345_4;
	R5345[31] = (char *(*)()) F835_6997;
	R5345[32] = (char *(*)()) F836_6997_5345_4;
	{long i; for (i = 33; i < 35; i++) R5345[i] = (char *(*)()) F837_6997_5345_4;}
	{long i; for (i = 35; i < 37; i++) R5345[i] = (char *(*)()) F833_6997;}
	R5345[37] = (char *(*)()) F835_6997;
	{long i; for (i = 224; i < 226; i++) R5345[i] = (char *(*)()) F1028_8990_5345_4;}
	R5345[228] = (char *(*)()) F1032_9158_5345_4;
	{long i; for (i = 270; i < 272; i++) R5345[i] = (char *(*)()) F1074_10409_5345_4;}
}
static void F759_6546_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F759_6546(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F764_6546_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F764_6546(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F817_6912_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F817_6912(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F818_6912_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F818_6912(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F819_6912_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F819_6912(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F820_6912_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F820_6912(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F821_6912_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F821_6912(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F822_6912_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F822_6912(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F823_6912_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F823_6912(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F824_6912_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F824_6912(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F825_6912_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F825_6912(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F826_6912_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F826_6912(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F827_6912_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F827_6912(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F828_6912_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F828_6912(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F829_6912_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F829_6912(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F830_6912_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F830_6912(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F831_6912_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F831_6912(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F834_6997_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F834_6997(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F836_6997_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F836_6997(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F837_6997_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F837_6997(Current, *(EIF_POINTER *)arg1);
}
static void F1028_8990_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1028_8990(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F1032_9158_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1032_9158(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F1074_10409_5345_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1074_10409(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R5346[435])();
void R5346_init () {
	R5346[0] = (char *(*)()) F610_5948_5346_1;
	{long i; for (i = 80; i < 83; i++) R5346[i] = (char *(*)()) F690_6042_5346_1;}
	R5346[193] = (char *(*)()) F804_6564;
	R5346[194] = (char *(*)()) F805_6564_5346_1;
	R5346[201] = (char *(*)()) F812_6755;
	R5346[206] = (char *(*)()) F817_6862;
	R5346[207] = (char *(*)()) F818_6862_5346_1;
	R5346[208] = (char *(*)()) F819_6862_5346_1;
	R5346[209] = (char *(*)()) F820_6862_5346_1;
	R5346[210] = (char *(*)()) F821_6862_5346_1;
	R5346[211] = (char *(*)()) F822_6862_5346_1;
	R5346[212] = (char *(*)()) F823_6862_5346_1;
	R5346[213] = (char *(*)()) F824_6862_5346_1;
	R5346[214] = (char *(*)()) F825_6862_5346_1;
	R5346[215] = (char *(*)()) F826_6862_5346_1;
	R5346[216] = (char *(*)()) F827_6862_5346_1;
	R5346[217] = (char *(*)()) F828_6862_5346_1;
	R5346[218] = (char *(*)()) F829_6862_5346_1;
	R5346[219] = (char *(*)()) F830_6862_5346_1;
	R5346[220] = (char *(*)()) F831_6862_5346_1;
	R5346[221] = (char *(*)()) F817_6862;
	R5346[434] = (char *(*)()) F690_6042_5346_1;
}
static EIF_REFERENCE F610_5948_5346_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F610_5948(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F690_6042_5346_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F690_6042(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(976, 0x00).id, 976, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F805_6564_5346_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F805_6564(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F818_6862_5346_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F818_6862(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(973, 0x00).id, 973, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F819_6862_5346_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F819_6862(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(976, 0x00).id, 976, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F820_6862_5346_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F820_6862(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(946, 0x00).id, 946, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F821_6862_5346_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F821_6862(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(961, 0x00).id, 961, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F822_6862_5346_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F822_6862(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F823_6862_5346_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F823_6862(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F824_6862_5346_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F824_6862(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(964, 0x00).id, 964, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F825_6862_5346_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F825_6862(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(979, 0x00).id, 979, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F826_6862_5346_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F826_6862(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(1015, 0x00).id, 1015, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F827_6862_5346_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F827_6862(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(967, 0x00).id, 967, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F828_6862_5346_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F828_6862(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(970, 0x00).id, 970, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F829_6862_5346_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F829_6862(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(952, 0x00).id, 952, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F830_6862_5346_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F830_6862(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(955, 0x00).id, 955, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F831_6862_5346_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F831_6862(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(982, 0x00).id, 982, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}

static EIF_TYPE_INDEX Y5346_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype1[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype2[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype3[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype4[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype5[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype6[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype7[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype8[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype9[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype10[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype11[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype12[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype13[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype14[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype15[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype16[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype17[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype18[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype19[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype20[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype21[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype22[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype23[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype24[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype25[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype26[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype27[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype28[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype29[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype30[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype31[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype32[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype33[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype34[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype35[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype36[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype37[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype38[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype39[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype40[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype41[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype42[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype43[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype44[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype45[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype46[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype47[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype48[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype49[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype50[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype51[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype52[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype53[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype54[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype55[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype56[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype57[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype58[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype59[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype60[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype61[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype62[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype63[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype64[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype65[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype66[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype67[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype68[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype69[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype70[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype71[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype72[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype73[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype74[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype75[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype76[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype77[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype78[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype79[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype80[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype81[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype82[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype83[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype84[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype85[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype86[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype87[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype88[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype89[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype90[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype91[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype92[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype93[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype94[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype95[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype96[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype97[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype98[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype99[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype100[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype101[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype102[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype103[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype104[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype105[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype106[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype107[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype108[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype109[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype110[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype111[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype112[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype113[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype114[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype115[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype116[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype117[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype118[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype119[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype120[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype121[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype122[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype123[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype124[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype125[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype126[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5346_pgtype127[] = {0xFFF8,1,0xFFFF};
EIF_TYPE_INDEX *Y5346_gen_type [485];
EIF_TYPE_INDEX Y5346 [485];
void Y5346_init (void)
{
	egc_routines_types [5346] = Y5346;
	egc_routines_gen_types [5346] = Y5346_gen_type;
	egc_routines_offset [5346] = 560;
	Y5346_gen_type [0] = Y5346_pgtype0;
	Y5346_gen_type [1] = Y5346_pgtype1;
	Y5346_gen_type [2] = Y5346_pgtype2;
	Y5346_gen_type [3] = Y5346_pgtype3;
	Y5346_gen_type [4] = Y5346_pgtype4;
	Y5346_gen_type [5] = Y5346_pgtype5;
	Y5346_gen_type [6] = Y5346_pgtype6;
	Y5346_gen_type [7] = Y5346_pgtype7;
	Y5346_gen_type [8] = Y5346_pgtype8;
	Y5346_gen_type [9] = Y5346_pgtype9;
	Y5346_gen_type [10] = Y5346_pgtype10;
	Y5346_gen_type [11] = Y5346_pgtype11;
	Y5346_gen_type [12] = Y5346_pgtype12;
	Y5346_gen_type [13] = Y5346_pgtype13;
	Y5346_gen_type [14] = Y5346_pgtype14;
	Y5346_gen_type [15] = Y5346_pgtype15;
	Y5346_gen_type [16] = Y5346_pgtype16;
	Y5346_gen_type [17] = Y5346_pgtype17;
	Y5346_gen_type [18] = Y5346_pgtype18;
	Y5346_gen_type [19] = Y5346_pgtype19;
	Y5346_gen_type [20] = Y5346_pgtype20;
	Y5346_gen_type [21] = Y5346_pgtype21;
	Y5346_gen_type [22] = Y5346_pgtype22;
	Y5346_gen_type [23] = Y5346_pgtype23;
	Y5346_gen_type [24] = Y5346_pgtype24;
	Y5346_gen_type [25] = Y5346_pgtype25;
	Y5346_gen_type [26] = Y5346_pgtype26;
	Y5346_gen_type [27] = Y5346_pgtype27;
	Y5346_gen_type [28] = Y5346_pgtype28;
	Y5346_gen_type [29] = Y5346_pgtype29;
	Y5346_gen_type [49] = Y5346_pgtype30;
	Y5346_gen_type [96] = Y5346_pgtype31;
	Y5346_gen_type [97] = Y5346_pgtype32;
	Y5346_gen_type [98] = Y5346_pgtype33;
	Y5346_gen_type [99] = Y5346_pgtype34;
	Y5346_gen_type [100] = Y5346_pgtype35;
	Y5346_gen_type [101] = Y5346_pgtype36;
	Y5346_gen_type [102] = Y5346_pgtype37;
	Y5346_gen_type [103] = Y5346_pgtype38;
	Y5346_gen_type [104] = Y5346_pgtype39;
	Y5346_gen_type [105] = Y5346_pgtype40;
	Y5346_gen_type [106] = Y5346_pgtype41;
	Y5346_gen_type [107] = Y5346_pgtype42;
	Y5346_gen_type [108] = Y5346_pgtype43;
	Y5346_gen_type [109] = Y5346_pgtype44;
	Y5346_gen_type [110] = Y5346_pgtype45;
	Y5346_gen_type [111] = Y5346_pgtype46;
	Y5346_gen_type [112] = Y5346_pgtype47;
	Y5346_gen_type [113] = Y5346_pgtype48;
	Y5346_gen_type [183] = Y5346_pgtype49;
	Y5346_gen_type [184] = Y5346_pgtype50;
	Y5346_gen_type [185] = Y5346_pgtype51;
	Y5346_gen_type [186] = Y5346_pgtype52;
	Y5346_gen_type [187] = Y5346_pgtype53;
	Y5346_gen_type [188] = Y5346_pgtype54;
	Y5346_gen_type [189] = Y5346_pgtype55;
	Y5346_gen_type [190] = Y5346_pgtype56;
	Y5346_gen_type [191] = Y5346_pgtype57;
	Y5346_gen_type [192] = Y5346_pgtype58;
	Y5346_gen_type [193] = Y5346_pgtype59;
	Y5346_gen_type [194] = Y5346_pgtype60;
	Y5346_gen_type [195] = Y5346_pgtype61;
	Y5346_gen_type [196] = Y5346_pgtype62;
	Y5346_gen_type [197] = Y5346_pgtype63;
	Y5346_gen_type [198] = Y5346_pgtype64;
	Y5346_gen_type [199] = Y5346_pgtype65;
	Y5346_gen_type [200] = Y5346_pgtype66;
	Y5346_gen_type [201] = Y5346_pgtype67;
	Y5346_gen_type [202] = Y5346_pgtype68;
	Y5346_gen_type [203] = Y5346_pgtype69;
	Y5346_gen_type [204] = Y5346_pgtype70;
	Y5346_gen_type [205] = Y5346_pgtype71;
	Y5346_gen_type [206] = Y5346_pgtype72;
	Y5346_gen_type [207] = Y5346_pgtype73;
	Y5346_gen_type [208] = Y5346_pgtype74;
	Y5346_gen_type [209] = Y5346_pgtype75;
	Y5346_gen_type [210] = Y5346_pgtype76;
	Y5346_gen_type [211] = Y5346_pgtype77;
	Y5346_gen_type [212] = Y5346_pgtype78;
	Y5346_gen_type [213] = Y5346_pgtype79;
	Y5346_gen_type [214] = Y5346_pgtype80;
	Y5346_gen_type [215] = Y5346_pgtype81;
	Y5346_gen_type [216] = Y5346_pgtype82;
	Y5346_gen_type [217] = Y5346_pgtype83;
	Y5346_gen_type [218] = Y5346_pgtype84;
	Y5346_gen_type [219] = Y5346_pgtype85;
	Y5346_gen_type [220] = Y5346_pgtype86;
	Y5346_gen_type [221] = Y5346_pgtype87;
	Y5346_gen_type [222] = Y5346_pgtype88;
	Y5346_gen_type [223] = Y5346_pgtype89;
	Y5346_gen_type [224] = Y5346_pgtype90;
	Y5346_gen_type [225] = Y5346_pgtype91;
	Y5346_gen_type [226] = Y5346_pgtype92;
	Y5346_gen_type [227] = Y5346_pgtype93;
	Y5346_gen_type [228] = Y5346_pgtype94;
	Y5346_gen_type [229] = Y5346_pgtype95;
	Y5346_gen_type [230] = Y5346_pgtype96;
	Y5346_gen_type [231] = Y5346_pgtype97;
	Y5346_gen_type [232] = Y5346_pgtype98;
	Y5346_gen_type [233] = Y5346_pgtype99;
	Y5346_gen_type [234] = Y5346_pgtype100;
	Y5346_gen_type [235] = Y5346_pgtype101;
	Y5346_gen_type [236] = Y5346_pgtype102;
	Y5346_gen_type [237] = Y5346_pgtype103;
	Y5346_gen_type [238] = Y5346_pgtype104;
	Y5346_gen_type [239] = Y5346_pgtype105;
	Y5346_gen_type [240] = Y5346_pgtype106;
	Y5346_gen_type [241] = Y5346_pgtype107;
	Y5346_gen_type [242] = Y5346_pgtype108;
	Y5346_gen_type [243] = Y5346_pgtype109;
	Y5346_gen_type [244] = Y5346_pgtype110;
	Y5346_gen_type [251] = Y5346_pgtype111;
	Y5346_gen_type [256] = Y5346_pgtype112;
	Y5346_gen_type [257] = Y5346_pgtype113;
	Y5346_gen_type [258] = Y5346_pgtype114;
	Y5346_gen_type [259] = Y5346_pgtype115;
	Y5346_gen_type [260] = Y5346_pgtype116;
	Y5346_gen_type [261] = Y5346_pgtype117;
	Y5346_gen_type [262] = Y5346_pgtype118;
	Y5346_gen_type [263] = Y5346_pgtype119;
	Y5346_gen_type [264] = Y5346_pgtype120;
	Y5346_gen_type [265] = Y5346_pgtype121;
	Y5346_gen_type [266] = Y5346_pgtype122;
	Y5346_gen_type [267] = Y5346_pgtype123;
	Y5346_gen_type [268] = Y5346_pgtype124;
	Y5346_gen_type [269] = Y5346_pgtype125;
	Y5346_gen_type [270] = Y5346_pgtype126;
	Y5346_gen_type [271] = Y5346_pgtype127;
	Y5346[50] = 949;
	{long i; for (i = 129; i < 133; i++) Y5346[i] = 976;};
	Y5346[484] = 976;
}

char *(*R5347[435])();
void R5347_init () {
	R5347[0] = (char *(*)()) F610_5952;
	{long i; for (i = 80; i < 82; i++) R5347[i] = (char *(*)()) F662_6022;}
	R5347[82] = (char *(*)()) F693_6387;
	R5347[193] = (char *(*)()) F804_6572;
	R5347[194] = (char *(*)()) F805_6572;
	R5347[201] = (char *(*)()) F657_6010;
	R5347[206] = (char *(*)()) F660_6022;
	R5347[207] = (char *(*)()) F661_6022;
	R5347[208] = (char *(*)()) F662_6022;
	R5347[209] = (char *(*)()) F663_6022;
	R5347[210] = (char *(*)()) F664_6022;
	R5347[211] = (char *(*)()) F665_6022;
	R5347[212] = (char *(*)()) F666_6022;
	R5347[213] = (char *(*)()) F667_6022;
	R5347[214] = (char *(*)()) F668_6022;
	R5347[215] = (char *(*)()) F669_6022;
	R5347[216] = (char *(*)()) F670_6022;
	R5347[217] = (char *(*)()) F671_6022;
	R5347[218] = (char *(*)()) F672_6022;
	R5347[219] = (char *(*)()) F673_6022;
	R5347[220] = (char *(*)()) F674_6022;
	R5347[221] = (char *(*)()) F657_6010;
	R5347[434] = (char *(*)()) F662_6022;
}

char *(*R5348[435])();
void R5348_init () {
	R5348[0] = (char *(*)()) F610_5953;
	{long i; for (i = 80; i < 83; i++) R5348[i] = (char *(*)()) F662_6023;}
	R5348[193] = (char *(*)()) F660_6023;
	R5348[194] = (char *(*)()) F665_6023;
	R5348[201] = (char *(*)()) F657_6011;
	R5348[206] = (char *(*)()) F660_6023;
	R5348[207] = (char *(*)()) F661_6023;
	R5348[208] = (char *(*)()) F662_6023;
	R5348[209] = (char *(*)()) F663_6023;
	R5348[210] = (char *(*)()) F664_6023;
	R5348[211] = (char *(*)()) F665_6023;
	R5348[212] = (char *(*)()) F666_6023;
	R5348[213] = (char *(*)()) F667_6023;
	R5348[214] = (char *(*)()) F668_6023;
	R5348[215] = (char *(*)()) F669_6023;
	R5348[216] = (char *(*)()) F670_6023;
	R5348[217] = (char *(*)()) F671_6023;
	R5348[218] = (char *(*)()) F672_6023;
	R5348[219] = (char *(*)()) F673_6023;
	R5348[220] = (char *(*)()) F674_6023;
	R5348[221] = (char *(*)()) F657_6011;
	R5348[434] = (char *(*)()) F662_6023;
}

char *(*R5349[435])();
void R5349_init () {
	R5349[0] = (char *(*)()) F610_5954;
	{long i; for (i = 80; i < 83; i++) R5349[i] = (char *(*)()) F690_6095;}
	R5349[193] = (char *(*)()) F561_5900;
	R5349[194] = (char *(*)()) F566_5900;
	R5349[201] = (char *(*)()) F561_5900;
	R5349[206] = (char *(*)()) F561_5900;
	R5349[207] = (char *(*)()) F562_5900;
	R5349[208] = (char *(*)()) F563_5900;
	R5349[209] = (char *(*)()) F564_5900;
	R5349[210] = (char *(*)()) F565_5900;
	R5349[211] = (char *(*)()) F566_5900;
	R5349[212] = (char *(*)()) F567_5900;
	R5349[213] = (char *(*)()) F568_5900;
	R5349[214] = (char *(*)()) F569_5900;
	R5349[215] = (char *(*)()) F570_5900;
	R5349[216] = (char *(*)()) F571_5900;
	R5349[217] = (char *(*)()) F572_5900;
	R5349[218] = (char *(*)()) F573_5900;
	R5349[219] = (char *(*)()) F574_5900;
	R5349[220] = (char *(*)()) F575_5900;
	R5349[221] = (char *(*)()) F561_5900;
	R5349[434] = (char *(*)()) F690_6095;
}

char *(*R5350[435])();
void R5350_init () {
	R5350[0] = (char *(*)()) F610_5963_5350_4;
	{long i; for (i = 80; i < 83; i++) R5350[i] = (char *(*)()) F690_6246_5350_4;}
	R5350[193] = (char *(*)()) F804_6592;
	R5350[194] = (char *(*)()) F805_6592_5350_4;
	R5350[201] = (char *(*)()) F812_6770;
	R5350[206] = (char *(*)()) F817_6901;
	R5350[207] = (char *(*)()) F818_6901_5350_4;
	R5350[208] = (char *(*)()) F819_6901_5350_4;
	R5350[209] = (char *(*)()) F820_6901_5350_4;
	R5350[210] = (char *(*)()) F821_6901_5350_4;
	R5350[211] = (char *(*)()) F822_6901_5350_4;
	R5350[212] = (char *(*)()) F823_6901_5350_4;
	R5350[213] = (char *(*)()) F824_6901_5350_4;
	R5350[214] = (char *(*)()) F825_6901_5350_4;
	R5350[215] = (char *(*)()) F826_6901_5350_4;
	R5350[216] = (char *(*)()) F827_6901_5350_4;
	R5350[217] = (char *(*)()) F828_6901_5350_4;
	R5350[218] = (char *(*)()) F829_6901_5350_4;
	R5350[219] = (char *(*)()) F830_6901_5350_4;
	R5350[220] = (char *(*)()) F831_6901_5350_4;
	R5350[221] = (char *(*)()) F817_6901;
	R5350[434] = (char *(*)()) F690_6246_5350_4;
}
static void F610_5963_5350_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F610_5963(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F690_6246_5350_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F690_6246(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F805_6592_5350_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F805_6592(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F818_6901_5350_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F818_6901(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F819_6901_5350_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F819_6901(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F820_6901_5350_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F820_6901(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F821_6901_5350_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F821_6901(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F822_6901_5350_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F822_6901(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F823_6901_5350_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F823_6901(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F824_6901_5350_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F824_6901(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F825_6901_5350_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F825_6901(Current, *(EIF_BOOLEAN *)arg1);
}
static void F826_6901_5350_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F826_6901(Current, *(EIF_POINTER *)arg1);
}
static void F827_6901_5350_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F827_6901(Current, *(EIF_REAL_32 *)arg1);
}
static void F828_6901_5350_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F828_6901(Current, *(EIF_REAL_64 *)arg1);
}
static void F829_6901_5350_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F829_6901(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F830_6901_5350_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F830_6901(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F831_6901_5350_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F831_6901(Current, *(EIF_NATURAL_16 *)arg1);
}

char *(*R5351[435])();
void R5351_init () {
	R5351[0] = (char *(*)()) F610_5962;
	{long i; for (i = 80; i < 83; i++) R5351[i] = (char *(*)()) F690_6247;}
	R5351[193] = (char *(*)()) F804_6595;
	R5351[194] = (char *(*)()) F805_6595;
	R5351[201] = (char *(*)()) F812_6772;
	R5351[206] = (char *(*)()) F817_6911;
	R5351[207] = (char *(*)()) F818_6911;
	R5351[208] = (char *(*)()) F819_6911;
	R5351[209] = (char *(*)()) F820_6911;
	R5351[210] = (char *(*)()) F821_6911;
	R5351[211] = (char *(*)()) F822_6911;
	R5351[212] = (char *(*)()) F823_6911;
	R5351[213] = (char *(*)()) F824_6911;
	R5351[214] = (char *(*)()) F825_6911;
	R5351[215] = (char *(*)()) F826_6911;
	R5351[216] = (char *(*)()) F827_6911;
	R5351[217] = (char *(*)()) F828_6911;
	R5351[218] = (char *(*)()) F829_6911;
	R5351[219] = (char *(*)()) F830_6911;
	R5351[220] = (char *(*)()) F831_6911;
	R5351[221] = (char *(*)()) F832_6937;
	R5351[434] = (char *(*)()) F690_6247;
}

char *(*R5352[29])();
void R5352_init () {
	R5352[0] = (char *(*)()) F804_6568;
	R5352[1] = (char *(*)()) F805_6568;
	R5352[13] = (char *(*)()) F817_6868;
	R5352[14] = (char *(*)()) F818_6868;
	R5352[15] = (char *(*)()) F819_6868;
	R5352[16] = (char *(*)()) F820_6868;
	R5352[17] = (char *(*)()) F821_6868;
	R5352[18] = (char *(*)()) F822_6868;
	R5352[19] = (char *(*)()) F823_6868;
	R5352[20] = (char *(*)()) F824_6868;
	R5352[21] = (char *(*)()) F825_6868;
	R5352[22] = (char *(*)()) F826_6868;
	R5352[23] = (char *(*)()) F827_6868;
	R5352[24] = (char *(*)()) F828_6868;
	R5352[25] = (char *(*)()) F829_6868;
	R5352[26] = (char *(*)()) F830_6868;
	R5352[27] = (char *(*)()) F831_6868;
	R5352[28] = (char *(*)()) F817_6868;
}

static EIF_TYPE_INDEX Y5352_pgtype0[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype1[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype2[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype3[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype4[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype5[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype6[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype7[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype8[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype9[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype10[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype11[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype12[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype13[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype14[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype15[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype16[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype17[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype18[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype19[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype20[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype21[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype22[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype23[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype24[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype25[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype26[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype27[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype28[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype29[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype30[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype31[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype32[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype33[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype34[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype35[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype36[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype37[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype38[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype39[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype40[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype41[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype42[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype43[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype44[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype45[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype46[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype47[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype48[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype49[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype50[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype51[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype52[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype53[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype54[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype55[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype56[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype57[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype58[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype59[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype60[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype61[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype62[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype63[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype64[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype65[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype66[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype67[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype68[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype69[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype70[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype71[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype72[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype73[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype74[] = {0xFF01,192,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype75[] = {0xFF01,193,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype76[] = {0xFF01,194,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype77[] = {0xFF01,196,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype78[] = {0xFF01,196,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype79[] = {0xFF01,196,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype80[] = {0xFF01,196,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype81[] = {0xFF01,196,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype82[] = {0xFF01,196,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype83[] = {0xFF01,196,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype84[] = {0xFF01,196,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype85[] = {0xFF01,196,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype86[] = {0xFF01,196,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype87[] = {0xFF01,196,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype88[] = {0xFF01,196,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype89[] = {0xFF01,196,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype90[] = {0xFF01,196,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype91[] = {0xFF01,196,0xFFFF};
static EIF_TYPE_INDEX Y5352_pgtype92[] = {0xFF01,196,0xFFFF};
EIF_TYPE_INDEX *Y5352_gen_type [257];
EIF_TYPE_INDEX Y5352 [257];
void Y5352_init (void)
{
	egc_routines_types [5352] = Y5352;
	egc_routines_gen_types [5352] = Y5352_gen_type;
	egc_routines_offset [5352] = 575;
	Y5352_gen_type [0] = Y5352_pgtype0;
	Y5352_gen_type [1] = Y5352_pgtype1;
	Y5352_gen_type [2] = Y5352_pgtype2;
	Y5352_gen_type [3] = Y5352_pgtype3;
	Y5352_gen_type [4] = Y5352_pgtype4;
	Y5352_gen_type [5] = Y5352_pgtype5;
	Y5352_gen_type [6] = Y5352_pgtype6;
	Y5352_gen_type [7] = Y5352_pgtype7;
	Y5352_gen_type [8] = Y5352_pgtype8;
	Y5352_gen_type [9] = Y5352_pgtype9;
	Y5352_gen_type [10] = Y5352_pgtype10;
	Y5352_gen_type [11] = Y5352_pgtype11;
	Y5352_gen_type [12] = Y5352_pgtype12;
	Y5352_gen_type [13] = Y5352_pgtype13;
	Y5352_gen_type [14] = Y5352_pgtype14;
	Y5352_gen_type [168] = Y5352_pgtype15;
	Y5352_gen_type [169] = Y5352_pgtype16;
	Y5352_gen_type [170] = Y5352_pgtype17;
	Y5352_gen_type [171] = Y5352_pgtype18;
	Y5352_gen_type [172] = Y5352_pgtype19;
	Y5352_gen_type [173] = Y5352_pgtype20;
	Y5352_gen_type [174] = Y5352_pgtype21;
	Y5352_gen_type [175] = Y5352_pgtype22;
	Y5352_gen_type [176] = Y5352_pgtype23;
	Y5352_gen_type [177] = Y5352_pgtype24;
	Y5352_gen_type [178] = Y5352_pgtype25;
	Y5352_gen_type [179] = Y5352_pgtype26;
	Y5352_gen_type [180] = Y5352_pgtype27;
	Y5352_gen_type [181] = Y5352_pgtype28;
	Y5352_gen_type [182] = Y5352_pgtype29;
	Y5352_gen_type [183] = Y5352_pgtype30;
	Y5352_gen_type [184] = Y5352_pgtype31;
	Y5352_gen_type [185] = Y5352_pgtype32;
	Y5352_gen_type [186] = Y5352_pgtype33;
	Y5352_gen_type [187] = Y5352_pgtype34;
	Y5352_gen_type [188] = Y5352_pgtype35;
	Y5352_gen_type [189] = Y5352_pgtype36;
	Y5352_gen_type [190] = Y5352_pgtype37;
	Y5352_gen_type [191] = Y5352_pgtype38;
	Y5352_gen_type [192] = Y5352_pgtype39;
	Y5352_gen_type [193] = Y5352_pgtype40;
	Y5352_gen_type [194] = Y5352_pgtype41;
	Y5352_gen_type [195] = Y5352_pgtype42;
	Y5352_gen_type [196] = Y5352_pgtype43;
	Y5352_gen_type [197] = Y5352_pgtype44;
	Y5352_gen_type [198] = Y5352_pgtype45;
	Y5352_gen_type [199] = Y5352_pgtype46;
	Y5352_gen_type [200] = Y5352_pgtype47;
	Y5352_gen_type [201] = Y5352_pgtype48;
	Y5352_gen_type [202] = Y5352_pgtype49;
	Y5352_gen_type [203] = Y5352_pgtype50;
	Y5352_gen_type [204] = Y5352_pgtype51;
	Y5352_gen_type [205] = Y5352_pgtype52;
	Y5352_gen_type [206] = Y5352_pgtype53;
	Y5352_gen_type [207] = Y5352_pgtype54;
	Y5352_gen_type [208] = Y5352_pgtype55;
	Y5352_gen_type [209] = Y5352_pgtype56;
	Y5352_gen_type [210] = Y5352_pgtype57;
	Y5352_gen_type [211] = Y5352_pgtype58;
	Y5352_gen_type [212] = Y5352_pgtype59;
	Y5352_gen_type [213] = Y5352_pgtype60;
	Y5352_gen_type [214] = Y5352_pgtype61;
	Y5352_gen_type [215] = Y5352_pgtype62;
	Y5352_gen_type [216] = Y5352_pgtype63;
	Y5352_gen_type [217] = Y5352_pgtype64;
	Y5352_gen_type [218] = Y5352_pgtype65;
	Y5352_gen_type [219] = Y5352_pgtype66;
	Y5352_gen_type [220] = Y5352_pgtype67;
	Y5352_gen_type [221] = Y5352_pgtype68;
	Y5352_gen_type [222] = Y5352_pgtype69;
	Y5352_gen_type [223] = Y5352_pgtype70;
	Y5352_gen_type [224] = Y5352_pgtype71;
	Y5352_gen_type [225] = Y5352_pgtype72;
	Y5352_gen_type [226] = Y5352_pgtype73;
	Y5352_gen_type [227] = Y5352_pgtype74;
	Y5352_gen_type [228] = Y5352_pgtype75;
	Y5352_gen_type [229] = Y5352_pgtype76;
	Y5352_gen_type [241] = Y5352_pgtype77;
	Y5352_gen_type [242] = Y5352_pgtype78;
	Y5352_gen_type [243] = Y5352_pgtype79;
	Y5352_gen_type [244] = Y5352_pgtype80;
	Y5352_gen_type [245] = Y5352_pgtype81;
	Y5352_gen_type [246] = Y5352_pgtype82;
	Y5352_gen_type [247] = Y5352_pgtype83;
	Y5352_gen_type [248] = Y5352_pgtype84;
	Y5352_gen_type [249] = Y5352_pgtype85;
	Y5352_gen_type [250] = Y5352_pgtype86;
	Y5352_gen_type [251] = Y5352_pgtype87;
	Y5352_gen_type [252] = Y5352_pgtype88;
	Y5352_gen_type [253] = Y5352_pgtype89;
	Y5352_gen_type [254] = Y5352_pgtype90;
	Y5352_gen_type [255] = Y5352_pgtype91;
	Y5352_gen_type [256] = Y5352_pgtype92;
	{long i; for (i = 0; i < 15; i++) Y5352[i] = 192;};
	{long i; for (i = 168; i < 228; i++) Y5352[i] = 192;};
	Y5352[228] = 193;
	Y5352[229] = 194;
	{long i; for (i = 241; i < 257; i++) Y5352[i] = 196;};
}

char *(*R5353[29])();
void R5353_init () {
	R5353[0] = (char *(*)()) F804_6578;
	R5353[1] = (char *(*)()) F805_6578;
	R5353[13] = (char *(*)()) F817_6883;
	R5353[14] = (char *(*)()) F818_6883;
	R5353[15] = (char *(*)()) F819_6883;
	R5353[16] = (char *(*)()) F820_6883;
	R5353[17] = (char *(*)()) F821_6883;
	R5353[18] = (char *(*)()) F822_6883;
	R5353[19] = (char *(*)()) F823_6883;
	R5353[20] = (char *(*)()) F824_6883;
	R5353[21] = (char *(*)()) F825_6883;
	R5353[22] = (char *(*)()) F826_6883;
	R5353[23] = (char *(*)()) F827_6883;
	R5353[24] = (char *(*)()) F828_6883;
	R5353[25] = (char *(*)()) F829_6883;
	R5353[26] = (char *(*)()) F830_6883;
	R5353[27] = (char *(*)()) F831_6883;
	R5353[28] = (char *(*)()) F817_6883;
}

char *(*R5354[29])();
void R5354_init () {
	R5354[0] = (char *(*)()) F804_6587;
	R5354[1] = (char *(*)()) F805_6587;
	R5354[13] = (char *(*)()) F817_6893;
	R5354[14] = (char *(*)()) F818_6893;
	R5354[15] = (char *(*)()) F819_6893;
	R5354[16] = (char *(*)()) F820_6893;
	R5354[17] = (char *(*)()) F821_6893;
	R5354[18] = (char *(*)()) F822_6893;
	R5354[19] = (char *(*)()) F823_6893;
	R5354[20] = (char *(*)()) F824_6893;
	R5354[21] = (char *(*)()) F825_6893;
	R5354[22] = (char *(*)()) F826_6893;
	R5354[23] = (char *(*)()) F827_6893;
	R5354[24] = (char *(*)()) F828_6893;
	R5354[25] = (char *(*)()) F829_6893;
	R5354[26] = (char *(*)()) F830_6893;
	R5354[27] = (char *(*)()) F831_6893;
	R5354[28] = (char *(*)()) F817_6893;
}

char *(*R5379[465])();
void R5379_init () {
	R5379[0] = (char *(*)()) F608_5945;
	{long i; for (i = 80; i < 83; i++) R5379[i] = (char *(*)()) F690_6097;}
	R5379[113] = (char *(*)()) F632_6001;
	R5379[114] = (char *(*)()) F725_6471;
	R5379[115] = (char *(*)()) F726_6471;
	R5379[116] = (char *(*)()) F727_6471;
	R5379[117] = (char *(*)()) F728_6471;
	R5379[118] = (char *(*)()) F729_6471;
	R5379[119] = (char *(*)()) F730_6471;
	R5379[120] = (char *(*)()) F731_6471;
	R5379[121] = (char *(*)()) F732_6471;
	R5379[122] = (char *(*)()) F733_6471;
	R5379[123] = (char *(*)()) F734_6471;
	R5379[124] = (char *(*)()) F735_6471;
	R5379[125] = (char *(*)()) F736_6471;
	R5379[126] = (char *(*)()) F737_6471;
	R5379[127] = (char *(*)()) F738_6471;
	R5379[128] = (char *(*)()) F739_6471;
	R5379[129] = (char *(*)()) F725_6471;
	R5379[130] = (char *(*)()) F733_6471;
	R5379[131] = (char *(*)()) F730_6471;
	R5379[132] = (char *(*)()) F738_6471;
	R5379[193] = (char *(*)()) F804_6579;
	R5379[194] = (char *(*)()) F805_6579;
	R5379[201] = (char *(*)()) F627_6001;
	R5379[206] = (char *(*)()) F627_6001;
	R5379[207] = (char *(*)()) F628_6001;
	R5379[208] = (char *(*)()) F629_6001;
	R5379[209] = (char *(*)()) F630_6001;
	R5379[210] = (char *(*)()) F631_6001;
	R5379[211] = (char *(*)()) F632_6001;
	R5379[212] = (char *(*)()) F633_6001;
	R5379[213] = (char *(*)()) F634_6001;
	R5379[214] = (char *(*)()) F635_6001;
	R5379[215] = (char *(*)()) F636_6001;
	R5379[216] = (char *(*)()) F637_6001;
	R5379[217] = (char *(*)()) F638_6001;
	R5379[218] = (char *(*)()) F639_6001;
	R5379[219] = (char *(*)()) F640_6001;
	R5379[220] = (char *(*)()) F641_6001;
	R5379[221] = (char *(*)()) F627_6001;
	R5379[222] = (char *(*)()) F833_6971;
	R5379[223] = (char *(*)()) F834_6971;
	R5379[224] = (char *(*)()) F835_6971;
	R5379[225] = (char *(*)()) F836_6971;
	{long i; for (i = 226; i < 228; i++) R5379[i] = (char *(*)()) F837_6971;}
	{long i; for (i = 228; i < 230; i++) R5379[i] = (char *(*)()) F833_6971;}
	R5379[230] = (char *(*)()) F835_6971;
	{long i; for (i = 417; i < 419; i++) R5379[i] = (char *(*)()) F629_6001;}
	R5379[421] = (char *(*)()) F628_6001;
	R5379[434] = (char *(*)()) F690_6097;
	{long i; for (i = 463; i < 465; i++) R5379[i] = (char *(*)()) F629_6001;}
}

char *(*R5409[385])();
void R5409_init () {
	{long i; for (i = 0; i < 2; i++) R5409[i] = (char *(*)()) F690_6060;}
	R5409[2] = (char *(*)()) F693_6377;
	R5409[33] = (char *(*)()) F724_6425;
	R5409[34] = (char *(*)()) F725_6465;
	R5409[35] = (char *(*)()) F726_6465;
	R5409[36] = (char *(*)()) F727_6465;
	R5409[37] = (char *(*)()) F728_6465;
	R5409[38] = (char *(*)()) F729_6465;
	R5409[39] = (char *(*)()) F730_6465;
	R5409[40] = (char *(*)()) F731_6465;
	R5409[41] = (char *(*)()) F732_6465;
	R5409[42] = (char *(*)()) F733_6465;
	R5409[43] = (char *(*)()) F734_6465;
	R5409[44] = (char *(*)()) F735_6465;
	R5409[45] = (char *(*)()) F736_6465;
	R5409[46] = (char *(*)()) F737_6465;
	R5409[47] = (char *(*)()) F738_6465;
	R5409[48] = (char *(*)()) F739_6465;
	R5409[49] = (char *(*)()) F725_6465;
	R5409[50] = (char *(*)()) F733_6465;
	R5409[51] = (char *(*)()) F730_6465;
	R5409[52] = (char *(*)()) F738_6465;
	R5409[113] = (char *(*)()) F804_6571;
	R5409[114] = (char *(*)()) F805_6571;
	R5409[121] = (char *(*)()) F812_6759;
	R5409[126] = (char *(*)()) F817_6878;
	R5409[127] = (char *(*)()) F818_6878;
	R5409[128] = (char *(*)()) F819_6878;
	R5409[129] = (char *(*)()) F820_6878;
	R5409[130] = (char *(*)()) F821_6878;
	R5409[131] = (char *(*)()) F822_6878;
	R5409[132] = (char *(*)()) F823_6878;
	R5409[133] = (char *(*)()) F824_6878;
	R5409[134] = (char *(*)()) F825_6878;
	R5409[135] = (char *(*)()) F826_6878;
	R5409[136] = (char *(*)()) F827_6878;
	R5409[137] = (char *(*)()) F828_6878;
	R5409[138] = (char *(*)()) F829_6878;
	R5409[139] = (char *(*)()) F830_6878;
	R5409[140] = (char *(*)()) F831_6878;
	R5409[141] = (char *(*)()) F817_6878;
	R5409[142] = (char *(*)()) F833_6963;
	R5409[143] = (char *(*)()) F834_6963;
	R5409[144] = (char *(*)()) F835_6963;
	R5409[145] = (char *(*)()) F836_6963;
	{long i; for (i = 146; i < 148; i++) R5409[i] = (char *(*)()) F837_6963;}
	{long i; for (i = 148; i < 150; i++) R5409[i] = (char *(*)()) F833_6963;}
	R5409[150] = (char *(*)()) F835_6963;
	{long i; for (i = 337; i < 339; i++) R5409[i] = (char *(*)()) F1026_8878;}
	R5409[341] = (char *(*)()) F1030_9043;
	R5409[354] = (char *(*)()) F1045_9342;
	{long i; for (i = 383; i < 385; i++) R5409[i] = (char *(*)()) F1074_10359;}
}


#ifdef __cplusplus
}
#endif
