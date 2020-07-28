// Font 8
//
// This font has been 8 bit Run Length Encoded to save FLASH space
//
// It is a Arial 75 pixel height font intended to display large numbers
// Width for numerals reduced from 55 to 53 (to fit in 160 pixel screens)
// This font only contains characters [space] 0 1 2 3 4 5 6 7 8 9 0 : - .
// All other characters print as a space


const unsigned char widtbl_f72[96] =          // character width table
{
        29, 29, 29, 29, 29, 29, 29, 29,     // char 32 - 39
        29, 29, 29, 29, 29, 29, 29, 29,     // char 40 - 47
        53, 53, 53, 53, 53, 53, 53, 53,     // char 48 - 55
        53, 53, 29, 29, 29, 29, 29, 29,     // char 56 - 63
        29, 29, 29, 29, 29, 29, 29, 29,     // char 64 - 71
        29, 29, 29, 29, 29, 29, 29, 29,     // char 72 - 79
        29, 29, 29, 29, 29, 29, 29, 29,     // char 80 - 87
        29, 29, 29, 29, 29, 29, 29, 29,     // char 88 - 95
        29, 29, 29, 29, 29, 29, 29, 29,     // char 96 - 103
        29, 29, 29, 29, 29, 29, 29, 29,     // char 104 - 111
        29, 29, 29, 29, 29, 29, 29, 29,     // char 112 - 119
        29, 29, 29, 29, 29, 29, 29, 29      // char 120 - 127
};

// Row format, MSB left

const unsigned char chr_f72_20[] = 
{
0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
0x7E
};

const unsigned char chr_f72_2D[] = 
{
0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F,
0x36, 0x91, 0x0A, 0x91, 0x0A, 0x91, 0x0A, 0x91,
0x0A, 0x91, 0x0A, 0x91, 0x0A, 0x91, 0x7F, 0x7F,
0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x07
};

const unsigned char chr_f72_2E[] = 
{
0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x48, 0x88, 
0x13, 0x88, 0x13, 0x88, 0x13, 0x88, 0x13, 0x88, 
0x13, 0x88, 0x13, 0x88, 0x13, 0x88, 0x13, 0x88, 
0x44
};

const unsigned char chr_f72_30[] = 
{
0x7F, 0x68, 0x8A, 0x26, 0x90, 0x21, 0x94, 0x1D, 0x98, 0x1A, 0x9A, 0x18, 0x9C, 0x16, 0x9E, 0x14,
0xA0, 0x13, 0x8C, 0x06, 0x8C, 0x12, 0x8B, 0x0A, 0x8B, 0x10, 0x8A, 0x0E, 0x89, 0x10, 0x89, 0x10,
0x89, 0x0F, 0x88, 0x12, 0x88, 0x0E, 0x89, 0x12, 0x89, 0x0D, 0x88, 0x14, 0x88, 0x0C, 0x89, 0x14,
0x88, 0x0C, 0x88, 0x16, 0x88, 0x0B, 0x88, 0x16, 0x88, 0x0B, 0x88, 0x16, 0x88, 0x0A, 0x88, 0x18,
0x88, 0x09, 0x88, 0x18, 0x88, 0x09, 0x88, 0x18, 0x88, 0x09, 0x88, 0x18, 0x88, 0x09, 0x88, 0x18,
0x88, 0x09, 0x88, 0x18, 0x88, 0x08, 0x88, 0x1A, 0x88, 0x07, 0x88, 0x1A, 0x88, 0x07, 0x88, 0x1A,
0x88, 0x07, 0x88, 0x1A, 0x88, 0x07, 0x88, 0x1A, 0x88, 0x07, 0x88, 0x1A, 0x88, 0x07, 0x88, 0x1A,
0x88, 0x07, 0x88, 0x1A, 0x88, 0x07, 0x88, 0x1A, 0x88, 0x07, 0x88, 0x1A, 0x88, 0x07, 0x88, 0x1A,
0x88, 0x07, 0x88, 0x1A, 0x88, 0x07, 0x88, 0x1A, 0x88, 0x07, 0x88, 0x1A, 0x88, 0x07, 0x88, 0x1A,
0x88, 0x07, 0x88, 0x1A, 0x88, 0x07, 0x88, 0x1A, 0x88, 0x07, 0x88, 0x1A, 0x88, 0x07, 0x88, 0x1A,
0x88, 0x07, 0x88, 0x1A, 0x88, 0x08, 0x88, 0x18, 0x88, 0x09, 0x88, 0x18, 0x88, 0x09, 0x88, 0x18,
0x88, 0x09, 0x88, 0x18, 0x88, 0x09, 0x88, 0x18, 0x88, 0x09, 0x88, 0x18, 0x88, 0x0A, 0x88, 0x16,
0x88, 0x0B, 0x88, 0x16, 0x88, 0x0B, 0x88, 0x16, 0x88, 0x0B, 0x89, 0x14, 0x89, 0x0C, 0x88, 0x14,
0x88, 0x0D, 0x89, 0x12, 0x89, 0x0E, 0x88, 0x12, 0x88, 0x0F, 0x89, 0x10, 0x89, 0x0F, 0x8A, 0x0E,
0x8A, 0x10, 0x8B, 0x0A, 0x8B, 0x12, 0x8C, 0x06, 0x8C, 0x13, 0xA0, 0x14, 0x9E, 0x16, 0x9C, 0x18,
0x9A, 0x1A, 0x98, 0x1D, 0x94, 0x21, 0x90, 0x26, 0x8A, 0x49
};

const unsigned char chr_f72_31[] = 
{
0x7F, 0x70, 0x85, 0x2D, 0x86, 0x2D, 0x86, 0x2C, 0x87, 0x2B, 0x88, 0x2B, 0x88, 0x2A, 0x89, 0x29, 
0x8A, 0x28, 0x8B, 0x27, 0x8C, 0x25, 0x8E, 0x24, 0x8F, 0x23, 0x90, 0x22, 0x91, 0x20, 0x93, 0x1E, 
0x95, 0x1C, 0x8D, 0x00, 0x88, 0x1B, 0x8C, 0x02, 0x88, 0x1B, 0x8B, 0x03, 0x88, 0x1B, 0x8A, 0x04, 
0x88, 0x1B, 0x88, 0x06, 0x88, 0x1B, 0x87, 0x07, 0x88, 0x1B, 0x85, 0x09, 0x88, 0x1B, 0x83, 0x0B, 
0x88, 0x1B, 0x81, 0x0D, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 
0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 
0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 
0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 
0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 
0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x7B
};

const unsigned char chr_f72_32[] = 
{
0x7F, 0x67, 0x8A, 0x25, 0x92, 0x1F, 0x96, 0x1B, 0x9A, 0x18, 0x9C, 0x16, 0x9E, 0x14, 0xA0, 0x12, 
0xA2, 0x10, 0x8E, 0x07, 0x8D, 0x0F, 0x8B, 0x0C, 0x8C, 0x0D, 0x8A, 0x10, 0x8A, 0x0D, 0x89, 0x12, 
0x8A, 0x0B, 0x89, 0x14, 0x89, 0x0B, 0x89, 0x14, 0x89, 0x0B, 0x88, 0x16, 0x89, 0x0A, 0x88, 0x16, 
0x89, 0x09, 0x88, 0x18, 0x88, 0x09, 0x88, 0x18, 0x88, 0x09, 0x88, 0x18, 0x88, 0x0D, 0x84, 0x18, 
0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2A, 0x89, 0x2A, 0x88, 0x2A, 0x89, 0x2A, 0x89, 0x29, 
0x89, 0x2A, 0x89, 0x29, 0x89, 0x29, 0x8A, 0x28, 0x8A, 0x28, 0x8B, 0x27, 0x8B, 0x27, 0x8B, 0x27, 
0x8B, 0x27, 0x8B, 0x27, 0x8C, 0x26, 0x8C, 0x26, 0x8C, 0x26, 0x8C, 0x26, 0x8C, 0x25, 0x8C, 0x26, 
0x8C, 0x26, 0x8C, 0x26, 0x8C, 0x26, 0x8C, 0x25, 0x8D, 0x25, 0x8D, 0x25, 0x8C, 0x26, 0x8C, 0x26, 
0x8C, 0x27, 0x8B, 0x27, 0x8B, 0x27, 0x8A, 0x28, 0x8A, 0x29, 0x89, 0x29, 0x8A, 0x29, 0x89, 0x29, 
0x89, 0x2A, 0xAA, 0x08, 0xAB, 0x08, 0xAB, 0x08, 0xAB, 0x07, 0xAC, 0x07, 0xAC, 0x07, 0xAC, 0x07, 
0xAC, 0x07, 0xAC, 0x6E
};

const unsigned char chr_f72_33[] = 
{
0x7F, 0x67, 0x89, 0x27, 0x90, 0x21, 0x94, 0x1D, 0x97, 0x1B, 0x9A, 0x18, 0x9C, 0x16, 0x9E, 0x14, 
0xA0, 0x13, 0x8C, 0x06, 0x8C, 0x12, 0x8B, 0x0A, 0x8B, 0x10, 0x8A, 0x0E, 0x89, 0x10, 0x89, 0x10, 
0x89, 0x0F, 0x88, 0x12, 0x88, 0x0E, 0x89, 0x12, 0x89, 0x0D, 0x88, 0x14, 0x88, 0x0D, 0x88, 0x14, 
0x88, 0x0C, 0x89, 0x14, 0x88, 0x0C, 0x88, 0x15, 0x88, 0x10, 0x84, 0x15, 0x88, 0x2B, 0x88, 0x2B, 
0x88, 0x2A, 0x88, 0x2B, 0x88, 0x2A, 0x89, 0x29, 0x89, 0x29, 0x89, 0x28, 0x8B, 0x26, 0x8C, 0x21, 
0x91, 0x22, 0x8F, 0x24, 0x8D, 0x26, 0x8F, 0x23, 0x92, 0x21, 0x94, 0x1F, 0x95, 0x1E, 0x81, 0x07, 
0x8C, 0x29, 0x8B, 0x2A, 0x8A, 0x2A, 0x89, 0x2B, 0x89, 0x2B, 0x89, 0x2A, 0x89, 0x2B, 0x88, 0x2B, 
0x89, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x0B, 0x84, 0x1A, 
0x88, 0x07, 0x88, 0x1A, 0x88, 0x07, 0x89, 0x18, 0x89, 0x07, 0x89, 0x18, 0x88, 0x09, 0x88, 0x18, 
0x88, 0x09, 0x89, 0x16, 0x89, 0x09, 0x89, 0x15, 0x89, 0x0B, 0x89, 0x14, 0x89, 0x0B, 0x8A, 0x12, 
0x89, 0x0D, 0x8A, 0x10, 0x8A, 0x0D, 0x8B, 0x0D, 0x8B, 0x0F, 0x8D, 0x07, 0x8D, 0x11, 0xA2, 0x12, 
0xA0, 0x14, 0x9D, 0x17, 0x9B, 0x19, 0x99, 0x1C, 0x95, 0x20, 0x91, 0x26, 0x89, 0x4A
};

const unsigned char chr_f72_34[] = 
{
0x7F, 0x7F, 0x2A, 0x86, 0x2C, 0x87, 0x2B, 0x88, 0x2A, 0x89, 0x2A, 0x89, 0x29, 0x8A, 0x28, 0x8B, 
0x27, 0x8C, 0x26, 0x8D, 0x26, 0x8D, 0x25, 0x8E, 0x24, 0x8F, 0x23, 0x90, 0x23, 0x90, 0x22, 0x91, 
0x21, 0x92, 0x20, 0x93, 0x20, 0x93, 0x1F, 0x8A, 0x00, 0x88, 0x1E, 0x8A, 0x01, 0x88, 0x1D, 0x8A, 
0x02, 0x88, 0x1C, 0x8B, 0x02, 0x88, 0x1C, 0x8A, 0x03, 0x88, 0x1B, 0x8A, 0x04, 0x88, 0x1A, 0x8A, 
0x05, 0x88, 0x19, 0x8A, 0x06, 0x88, 0x19, 0x8A, 0x06, 0x88, 0x18, 0x8A, 0x07, 0x88, 0x17, 0x8A, 
0x08, 0x88, 0x16, 0x8A, 0x09, 0x88, 0x16, 0x8A, 0x09, 0x88, 0x15, 0x8A, 0x0A, 0x88, 0x14, 0x8A, 
0x0B, 0x88, 0x13, 0x8A, 0x0C, 0x88, 0x13, 0x8A, 0x0C, 0x88, 0x12, 0x8A, 0x0D, 0x88, 0x11, 0x8A, 
0x0E, 0x88, 0x10, 0x8A, 0x0F, 0x88, 0x0F, 0x8B, 0x0F, 0x88, 0x0F, 0x8A, 0x10, 0x88, 0x0E, 0x8A, 
0x11, 0x88, 0x0D, 0x8A, 0x12, 0x88, 0x0C, 0x8A, 0x13, 0x88, 0x0C, 0xAF, 0x04, 0xAF, 0x04, 0xAF, 
0x04, 0xAF, 0x04, 0xAF, 0x04, 0xAF, 0x04, 0xAF, 0x04, 0xAF, 0x04, 0xAF, 0x23, 0x88, 0x2B, 0x88, 
0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 
0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x75
};

const unsigned char chr_f72_35[] = 
{
0x7F, 0x7F, 0x14, 0xA0, 0x13, 0xA0, 0x12, 0xA1, 0x12, 0xA1, 0x12, 0xA1, 0x12, 0xA1, 0x12, 0xA1, 
0x11, 0xA2, 0x11, 0xA2, 0x11, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2A, 0x89, 0x2A, 0x88, 0x2B, 0x88, 
0x2B, 0x88, 0x2B, 0x88, 0x2A, 0x89, 0x2A, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2A, 0x89, 
0x06, 0x88, 0x1A, 0x89, 0x03, 0x8E, 0x17, 0x88, 0x02, 0x92, 0x15, 0x88, 0x00, 0x96, 0x13, 0xA1, 
0x11, 0xA3, 0x10, 0xA4, 0x0F, 0xA5, 0x0E, 0x8F, 0x07, 0x8E, 0x0D, 0x8C, 0x0D, 0x8C, 0x0B, 0x8B, 
0x11, 0x8A, 0x0B, 0x8A, 0x13, 0x8A, 0x0A, 0x89, 0x15, 0x89, 0x0E, 0x84, 0x17, 0x89, 0x2A, 0x89, 
0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x89, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 
0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x0B, 0x84, 0x1A, 0x88, 0x07, 0x88, 0x19, 0x88, 
0x08, 0x89, 0x18, 0x88, 0x08, 0x89, 0x18, 0x88, 0x09, 0x88, 0x17, 0x89, 0x09, 0x89, 0x16, 0x88, 
0x0A, 0x89, 0x15, 0x89, 0x0B, 0x89, 0x13, 0x89, 0x0C, 0x8A, 0x11, 0x8A, 0x0C, 0x8B, 0x0F, 0x8A, 
0x0E, 0x8B, 0x0D, 0x8A, 0x10, 0x8D, 0x07, 0x8D, 0x10, 0xA2, 0x12, 0xA0, 0x14, 0x9E, 0x17, 0x9B, 
0x19, 0x98, 0x1D, 0x95, 0x20, 0x90, 0x26, 0x8A, 0x4A
};

const unsigned char chr_f72_36[] = 
{
0x7F, 0x6A, 0x89, 0x26, 0x90, 0x21, 0x95, 0x1C, 0x98, 0x1A, 0x9A, 0x18, 0x9C, 0x16, 0x9E, 0x14, 
0xA0, 0x12, 0x8D, 0x06, 0x8D, 0x10, 0x8B, 0x0B, 0x8B, 0x10, 0x8A, 0x0E, 0x8A, 0x0E, 0x89, 0x11, 
0x89, 0x0D, 0x8A, 0x12, 0x89, 0x0C, 0x89, 0x13, 0x89, 0x0C, 0x88, 0x15, 0x88, 0x0B, 0x89, 0x15, 
0x89, 0x0A, 0x88, 0x16, 0x89, 0x09, 0x89, 0x17, 0x88, 0x09, 0x88, 0x18, 0x84, 0x0D, 0x88, 0x2B, 
0x87, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x0A, 0x88, 0x17, 0x87, 0x08, 0x8E, 0x14, 
0x87, 0x06, 0x92, 0x11, 0x88, 0x04, 0x96, 0x0F, 0x88, 0x03, 0x98, 0x0E, 0x88, 0x02, 0x9A, 0x0D, 
0x88, 0x01, 0x9C, 0x0C, 0x88, 0x00, 0x9E, 0x0B, 0x92, 0x07, 0x8E, 0x0A, 0x90, 0x0C, 0x8C, 0x09, 
0x8E, 0x10, 0x8A, 0x09, 0x8D, 0x12, 0x8A, 0x08, 0x8C, 0x14, 0x89, 0x08, 0x8B, 0x16, 0x89, 0x07, 
0x8A, 0x17, 0x89, 0x07, 0x89, 0x19, 0x88, 0x07, 0x89, 0x19, 0x88, 0x07, 0x89, 0x19, 0x89, 0x06, 
0x88, 0x1B, 0x88, 0x06, 0x88, 0x1B, 0x88, 0x06, 0x88, 0x1B, 0x88, 0x06, 0x88, 0x1B, 0x88, 0x07, 
0x87, 0x1B, 0x88, 0x07, 0x87, 0x1B, 0x88, 0x07, 0x87, 0x1B, 0x88, 0x07, 0x87, 0x1B, 0x88, 0x07, 
0x88, 0x1A, 0x88, 0x08, 0x87, 0x19, 0x89, 0x08, 0x87, 0x19, 0x88, 0x09, 0x88, 0x18, 0x88, 0x09, 
0x88, 0x17, 0x89, 0x0A, 0x88, 0x16, 0x88, 0x0B, 0x88, 0x15, 0x89, 0x0C, 0x88, 0x14, 0x89, 0x0C, 
0x89, 0x12, 0x89, 0x0E, 0x89, 0x10, 0x8A, 0x0E, 0x8B, 0x0C, 0x8B, 0x10, 0x8C, 0x07, 0x8D, 0x12, 
0xA1, 0x13, 0x9F, 0x15, 0x9D, 0x17, 0x9B, 0x1A, 0x97, 0x1D, 0x95, 0x21, 0x8F, 0x27, 0x89, 0x49

};

const unsigned char chr_f72_37[] = 
{
0x7F, 0x7F, 0x0D, 0xAB, 0x08, 0xAB, 0x08, 0xAB, 0x08, 0xAB, 0x08, 0xAB, 0x08, 0xAB, 0x08, 0xAB, 
0x08, 0xAB, 0x08, 0xAA, 0x2C, 0x86, 0x2C, 0x86, 0x2C, 0x87, 0x2B, 0x87, 0x2B, 0x87, 0x2B, 0x87, 
0x2C, 0x87, 0x2B, 0x87, 0x2B, 0x87, 0x2C, 0x87, 0x2B, 0x87, 0x2B, 0x88, 0x2B, 0x87, 0x2B, 0x87, 
0x2B, 0x88, 0x2B, 0x87, 0x2B, 0x88, 0x2B, 0x87, 0x2B, 0x88, 0x2A, 0x88, 0x2B, 0x88, 0x2A, 0x88, 
0x2B, 0x88, 0x2A, 0x88, 0x2B, 0x88, 0x2A, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2A, 0x88, 0x2B, 0x88, 
0x2A, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2A, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2A, 0x88, 0x2B, 0x88, 
0x2B, 0x88, 0x2A, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2A, 0x88, 0x2B, 0x88, 0x2B, 0x88, 
0x2B, 0x88, 0x2A, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2A, 0x89, 
0x2A, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x7F, 0x06
};

const unsigned char chr_f72_38[] = 
{
0x7F, 0x68, 0x89, 0x26, 0x91, 0x20, 0x95, 0x1C, 0x99, 0x19, 0x9B, 0x17, 0x9D, 0x15, 0x9F, 0x13, 
0xA1, 0x11, 0x8D, 0x07, 0x8C, 0x11, 0x8B, 0x0B, 0x8B, 0x0F, 0x8A, 0x0F, 0x8A, 0x0E, 0x89, 0x11, 
0x89, 0x0E, 0x88, 0x13, 0x88, 0x0D, 0x89, 0x13, 0x89, 0x0C, 0x88, 0x15, 0x88, 0x0C, 0x88, 0x15, 
0x88, 0x0C, 0x88, 0x15, 0x88, 0x0C, 0x88, 0x15, 0x88, 0x0C, 0x88, 0x15, 0x88, 0x0C, 0x88, 0x15, 
0x88, 0x0C, 0x88, 0x15, 0x88, 0x0D, 0x88, 0x13, 0x88, 0x0E, 0x88, 0x13, 0x88, 0x0E, 0x89, 0x11, 
0x89, 0x0F, 0x89, 0x0F, 0x89, 0x11, 0x89, 0x0D, 0x89, 0x13, 0x8B, 0x07, 0x8C, 0x14, 0x9D, 0x17, 
0x9B, 0x1A, 0x97, 0x1E, 0x93, 0x1E, 0x96, 0x1B, 0x9A, 0x18, 0x9D, 0x15, 0x9F, 0x13, 0x8C, 0x07, 
0x8C, 0x11, 0x8A, 0x0C, 0x8B, 0x0F, 0x8A, 0x0F, 0x8A, 0x0D, 0x8A, 0x11, 0x89, 0x0D, 0x89, 0x13, 
0x89, 0x0B, 0x89, 0x15, 0x88, 0x0B, 0x89, 0x15, 0x89, 0x0A, 0x88, 0x17, 0x88, 0x0A, 0x88, 0x17, 
0x88, 0x09, 0x88, 0x19, 0x88, 0x08, 0x88, 0x19, 0x88, 0x08, 0x88, 0x19, 0x88, 0x08, 0x88, 0x19, 
0x88, 0x08, 0x88, 0x19, 0x88, 0x08, 0x88, 0x19, 0x88, 0x08, 0x88, 0x19, 0x88, 0x08, 0x88, 0x19, 
0x88, 0x08, 0x88, 0x19, 0x88, 0x08, 0x89, 0x17, 0x89, 0x09, 0x88, 0x17, 0x88, 0x0A, 0x89, 0x15, 
0x89, 0x0A, 0x89, 0x15, 0x89, 0x0B, 0x89, 0x13, 0x89, 0x0C, 0x8A, 0x11, 0x8A, 0x0D, 0x8A, 0x0F, 
0x8A, 0x0E, 0x8C, 0x0C, 0x8B, 0x0F, 0x8D, 0x07, 0x8D, 0x11, 0xA1, 0x13, 0x9F, 0x15, 0x9D, 0x17, 
0x9B, 0x19, 0x99, 0x1C, 0x95, 0x20, 0x91, 0x26, 0x89, 0x4A
};

const unsigned char chr_f72_39[] = 
{
0x7F, 0x68, 0x88, 0x27, 0x90, 0x21, 0x94, 0x1E, 0x97, 0x1A, 0x9A, 0x18, 0x9C, 0x16, 0x9E, 0x14, 
0xA0, 0x12, 0x8E, 0x07, 0x8B, 0x11, 0x8C, 0x0B, 0x8A, 0x0F, 0x8B, 0x0F, 0x88, 0x0F, 0x8A, 0x11, 
0x88, 0x0D, 0x8A, 0x13, 0x88, 0x0C, 0x89, 0x14, 0x88, 0x0B, 0x89, 0x16, 0x87, 0x0B, 0x89, 0x17, 
0x87, 0x0A, 0x88, 0x18, 0x87, 0x0A, 0x88, 0x18, 0x87, 0x09, 0x89, 0x19, 0x87, 0x08, 0x88, 0x1A, 
0x87, 0x08, 0x88, 0x1A, 0x87, 0x08, 0x88, 0x1A, 0x87, 0x08, 0x88, 0x1A, 0x87, 0x08, 0x88, 0x1A, 
0x87, 0x08, 0x88, 0x1A, 0x88, 0x07, 0x88, 0x1A, 0x88, 0x07, 0x88, 0x1A, 0x88, 0x07, 0x88, 0x1A, 
0x88, 0x07, 0x89, 0x18, 0x89, 0x08, 0x88, 0x18, 0x89, 0x08, 0x88, 0x18, 0x89, 0x08, 0x89, 0x16, 
0x8A, 0x08, 0x89, 0x16, 0x8A, 0x09, 0x89, 0x14, 0x8B, 0x09, 0x8A, 0x12, 0x8C, 0x0A, 0x8A, 0x10, 
0x8D, 0x0A, 0x8C, 0x0C, 0x8F, 0x0B, 0x8E, 0x07, 0x91, 0x0C, 0x9D, 0x00, 0x88, 0x0D, 0x9B, 0x01, 
0x88, 0x0E, 0x99, 0x02, 0x88, 0x0F, 0x97, 0x03, 0x88, 0x10, 0x95, 0x04, 0x88, 0x11, 0x92, 0x06, 
0x87, 0x14, 0x8E, 0x08, 0x87, 0x17, 0x88, 0x0A, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 0x88, 0x2B, 
0x87, 0x2B, 0x88, 0x0E, 0x84, 0x17, 0x88, 0x0A, 0x88, 0x17, 0x88, 0x0A, 0x89, 0x15, 0x88, 0x0B, 
0x89, 0x15, 0x88, 0x0C, 0x88, 0x14, 0x89, 0x0C, 0x89, 0x13, 0x88, 0x0D, 0x89, 0x12, 0x89, 0x0E, 
0x89, 0x10, 0x89, 0x0F, 0x8A, 0x0E, 0x8A, 0x0F, 0x8B, 0x0B, 0x8B, 0x11, 0x8C, 0x07, 0x8C, 0x13, 
0x9F, 0x14, 0x9E, 0x16, 0x9C, 0x18, 0x9A, 0x1B, 0x97, 0x1D, 0x94, 0x21, 0x90, 0x26, 0x89, 0x4C
};

const unsigned char chr_f72_3A[] = 
{
0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x23, 0x88, 0x13, 
0x88, 0x13, 0x88, 0x13, 0x88, 0x13, 0x88, 0x13, 
0x88, 0x13, 0x88, 0x13, 0x88, 0x13, 0x88, 0x7F, 
0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x33, 0x88, 
0x13, 0x88, 0x13, 0x88, 0x13, 0x88, 0x13, 0x88, 
0x13, 0x88, 0x13, 0x88, 0x13, 0x88, 0x13, 0x88, 
0x44
};
const unsigned char * const chrtbl_f72[96] =        // character pointer table
{
        chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, 
        chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_2D, chr_f72_2E, chr_f72_20, 
        chr_f72_30, chr_f72_31, chr_f72_32, chr_f72_33, chr_f72_34, chr_f72_35, chr_f72_36, chr_f72_37, 
        chr_f72_38, chr_f72_39, chr_f72_3A, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20,
        chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20,
        chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20,
        chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20,
        chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20,
        chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, 
        chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, 
        chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20,
        chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20, chr_f72_20
};
