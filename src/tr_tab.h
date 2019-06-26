#include <stdint.h>

struct TrTab {
	uint32_t value;
	char characters[6];
};

TrTab tr_tab[] = {
  {0x00A0, {0x20}},                          // NO-BREAK SPACE
  {0x00A1, {0x21}},                          // INVERTED EXCLAMATION MARK
  {0x00A2, {0x63}},                          // CENT SIGN
  {0x00A3, {0x47, 0x42, 0x50}},              // POUND SIGN
  {0x00A5, {0x59}},                          // YEN SIGN
  {0x00A6, {0x7C}},                          // BROKEN BAR
  {0x00A7, {0x53}},                          // SECTION SIGN
  {0x00A8, {0x22}},                          // DIAERESIS
  {0x00A9, {0x28, 0x63, 0x29}},              // COPYRIGHT SIGN
  {0x00AA, {0x61}},                          // FEMININE ORDINAL INDICATOR
  {0x00AB, {0x3C, 0x3C}},                    // LEFT-POINTING DOUBLE ANGLE QUOTATION MARK
  {0x00AC, {0x2D}},                          // NOT SIGN
  {0x00AD, {0x2D}},                          // SOFT HYPHEN
  {0x00AE, {0x28, 0x52, 0x29}},              // REGISTERED SIGN
  {0x00AF, {0x2D}},                          // MACRON
  {0x00B0, {0x20}},                          // DEGREE SIGN
  {0x00B1, {0x2B, 0x2F, 0x2D}},              // PLUS-MINUS SIGN
  {0x00B2, {0x32}},                          // SUPERSCRIPT TWO
  {0x00B3, {0x33}},                          // SUPERSCRIPT THREE
  {0x00B4, {0x27}},                          // ACUTE ACCENT
  {0x00B5, {0x75}},                          // MICRO SIGN
  {0x00B6, {0x50}},                          // PILCROW SIGN
  {0x00B7, {0x2E}},                          // MIDDLE DOT
  {0x00B8, {0x2C}},                          // CEDILLA
  {0x00B9, {0x31}},                          // SUPERSCRIPT ONE
  {0x00BA, {0x6F}},                          // MASCULINE ORDINAL INDICATOR
  {0x00BB, {0x3E, 0x3E}},                    // RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK
  {0x00BC, {0x20, 0x31, 0x2F, 0x34}},        // VULGAR FRACTION ONE QUARTER
  {0x00BD, {0x20, 0x31, 0x2F, 0x32}},        // VULGAR FRACTION ONE HALF
  {0x00BE, {0x20, 0x33, 0x2F, 0x34}},        // VULGAR FRACTION THREE QUARTERS
  {0x00BF, {0x3F}},                          // INVERTED QUESTION MARK
  {0x00C0, {0x41}},                          // LATIN CAPITAL LETTER A WITH GRAVE
  {0x00C1, {0x41}},                          // LATIN CAPITAL LETTER A WITH ACUTE
  {0x00C2, {0x41}},                          // LATIN CAPITAL LETTER A WITH CIRCUMFLEX
  {0x00C3, {0x41}},                          // LATIN CAPITAL LETTER A WITH TILDE
  {0x00C4, {0x41}},                          // LATIN CAPITAL LETTER A WITH DIAERESIS
  {0x00C5, {0x41}},                          // LATIN CAPITAL LETTER A WITH RING ABOVE
  {0x00C6, {0x41, 0x45}},                    // LATIN CAPITAL LETTER AE
  {0x00C7, {0x43}},                          // LATIN CAPITAL LETTER C WITH CEDILLA
  {0x00C8, {0x45}},                          // LATIN CAPITAL LETTER E WITH GRAVE
  {0x00C9, {0x45}},                          // LATIN CAPITAL LETTER E WITH ACUTE
  {0x00CA, {0x45}},                          // LATIN CAPITAL LETTER E WITH CIRCUMFLEX
  {0x00CB, {0x45}},                          // LATIN CAPITAL LETTER E WITH DIAERESIS
  {0x00CC, {0x49}},                          // LATIN CAPITAL LETTER I WITH GRAVE
  {0x00CD, {0x49}},                          // LATIN CAPITAL LETTER I WITH ACUTE
  {0x00CE, {0x49}},                          // LATIN CAPITAL LETTER I WITH CIRCUMFLEX
  {0x00CF, {0x49}},                          // LATIN CAPITAL LETTER I WITH DIAERESIS
  {0x00D0, {0x44, 0x68}},                    // LATIN CAPITAL LETTER ETH
  {0x00D1, {0x4E}},                          // LATIN CAPITAL LETTER N WITH TILDE
  {0x00D2, {0x4F}},                          // LATIN CAPITAL LETTER O WITH GRAVE
  {0x00D3, {0x4F}},                          // LATIN CAPITAL LETTER O WITH ACUTE
  {0x00D4, {0x4F}},                          // LATIN CAPITAL LETTER O WITH CIRCUMFLEX
  {0x00D5, {0x4F}},                          // LATIN CAPITAL LETTER O WITH TILDE
  {0x00D6, {0x4F}},                          // LATIN CAPITAL LETTER O WITH DIAERESIS
  {0x00D7, {0x78}},                          // MULTIPLICATION SIGN
  {0x00D8, {0x4F}},                          // LATIN CAPITAL LETTER O WITH STROKE
  {0x00D9, {0x55}},                          // LATIN CAPITAL LETTER U WITH GRAVE
  {0x00DA, {0x55}},                          // LATIN CAPITAL LETTER U WITH ACUTE
  {0x00DB, {0x55}},                          // LATIN CAPITAL LETTER U WITH CIRCUMFLEX
  {0x00DC, {0x55}},                          // LATIN CAPITAL LETTER U WITH DIAERESIS
  {0x00DD, {0x59}},                          // LATIN CAPITAL LETTER Y WITH ACUTE
  {0x00DE, {0x54, 0x68}},                    // LATIN CAPITAL LETTER THORN
  {0x00DF, {0x73, 0x73}},                    // LATIN SMALL LETTER SHARP S
  {0x00E0, {0x61}},                          // LATIN SMALL LETTER A WITH GRAVE
  {0x00E1, {0x61}},                          // LATIN SMALL LETTER A WITH ACUTE
  {0x00E2, {0x61}},                          // LATIN SMALL LETTER A WITH CIRCUMFLEX
  {0x00E3, {0x61}},                          // LATIN SMALL LETTER A WITH TILDE
  {0x00E4, {0x61}},                          // LATIN SMALL LETTER A WITH DIAERESIS
  {0x00E5, {0x61}},                          // LATIN SMALL LETTER A WITH RING ABOVE
  {0x00E6, {0x61, 0x65}},                    // LATIN SMALL LETTER AE
  {0x00E7, {0x63}},                          // LATIN SMALL LETTER C WITH CEDILLA
  {0x00E8, {0x65}},                          // LATIN SMALL LETTER E WITH GRAVE
  {0x00E9, {0x65}},                          // LATIN SMALL LETTER E WITH ACUTE
  {0x00EA, {0x65}},                          // LATIN SMALL LETTER E WITH CIRCUMFLEX
  {0x00EB, {0x65}},                          // LATIN SMALL LETTER E WITH DIAERESIS
  {0x00EC, {0x69}},                          // LATIN SMALL LETTER I WITH GRAVE
  {0x00ED, {0x69}},                          // LATIN SMALL LETTER I WITH ACUTE
  {0x00EE, {0x69}},                          // LATIN SMALL LETTER I WITH CIRCUMFLEX
  {0x00EF, {0x69}},                          // LATIN SMALL LETTER I WITH DIAERESIS
  {0x00F0, {0x64, 0x68}},                    // LATIN SMALL LETTER ETH
  {0x00F1, {0x6E}},                          // LATIN SMALL LETTER N WITH TILDE
  {0x00F2, {0x6F}},                          // LATIN SMALL LETTER O WITH GRAVE
  {0x00F3, {0x6F}},                          // LATIN SMALL LETTER O WITH ACUTE
  {0x00F4, {0x6F}},                          // LATIN SMALL LETTER O WITH CIRCUMFLEX
  {0x00F5, {0x6F}},                          // LATIN SMALL LETTER O WITH TILDE
  {0x00F6, {0x6F}},                          // LATIN SMALL LETTER O WITH DIAERESIS
  {0x00F7, {0x3A}},                          // DIVISION SIGN
  {0x00F8, {0x6F}},                          // LATIN SMALL LETTER O WITH STROKE
  {0x00F9, {0x75}},                          // LATIN SMALL LETTER U WITH GRAVE
  {0x00FA, {0x75}},                          // LATIN SMALL LETTER U WITH ACUTE
  {0x00FB, {0x75}},                          // LATIN SMALL LETTER U WITH CIRCUMFLEX
  {0x00FC, {0x75}},                          // LATIN SMALL LETTER U WITH DIAERESIS
  {0x00FD, {0x79}},                          // LATIN SMALL LETTER Y WITH ACUTE
  {0x00FE, {0x74, 0x68}},                    // LATIN SMALL LETTER THORN
  {0x00FF, {0x79}},                          // LATIN SMALL LETTER Y WITH DIAERESIS
  {0x0100, {0x41}},                          // LATIN CAPITAL LETTER A WITH MACRON
  {0x0101, {0x61}},                          // LATIN SMALL LETTER A WITH MACRON
  {0x0102, {0x41}},                          // LATIN CAPITAL LETTER A WITH BREVE
  {0x0103, {0x61}},                          // LATIN SMALL LETTER A WITH BREVE
  {0x0104, {0x41}},                          // LATIN CAPITAL LETTER A WITH OGONEK
  {0x0105, {0x61}},                          // LATIN SMALL LETTER A WITH OGONEK
  {0x0106, {0x43}},                          // LATIN CAPITAL LETTER C WITH ACUTE
  {0x0107, {0x63}},                          // LATIN SMALL LETTER C WITH ACUTE
  {0x0108, {0x43}},                          // LATIN CAPITAL LETTER C WITH CIRCUMFLEX
  {0x0109, {0x63}},                          // LATIN SMALL LETTER C WITH CIRCUMFLEX
  {0x010A, {0x43}},                          // LATIN CAPITAL LETTER C WITH DOT ABOVE
  {0x010B, {0x63}},                          // LATIN SMALL LETTER C WITH DOT ABOVE
  {0x010C, {0x43}},                          // LATIN CAPITAL LETTER C WITH CARON
  {0x010D, {0x63}},                          // LATIN SMALL LETTER C WITH CARON
  {0x010E, {0x44}},                          // LATIN CAPITAL LETTER D WITH CARON
  {0x010F, {0x64}},                          // LATIN SMALL LETTER D WITH CARON
  {0x0110, {0x44}},                          // LATIN CAPITAL LETTER D WITH STROKE
  {0x0111, {0x64}},                          // LATIN SMALL LETTER D WITH STROKE
  {0x0112, {0x45}},                          // LATIN CAPITAL LETTER E WITH MACRON
  {0x0113, {0x65}},                          // LATIN SMALL LETTER E WITH MACRON
  {0x0114, {0x45}},                          // LATIN CAPITAL LETTER E WITH BREVE
  {0x0115, {0x65}},                          // LATIN SMALL LETTER E WITH BREVE
  {0x0116, {0x45}},                          // LATIN CAPITAL LETTER E WITH DOT ABOVE
  {0x0117, {0x65}},                          // LATIN SMALL LETTER E WITH DOT ABOVE
  {0x0118, {0x45}},                          // LATIN CAPITAL LETTER E WITH OGONEK
  {0x0119, {0x65}},                          // LATIN SMALL LETTER E WITH OGONEK
  {0x011A, {0x45}},                          // LATIN CAPITAL LETTER E WITH CARON
  {0x011B, {0x65}},                          // LATIN SMALL LETTER E WITH CARON
  {0x011C, {0x47}},                          // LATIN CAPITAL LETTER G WITH CIRCUMFLEX
  {0x011D, {0x67}},                          // LATIN SMALL LETTER G WITH CIRCUMFLEX
  {0x011E, {0x47}},                          // LATIN CAPITAL LETTER G WITH BREVE
  {0x011F, {0x67}},                          // LATIN SMALL LETTER G WITH BREVE
  {0x0120, {0x47}},                          // LATIN CAPITAL LETTER G WITH DOT ABOVE
  {0x0121, {0x67}},                          // LATIN SMALL LETTER G WITH DOT ABOVE
  {0x0122, {0x47}},                          // LATIN CAPITAL LETTER G WITH CEDILLA
  {0x0123, {0x67}},                          // LATIN SMALL LETTER G WITH CEDILLA
  {0x0124, {0x48}},                          // LATIN CAPITAL LETTER H WITH CIRCUMFLEX
  {0x0125, {0x68}},                          // LATIN SMALL LETTER H WITH CIRCUMFLEX
  {0x0126, {0x48}},                          // LATIN CAPITAL LETTER H WITH STROKE
  {0x0127, {0x68}},                          // LATIN SMALL LETTER H WITH STROKE
  {0x0128, {0x49}},                          // LATIN CAPITAL LETTER I WITH TILDE
  {0x0129, {0x69}},                          // LATIN SMALL LETTER I WITH TILDE
  {0x012A, {0x49}},                          // LATIN CAPITAL LETTER I WITH MACRON
  {0x012B, {0x69}},                          // LATIN SMALL LETTER I WITH MACRON
  {0x012C, {0x49}},                          // LATIN CAPITAL LETTER I WITH BREVE
  {0x012D, {0x69}},                          // LATIN SMALL LETTER I WITH BREVE
  {0x012E, {0x49}},                          // LATIN CAPITAL LETTER I WITH OGONEK
  {0x012F, {0x69}},                          // LATIN SMALL LETTER I WITH OGONEK
  {0x0130, {0x49}},                          // LATIN CAPITAL LETTER I WITH DOT ABOVE
  {0x0131, {0x69}},                          // LATIN SMALL LETTER DOTLESS I
  {0x0132, {0x49, 0x4A}},                    // LATIN CAPITAL LIGATURE IJ
  {0x0133, {0x69, 0x6A}},                    // LATIN SMALL LIGATURE IJ
  {0x0134, {0x4A}},                          // LATIN CAPITAL LETTER J WITH CIRCUMFLEX
  {0x0135, {0x6A}},                          // LATIN SMALL LETTER J WITH CIRCUMFLEX
  {0x0136, {0x4B}},                          // LATIN CAPITAL LETTER K WITH CEDILLA
  {0x0137, {0x6B}},                          // LATIN SMALL LETTER K WITH CEDILLA
  {0x0138, {0x6B}},                          // LATIN SMALL LETTER KRA
  {0x0139, {0x4C}},                          // LATIN CAPITAL LETTER L WITH ACUTE
  {0x013A, {0x6C}},                          // LATIN SMALL LETTER L WITH ACUTE
  {0x013B, {0x4C}},                          // LATIN CAPITAL LETTER L WITH CEDILLA
  {0x013C, {0x6C}},                          // LATIN SMALL LETTER L WITH CEDILLA
  {0x013D, {0x4C}},                          // LATIN CAPITAL LETTER L WITH CARON
  {0x013E, {0x6C}},                          // LATIN SMALL LETTER L WITH CARON
  {0x013F, {0x4C}},                          // LATIN CAPITAL LETTER L WITH MIDDLE DOT
  {0x0140, {0x6C}},                          // LATIN SMALL LETTER L WITH MIDDLE DOT
  {0x0141, {0x4C}},                          // LATIN CAPITAL LETTER L WITH STROKE
  {0x0142, {0x6C}},                          // LATIN SMALL LETTER L WITH STROKE
  {0x0143, {0x4E}},                          // LATIN CAPITAL LETTER N WITH ACUTE
  {0x0144, {0x6E}},                          // LATIN SMALL LETTER N WITH ACUTE
  {0x0145, {0x4E}},                          // LATIN CAPITAL LETTER N WITH CEDILLA
  {0x0146, {0x6E}},                          // LATIN SMALL LETTER N WITH CEDILLA
  {0x0147, {0x4E}},                          // LATIN CAPITAL LETTER N WITH CARON
  {0x0148, {0x6E}},                          // LATIN SMALL LETTER N WITH CARON
  {0x0149, {0x27, 0x6E}},                    // LATIN SMALL LETTER N PRECEDED BY APOSTROPHE
  {0x014A, {0x4E}},                          // LATIN CAPITAL LETTER ENG
  {0x014B, {0x6E}},                          // LATIN SMALL LETTER ENG
  {0x014C, {0x4F}},                          // LATIN CAPITAL LETTER O WITH MACRON
  {0x014D, {0x6F}},                          // LATIN SMALL LETTER O WITH MACRON
  {0x014E, {0x4F}},                          // LATIN CAPITAL LETTER O WITH BREVE
  {0x014F, {0x6F}},                          // LATIN SMALL LETTER O WITH BREVE
  {0x0150, {0x4F}},                          // LATIN CAPITAL LETTER O WITH DOUBLE ACUTE
  {0x0151, {0x6F}},                          // LATIN SMALL LETTER O WITH DOUBLE ACUTE
  {0x0152, {0x4F, 0x45}},                    // LATIN CAPITAL LIGATURE OE
  {0x0153, {0x6F, 0x65}},                    // LATIN SMALL LIGATURE OE
  {0x0154, {0x52}},                          // LATIN CAPITAL LETTER R WITH ACUTE
  {0x0155, {0x72}},                          // LATIN SMALL LETTER R WITH ACUTE
  {0x0156, {0x52}},                          // LATIN CAPITAL LETTER R WITH CEDILLA
  {0x0157, {0x72}},                          // LATIN SMALL LETTER R WITH CEDILLA
  {0x0158, {0x52}},                          // LATIN CAPITAL LETTER R WITH CARON
  {0x0159, {0x72}},                          // LATIN SMALL LETTER R WITH CARON
  {0x015A, {0x53}},                          // LATIN CAPITAL LETTER S WITH ACUTE
  {0x015B, {0x73}},                          // LATIN SMALL LETTER S WITH ACUTE
  {0x015C, {0x53}},                          // LATIN CAPITAL LETTER S WITH CIRCUMFLEX
  {0x015D, {0x73}},                          // LATIN SMALL LETTER S WITH CIRCUMFLEX
  {0x015E, {0x53}},                          // LATIN CAPITAL LETTER S WITH CEDILLA
  {0x015F, {0x73}},                          // LATIN SMALL LETTER S WITH CEDILLA
  {0x0160, {0x53}},                          // LATIN CAPITAL LETTER S WITH CARON
  {0x0161, {0x73}},                          // LATIN SMALL LETTER S WITH CARON
  {0x0162, {0x54}},                          // LATIN CAPITAL LETTER T WITH CEDILLA
  {0x0163, {0x74}},                          // LATIN SMALL LETTER T WITH CEDILLA
  {0x0164, {0x54}},                          // LATIN CAPITAL LETTER T WITH CARON
  {0x0165, {0x74}},                          // LATIN SMALL LETTER T WITH CARON
  {0x0166, {0x54}},                          // LATIN CAPITAL LETTER T WITH STROKE
  {0x0167, {0x74}},                          // LATIN SMALL LETTER T WITH STROKE
  {0x0168, {0x55}},                          // LATIN CAPITAL LETTER U WITH TILDE
  {0x0169, {0x75}},                          // LATIN SMALL LETTER U WITH TILDE
  {0x016A, {0x55}},                          // LATIN CAPITAL LETTER U WITH MACRON
  {0x016B, {0x75}},                          // LATIN SMALL LETTER U WITH MACRON
  {0x016C, {0x55}},                          // LATIN CAPITAL LETTER U WITH BREVE
  {0x016D, {0x75}},                          // LATIN SMALL LETTER U WITH BREVE
  {0x016E, {0x55}},                          // LATIN CAPITAL LETTER U WITH RING ABOVE
  {0x016F, {0x75}},                          // LATIN SMALL LETTER U WITH RING ABOVE
  {0x0170, {0x55}},                          // LATIN CAPITAL LETTER U WITH DOUBLE ACUTE
  {0x0171, {0x75}},                          // LATIN SMALL LETTER U WITH DOUBLE ACUTE
  {0x0172, {0x55}},                          // LATIN CAPITAL LETTER U WITH OGONEK
  {0x0173, {0x75}},                          // LATIN SMALL LETTER U WITH OGONEK
  {0x0174, {0x57}},                          // LATIN CAPITAL LETTER W WITH CIRCUMFLEX
  {0x0175, {0x77}},                          // LATIN SMALL LETTER W WITH CIRCUMFLEX
  {0x0176, {0x59}},                          // LATIN CAPITAL LETTER Y WITH CIRCUMFLEX
  {0x0177, {0x79}},                          // LATIN SMALL LETTER Y WITH CIRCUMFLEX
  {0x0178, {0x59}},                          // LATIN CAPITAL LETTER Y WITH DIAERESIS
  {0x0179, {0x5A}},                          // LATIN CAPITAL LETTER Z WITH ACUTE
  {0x017A, {0x7A}},                          // LATIN SMALL LETTER Z WITH ACUTE
  {0x017B, {0x5A}},                          // LATIN CAPITAL LETTER Z WITH DOT ABOVE
  {0x017C, {0x7A}},                          // LATIN SMALL LETTER Z WITH DOT ABOVE
  {0x017D, {0x5A}},                          // LATIN CAPITAL LETTER Z WITH CARON
  {0x017E, {0x7A}},                          // LATIN SMALL LETTER Z WITH CARON
  {0x017F, {0x73}},                          // LATIN SMALL LETTER LONG S
  {0x0180, {0x62}},                          // LATIN SMALL LETTER B WITH STROKE
  {0x0181, {0x42}},                          // LATIN CAPITAL LETTER B WITH HOOK
  {0x0182, {0x62}},                          // LATIN CAPITAL LETTER B WITH TOPBAR
  {0x0183, {0x62}},                          // LATIN SMALL LETTER B WITH TOPBAR
  {0x0186, {0x4F}},                          // LATIN CAPITAL LETTER OPEN O
  {0x0187, {0x43}},                          // LATIN CAPITAL LETTER C WITH HOOK
  {0x0188, {0x63}},                          // LATIN SMALL LETTER C WITH HOOK
  {0x0189, {0x44}},                          // LATIN CAPITAL LETTER AFRICAN D
  {0x018A, {0x44}},                          // LATIN CAPITAL LETTER D WITH HOOK
  {0x018B, {0x64}},                          // LATIN CAPITAL LETTER D WITH TOPBAR
  {0x018C, {0x64}},                          // LATIN SMALL LETTER D WITH TOPBAR
  {0x018E, {0x45}},                          // LATIN CAPITAL LETTER REVERSED E
  {0x0190, {0x45}},                          // LATIN CAPITAL LETTER OPEN E
  {0x0191, {0x46}},                          // LATIN CAPITAL LETTER F WITH HOOK
  {0x0192, {0x66}},                          // LATIN SMALL LETTER F WITH HOOK
  {0x0193, {0x47}},                          // LATIN CAPITAL LETTER G WITH HOOK
  {0x0195, {0x68, 0x76}},                    // LATIN SMALL LETTER HV
  {0x0197, {0x49}},                          // LATIN CAPITAL LETTER I WITH STROKE
  {0x0198, {0x4B}},                          // LATIN CAPITAL LETTER K WITH HOOK
  {0x0199, {0x6B}},                          // LATIN SMALL LETTER K WITH HOOK
  {0x019A, {0x6C}},                          // LATIN SMALL LETTER L WITH BAR
  {0x019C, {0x4D}},                          // LATIN CAPITAL LETTER TURNED M
  {0x019D, {0x4E}},                          // LATIN CAPITAL LETTER N WITH LEFT HOOK
  {0x019E, {0x6E}},                          // LATIN SMALL LETTER N WITH LONG RIGHT LEG
  {0x019F, {0x4F}},                          // LATIN CAPITAL LETTER O WITH MIDDLE TILDE
  {0x01A0, {0x4F}},                          // LATIN CAPITAL LETTER O WITH HORN
  {0x01A1, {0x6F}},                          // LATIN SMALL LETTER O WITH HORN
  {0x01A2, {0x4F, 0x49}},                    // LATIN CAPITAL LETTER OI
  {0x01A3, {0x6F, 0x69}},                    // LATIN SMALL LETTER OI
  {0x01A4, {0x50}},                          // LATIN CAPITAL LETTER P WITH HOOK
  {0x01A5, {0x70}},                          // LATIN SMALL LETTER P WITH HOOK
  {0x01A6, {0x52}},                          // LATIN LETTER YR
  {0x01AB, {0x74}},                          // LATIN SMALL LETTER T WITH PALATAL HOOK
  {0x01AC, {0x54}},                          // LATIN CAPITAL LETTER T WITH HOOK
  {0x01AD, {0x74}},                          // LATIN SMALL LETTER T WITH HOOK
  {0x01AE, {0x54}},                          // LATIN CAPITAL LETTER T WITH RETROFLEX HOOK
  {0x01AF, {0x55}},                          // LATIN CAPITAL LETTER U WITH HORN
  {0x01B0, {0x75}},                          // LATIN SMALL LETTER U WITH HORN
  {0x01B2, {0x56}},                          // LATIN CAPITAL LETTER V WITH HOOK
  {0x01B3, {0x59}},                          // LATIN CAPITAL LETTER Y WITH HOOK
  {0x01B4, {0x79}},                          // LATIN SMALL LETTER Y WITH HOOK
  {0x01B5, {0x5A}},                          // LATIN CAPITAL LETTER Z WITH STROKE
  {0x01B6, {0x7A}},                          // LATIN SMALL LETTER Z WITH STROKE
  {0x01C4, {0x44, 0x5A}},                    // LATIN CAPITAL LETTER DZ WITH CARON
  {0x01C5, {0x44, 0x7A}},                    // LATIN CAPITAL LETTER D WITH SMALL LETTER Z WITH CARON
  {0x01C6, {0x64, 0x7A}},                    // LATIN SMALL LETTER DZ WITH CARON
  {0x01C7, {0x4C, 0x4A}},                    // LATIN CAPITAL LETTER LJ
  {0x01C8, {0x4C, 0x6A}},                    // LATIN CAPITAL LETTER L WITH SMALL LETTER J
  {0x01C9, {0x6C, 0x6A}},                    // LATIN SMALL LETTER LJ
  {0x01CA, {0x4E, 0x4A}},                    // LATIN CAPITAL LETTER NJ
  {0x01CB, {0x4E, 0x6A}},                    // LATIN CAPITAL LETTER N WITH SMALL LETTER J
  {0x01CC, {0x6E, 0x6A}},                    // LATIN SMALL LETTER NJ
  {0x01CD, {0x41}},                          // LATIN CAPITAL LETTER A WITH CARON
  {0x01CE, {0x61}},                          // LATIN SMALL LETTER A WITH CARON
  {0x01CF, {0x49}},                          // LATIN CAPITAL LETTER I WITH CARON
  {0x01D0, {0x69}},                          // LATIN SMALL LETTER I WITH CARON
  {0x01D1, {0x4F}},                          // LATIN CAPITAL LETTER O WITH CARON
  {0x01D2, {0x6F}},                          // LATIN SMALL LETTER O WITH CARON
  {0x01D3, {0x55}},                          // LATIN CAPITAL LETTER U WITH CARON
  {0x01D4, {0x75}},                          // LATIN SMALL LETTER U WITH CARON
  {0x01D5, {0x55}},                          // LATIN CAPITAL LETTER U WITH DIAERESIS AND MACRON
  {0x01D6, {0x75}},                          // LATIN SMALL LETTER U WITH DIAERESIS AND MACRON
  {0x01D7, {0x55}},                          // LATIN CAPITAL LETTER U WITH DIAERESIS AND ACUTE
  {0x01D8, {0x75}},                          // LATIN SMALL LETTER U WITH DIAERESIS AND ACUTE
  {0x01D9, {0x55}},                          // LATIN CAPITAL LETTER U WITH DIAERESIS AND CARON
  {0x01DA, {0x75}},                          // LATIN SMALL LETTER U WITH DIAERESIS AND CARON
  {0x01DB, {0x55}},                          // LATIN CAPITAL LETTER U WITH DIAERESIS AND GRAVE
  {0x01DC, {0x75}},                          // LATIN SMALL LETTER U WITH DIAERESIS AND GRAVE
  {0x01DD, {0x65}},                          // LATIN SMALL LETTER TURNED E
  {0x01DE, {0x41}},                          // LATIN CAPITAL LETTER A WITH DIAERESIS AND MACRON
  {0x01DF, {0x61}},                          // LATIN SMALL LETTER A WITH DIAERESIS AND MACRON
  {0x01E0, {0x41}},                          // LATIN CAPITAL LETTER A WITH DOT ABOVE AND MACRON
  {0x01E1, {0x61}},                          // LATIN SMALL LETTER A WITH DOT ABOVE AND MACRON
  {0x01E2, {0x41, 0x45}},                    // LATIN CAPITAL LETTER AE WITH MACRON
  {0x01E3, {0x61, 0x65}},                    // LATIN SMALL LETTER AE WITH MACRON
  {0x01E4, {0x47}},                          // LATIN CAPITAL LETTER G WITH STROKE
  {0x01E5, {0x67}},                          // LATIN SMALL LETTER G WITH STROKE
  {0x01E6, {0x47}},                          // LATIN CAPITAL LETTER G WITH CARON
  {0x01E7, {0x67}},                          // LATIN SMALL LETTER G WITH CARON
  {0x01E8, {0x4B}},                          // LATIN CAPITAL LETTER K WITH CARON
  {0x01E9, {0x6B}},                          // LATIN SMALL LETTER K WITH CARON
  {0x01EA, {0x4F}},                          // LATIN CAPITAL LETTER O WITH OGONEK
  {0x01EB, {0x6F}},                          // LATIN SMALL LETTER O WITH OGONEK
  {0x01EC, {0x4F}},                          // LATIN CAPITAL LETTER O WITH OGONEK AND MACRON
  {0x01ED, {0x6F}},                          // LATIN SMALL LETTER O WITH OGONEK AND MACRON
  {0x01F0, {0x6A}},                          // LATIN SMALL LETTER J WITH CARON
  {0x01F1, {0x44, 0x5A}},                    // LATIN CAPITAL LETTER DZ
  {0x01F2, {0x44, 0x7A}},                    // LATIN CAPITAL LETTER D WITH SMALL LETTER Z
  {0x01F3, {0x64, 0x7A}},                    // LATIN SMALL LETTER DZ
  {0x01F4, {0x47}},                          // LATIN CAPITAL LETTER G WITH ACUTE
  {0x01F5, {0x67}},                          // LATIN SMALL LETTER G WITH ACUTE
  {0x01F8, {0x4E}},                          // LATIN CAPITAL LETTER N WITH GRAVE
  {0x01F9, {0x6E}},                          // LATIN SMALL LETTER N WITH GRAVE
  {0x01FA, {0x41}},                          // LATIN CAPITAL LETTER A WITH RING ABOVE AND ACUTE
  {0x01FB, {0x61}},                          // LATIN SMALL LETTER A WITH RING ABOVE AND ACUTE
  {0x01FC, {0x41, 0x45}},                    // LATIN CAPITAL LETTER AE WITH ACUTE
  {0x01FD, {0x61, 0x65}},                    // LATIN SMALL LETTER AE WITH ACUTE
  {0x01FE, {0x4F}},                          // LATIN CAPITAL LETTER O WITH STROKE AND ACUTE
  {0x01FF, {0x6F}},                          // LATIN SMALL LETTER O WITH STROKE AND ACUTE
  {0x0200, {0x41}},                          // LATIN CAPITAL LETTER A WITH DOUBLE GRAVE
  {0x0201, {0x61}},                          // LATIN SMALL LETTER A WITH DOUBLE GRAVE
  {0x0202, {0x41}},                          // LATIN CAPITAL LETTER A WITH INVERTED BREVE
  {0x0203, {0x61}},                          // LATIN SMALL LETTER A WITH INVERTED BREVE
  {0x0204, {0x45}},                          // LATIN CAPITAL LETTER E WITH DOUBLE GRAVE
  {0x0205, {0x65}},                          // LATIN SMALL LETTER E WITH DOUBLE GRAVE
  {0x0206, {0x45}},                          // LATIN CAPITAL LETTER E WITH INVERTED BREVE
  {0x0207, {0x65}},                          // LATIN SMALL LETTER E WITH INVERTED BREVE
  {0x0208, {0x49}},                          // LATIN CAPITAL LETTER I WITH DOUBLE GRAVE
  {0x0209, {0x69}},                          // LATIN SMALL LETTER I WITH DOUBLE GRAVE
  {0x020A, {0x49}},                          // LATIN CAPITAL LETTER I WITH INVERTED BREVE
  {0x020B, {0x69}},                          // LATIN SMALL LETTER I WITH INVERTED BREVE
  {0x020C, {0x4F}},                          // LATIN CAPITAL LETTER O WITH DOUBLE GRAVE
  {0x020D, {0x6F}},                          // LATIN SMALL LETTER O WITH DOUBLE GRAVE
  {0x020E, {0x4F}},                          // LATIN CAPITAL LETTER O WITH INVERTED BREVE
  {0x020F, {0x6F}},                          // LATIN SMALL LETTER O WITH INVERTED BREVE
  {0x0210, {0x52}},                          // LATIN CAPITAL LETTER R WITH DOUBLE GRAVE
  {0x0211, {0x72}},                          // LATIN SMALL LETTER R WITH DOUBLE GRAVE
  {0x0212, {0x52}},                          // LATIN CAPITAL LETTER R WITH INVERTED BREVE
  {0x0213, {0x72}},                          // LATIN SMALL LETTER R WITH INVERTED BREVE
  {0x0214, {0x55}},                          // LATIN CAPITAL LETTER U WITH DOUBLE GRAVE
  {0x0215, {0x75}},                          // LATIN SMALL LETTER U WITH DOUBLE GRAVE
  {0x0216, {0x55}},                          // LATIN CAPITAL LETTER U WITH INVERTED BREVE
  {0x0217, {0x75}},                          // LATIN SMALL LETTER U WITH INVERTED BREVE
  {0x0218, {0x53}},                          // LATIN CAPITAL LETTER S WITH COMMA BELOW
  {0x0219, {0x73}},                          // LATIN SMALL LETTER S WITH COMMA BELOW
  {0x021A, {0x54}},                          // LATIN CAPITAL LETTER T WITH COMMA BELOW
  {0x021B, {0x74}},                          // LATIN SMALL LETTER T WITH COMMA BELOW
  {0x021E, {0x48}},                          // LATIN CAPITAL LETTER H WITH CARON
  {0x021F, {0x68}},                          // LATIN SMALL LETTER H WITH CARON
  {0x0220, {0x4E}},                          // LATIN CAPITAL LETTER N WITH LONG RIGHT LEG
  {0x0221, {0x64}},                          // LATIN SMALL LETTER D WITH CURL
  {0x0222, {0x4F, 0x55}},                    // LATIN CAPITAL LETTER OU
  {0x0223, {0x6F, 0x75}},                    // LATIN SMALL LETTER OU
  {0x0224, {0x5A}},                          // LATIN CAPITAL LETTER Z WITH HOOK
  {0x0225, {0x7A}},                          // LATIN SMALL LETTER Z WITH HOOK
  {0x0226, {0x41}},                          // LATIN CAPITAL LETTER A WITH DOT ABOVE
  {0x0227, {0x61}},                          // LATIN SMALL LETTER A WITH DOT ABOVE
  {0x0228, {0x45}},                          // LATIN CAPITAL LETTER E WITH CEDILLA
  {0x0229, {0x65}},                          // LATIN SMALL LETTER E WITH CEDILLA
  {0x022A, {0x4F}},                          // LATIN CAPITAL LETTER O WITH DIAERESIS AND MACRON
  {0x022B, {0x6F}},                          // LATIN SMALL LETTER O WITH DIAERESIS AND MACRON
  {0x022C, {0x4F}},                          // LATIN CAPITAL LETTER O WITH TILDE AND MACRON
  {0x022D, {0x6F}},                          // LATIN SMALL LETTER O WITH TILDE AND MACRON
  {0x022E, {0x4F}},                          // LATIN CAPITAL LETTER O WITH DOT ABOVE
  {0x022F, {0x6F}},                          // LATIN SMALL LETTER O WITH DOT ABOVE
  {0x0230, {0x4F}},                          // LATIN CAPITAL LETTER O WITH DOT ABOVE AND MACRON
  {0x0231, {0x6F}},                          // LATIN SMALL LETTER O WITH DOT ABOVE AND MACRON
  {0x0232, {0x59}},                          // LATIN CAPITAL LETTER Y WITH MACRON
  {0x0233, {0x79}},                          // LATIN SMALL LETTER Y WITH MACRON
  {0x0234, {0x6C}},                          // LATIN SMALL LETTER L WITH CURL
  {0x0235, {0x6E}},                          // LATIN SMALL LETTER N WITH CURL
  {0x0237, {0x4A}},                          // LATIN SMALL LETTER DOTLESS J
  {0x023A, {0x41}},                          // LATIN CAPITAL LETTER A WITH STROKE
  {0x023B, {0x43}},                          // LATIN CAPITAL LETTER C WITH STROKE
  {0x023C, {0x63}},                          // LATIN SMALL LETTER C WITH STROKE
  {0x023D, {0x4C}},                          // LATIN CAPITAL LETTER L WITH BAR
  {0x023E, {0x54}},                          // LATIN CAPITAL LETTER T WITH DIAGONAL STROKE
  {0x023F, {0x73}},                          // LATIN SMALL LETTER S WITH SWASH TAIL
  {0x0240, {0x7A}},                          // LATIN SMALL LETTER Z WITH SWASH TAIL
  {0x0243, {0x42}},                          // LATIN CAPITAL LETTER B WITH STROKE
  {0x0244, {0x55}},                          // LATIN CAPITAL LETTER U BAR
  {0x0245, {0x56}},                          // LATIN CAPITAL LETTER TURNED V
  {0x0246, {0x45}},                          // LATIN CAPITAL LETTER E WITH STROKE
  {0x0247, {0x65}},                          // LATIN SMALL LETTER E WITH STROKE
  {0x0248, {0x4A}},                          // LATIN CAPITAL LETTER J WITH STROKE
  {0x0249, {0x6A}},                          // LATIN SMALL LETTER J WITH STROKE
  {0x024A, {0x51}},                          // LATIN CAPITAL LETTER SMALL Q WITH HOOK TAIL
  {0x024B, {0x71}},                          // LATIN SMALL LETTER Q WITH HOOK TAIL
  {0x024C, {0x52}},                          // LATIN CAPITAL LETTER R WITH STROKE
  {0x024D, {0x72}},                          // LATIN SMALL LETTER R WITH STROKE
  {0x024E, {0x59}},                          // LATIN CAPITAL LETTER Y WITH STROKE
  {0x024F, {0x79}},                          // LATIN SMALL LETTER Y WITH STROKE
  {0x0250, {0x61}},                          // LATIN SMALL LETTER TURNED A
  {0x0251, {0x61}},                          // LATIN SMALL LETTER ALPHA
  {0x0252, {0x61}},                          // LATIN SMALL LETTER TURNED ALPHA
  {0x0253, {0x62}},                          // LATIN SMALL LETTER B WITH HOOK
  {0x0254, {0x6F}},                          // LATIN SMALL LETTER OPEN O
  {0x0255, {0x63}},                          // LATIN SMALL LETTER C WITH CURL
  {0x0256, {0x64}},                          // LATIN SMALL LETTER D WITH TAIL
  {0x0257, {0x64}},                          // LATIN SMALL LETTER D WITH HOOK
  {0x0258, {0x65}},                          // LATIN SMALL LETTER REVERSED E
  {0x025B, {0x65}},                          // LATIN SMALL LETTER OPEN E
  {0x025C, {0x45}},                          // LATIN SMALL LETTER REVERSED OPEN E
  {0x0260, {0x67}},                          // LATIN SMALL LETTER G WITH HOOK
  {0x0261, {0x67}},                          // LATIN SMALL LETTER SCRIPT G
  {0x0262, {0x47}},                          // LATIN LETTER SMALL CAPITAL G
  {0x0265, {0x68}},                          // LATIN SMALL LETTER TURNED H
  {0x0266, {0x68}},                          // LATIN SMALL LETTER H WITH HOOK
  {0x0268, {0x69}},                          // LATIN SMALL LETTER I WITH STROKE
  {0x026A, {0x49}},                          // LATIN LETTER SMALL CAPITAL I
  {0x026B, {0x6C}},                          // LATIN SMALL LETTER L WITH MIDDLE TILDE
  {0x026C, {0x6C}},                          // LATIN SMALL LETTER L WITH BELT
  {0x026D, {0x6C}},                          // LATIN SMALL LETTER L WITH RETROFLEX HOOK
  {0x026F, {0x6D}},                          // LATIN SMALL LETTER TURNED M
  {0x0270, {0x6D}},                          // LATIN SMALL LETTER TURNED M WITH LONG LEG
  {0x0271, {0x6D}},                          // LATIN SMALL LETTER M WITH HOOK
  {0x0272, {0x6E}},                          // LATIN SMALL LETTER N WITH LEFT HOOK
  {0x0273, {0x6E}},                          // LATIN SMALL LETTER N WITH RETROFLEX HOOK
  {0x0274, {0x4E}},                          // LATIN LETTER SMALL CAPITAL N
  {0x0275, {0x6F}},                          // LATIN SMALL LETTER BARRED O
  {0x0276, {0x45}},                          // LATIN LETTER SMALL CAPITAL OE
  {0x0279, {0x72}},                          // LATIN SMALL LETTER TURNED R
  {0x027B, {0x72}},                          // LATIN SMALL LETTER TURNED R WITH HOOK
  {0x027D, {0x72}},                          // LATIN SMALL LETTER R WITH TAIL
  {0x0280, {0x52}},                          // LATIN LETTER SMALL CAPITAL R
  {0x0281, {0x52}},                          // LATIN LETTER SMALL CAPITAL INVERTED R
  {0x0282, {0x73}},                          // LATIN SMALL LETTER S WITH HOOK
  {0x0287, {0x74}},                          // LATIN SMALL LETTER TURNED T
  {0x0288, {0x74}},                          // LATIN SMALL LETTER T WITH RETROFLEX HOOK
  {0x0289, {0x75}},                          // LATIN SMALL LETTER U BAR
  {0x028B, {0x76}},                          // LATIN SMALL LETTER V WITH HOOK
  {0x028C, {0x76}},                          // LATIN SMALL LETTER TURNED V
  {0x028D, {0x57}},                          // LATIN SMALL LETTER TURNED W
  {0x028E, {0x59}},                          // LATIN SMALL LETTER TURNED Y
  {0x028F, {0x59}},                          // LATIN LETTER SMALL CAPITAL Y
  {0x0290, {0x7A}},                          // LATIN SMALL LETTER Z WITH RETROFLEX HOOK
  {0x0291, {0x7A}},                          // LATIN SMALL LETTER Z WITH CURL
  {0x0297, {0x43}},                          // LATIN LETTER STRETCHED C
  {0x0299, {0x42}},                          // LATIN LETTER SMALL CAPITAL B
  {0x029B, {0x47}},                          // LATIN LETTER SMALL CAPITAL G WITH HOOK
  {0x029C, {0x48}},                          // LATIN LETTER SMALL CAPITAL H
  {0x029D, {0x6A}},                          // LATIN SMALL LETTER J WITH CROSSED-TAIL
  {0x029E, {0x6B}},                          // LATIN SMALL LETTER TURNED K
  {0x029F, {0x4C}},                          // LATIN LETTER SMALL CAPITAL L
  {0x02A0, {0x71}},                          // LATIN SMALL LETTER Q WITH HOOK
  {0x02AE, {0x68}},                          // LATIN SMALL LETTER TURNED H WITH FISHHOOK
  {0x02AF, {0x68}},                          // LATIN SMALL LETTER TURNED H WITH FISHHOOK AND TAIL
  {0x02B0, {0x68}},                          // MODIFIER LETTER SMALL H
  {0x02B1, {0x68}},                          // MODIFIER LETTER SMALL H WITH HOOK
  {0x02B2, {0x6A}},                          // MODIFIER LETTER SMALL J
  {0x02B3, {0x72}},                          // MODIFIER LETTER SMALL R
  {0x02B4, {0x72}},                          // MODIFIER LETTER SMALL TURNED R
  {0x02B5, {0x72}},                          // MODIFIER LETTER SMALL TURNED R WITH HOOK
  {0x02B6, {0x52}},                          // MODIFIER LETTER SMALL CAPITAL INVERTED R
  {0x02B7, {0x77}},                          // MODIFIER LETTER SMALL W
  {0x02B8, {0x79}},                          // MODIFIER LETTER SMALL Y
  {0x02B9, {0x27}},                          // MODIFIER LETTER PRIME
  {0x02BC, {0x27}},                          // MODIFIER LETTER APOSTROPHE
  {0x02C6, {0x5E}},                          // MODIFIER LETTER CIRCUMFLEX ACCENT
  {0x02C8, {0x27}},                          // MODIFIER LETTER VERTICAL LINE
  {0x02CC, {0x2C}},                          // MODIFIER LETTER LOW VERTICAL LINE
  {0x02D0, {0x3A}},                          // MODIFIER LETTER TRIANGULAR COLON
  {0x02DC, {0x7E}},                          // SMALL TILDE
  {0x02DD, {0x22}},                          // DOUBLE ACUTE ACCENT
  {0x02E1, {0x6C}},                          // MODIFIER LETTER SMALL L
  {0x02E2, {0x53}},                          // MODIFIER LETTER SMALL S
  {0x02E3, {0x58}},                          // MODIFIER LETTER SMALL X
  {0x033D, {0x78}},                          // COMBINING X ABOVE
  {0x0353, {0x78}},                          // COMBINING X BELOW
  {0x0363, {0x61}},                          // COMBINING LATIN SMALL LETTER A
  {0x0364, {0x65}},                          // COMBINING LATIN SMALL LETTER E
  {0x0365, {0x69}},                          // COMBINING LATIN SMALL LETTER I
  {0x0366, {0x6F}},                          // COMBINING LATIN SMALL LETTER O
  {0x0367, {0x75}},                          // COMBINING LATIN SMALL LETTER U
  {0x0368, {0x63}},                          // COMBINING LATIN SMALL LETTER C
  {0x0369, {0x64}},                          // COMBINING LATIN SMALL LETTER D
  {0x036A, {0x68}},                          // COMBINING LATIN SMALL LETTER H
  {0x036B, {0x6D}},                          // COMBINING LATIN SMALL LETTER M
  {0x036C, {0x72}},                          // COMBINING LATIN SMALL LETTER R
  {0x036D, {0x74}},                          // COMBINING LATIN SMALL LETTER T
  {0x036E, {0x76}},                          // COMBINING LATIN SMALL LETTER V
  {0x036F, {0x78}},                          // COMBINING LATIN SMALL LETTER X
  {0x0374, {0x27}},                          // GREEK NUMERAL SIGN
  {0x0375, {0x2C}},                          // GREEK LOWER NUMERAL SIGN
  {0x037E, {0x3B}},                          // GREEK QUESTION MARK
  {0x03C1, {0x70}},                          // GREEK SMALL LETTER RHO
  {0x03FB, {0x4D}},                          // GREEK SMALL LETTER SAN
  {0x0404, {0x45}},                          // CYRILLIC CAPITAL LETTER UKRAINIAN IE
  {0x0406, {0x49}},                          // CYRILLIC CAPITAL LETTER BYELORUSSIAN-UKRAINIAN I
  {0x0410, {0x41}},                          // CYRILLIC CAPITAL LETTER A
  {0x041E, {0x4F}},                          // CYRILLIC CAPITAL LETTER O
  {0x042D, {0x45}},                          // CYRILLIC CAPITAL LETTER E
  {0x0430, {0x61}},                          // CYRILLIC SMALL LETTER A
  {0x043B, {0x6E}},                          // CYRILLIC SMALL LETTER EL
  {0x043E, {0x6F}},                          // CYRILLIC SMALL LETTER O
  {0x044D, {0x45}},                          // CYRILLIC SMALL LETTER E
  {0x0454, {0x45}},                          // CYRILLIC SMALL LETTER UKRAINIAN IE
  {0x04BA, {0x68}},                          // CYRILLIC CAPITAL LETTER SHHA
  {0x04BB, {0x68}},                          // CYRILLIC SMALL LETTER SHHA
  {0x04D0, {0x41}},                          // CYRILLIC CAPITAL LETTER A WITH BREVE
  {0x04D1, {0x61}},                          // CYRILLIC SMALL LETTER A WITH BREVE
  {0x04D2, {0x41}},                          // CYRILLIC CAPITAL LETTER A WITH DIAERESIS
  {0x04D3, {0x61}},                          // CYRILLIC SMALL LETTER A WITH DIAERESIS
  {0x04E6, {0x4F}},                          // CYRILLIC CAPITAL LETTER O WITH DIAERESIS
  {0x04E7, {0x6F}},                          // CYRILLIC SMALL LETTER O WITH DIAERESIS
  {0x04E8, {0x4F}},                          // CYRILLIC CAPITAL LETTER BARRED O
  {0x04E9, {0x6F}},                          // CYRILLIC SMALL LETTER BARRED O
  {0x04EC, {0x45}},                          // CYRILLIC CAPITAL LETTER E WITH DIAERESIS
  {0x04ED, {0x45}},                          // CYRILLIC SMALL LETTER E WITH DIAERESIS
  {0x0501, {0x64}},                          // CYRILLIC SMALL LETTER KOMI DE
  {0x0509, {0x6E}},                          // CYRILLIC SMALL LETTER KOMI LJE
  {0x07C0, {0x30}},                          // NKO DIGIT ZERO
  {0x07CE, {0x75}},                          // NKO LETTER U
  {0x13E7, {0x64}},                          // CHEROKEE LETTER TSU
  {0x144B, {0x68}},                          // CANADIAN SYLLABICS CARRIER H
  {0x1506, {0x73}},                          // CANADIAN SYLLABICS ATHAPASCAN S
  {0x157C, {0x48}},                          // CANADIAN SYLLABICS NUNAVUT H
  {0x15AF, {0x62}},                          // CANADIAN SYLLABICS AIVILIK B
  {0x1646, {0x7A}},                          // CANADIAN SYLLABICS CARRIER Z
  {0x1647, {0x7A}},                          // CANADIAN SYLLABICS CARRIER INITIAL Z
  {0x16B1, {0x52}},                          // RUNIC LETTER RAIDO RAD REID R
  {0x16BA, {0x48}},                          // RUNIC LETTER HAGLAZ H
  {0x16BB, {0x48}},                          // RUNIC LETTER HAEGL H
  {0x16D2, {0x42}},                          // RUNIC LETTER BERKANAN BEORC BJARKAN B
  {0x16E9, {0x71}},                          // RUNIC LETTER Q
  {0x1D00, {0x41}},                          // LATIN LETTER SMALL CAPITAL A
  {0x1D03, {0x42}},                          // LATIN LETTER SMALL CAPITAL BARRED B
  {0x1D04, {0x63}},                          // LATIN LETTER SMALL CAPITAL C
  {0x1D05, {0x44}},                          // LATIN LETTER SMALL CAPITAL D
  {0x1D07, {0x45}},                          // LATIN LETTER SMALL CAPITAL E
  {0x1D08, {0x45}},                          // LATIN SMALL LETTER TURNED OPEN E
  {0x1D09, {0x69}},                          // LATIN SMALL LETTER TURNED I
  {0x1D0A, {0x4A}},                          // LATIN LETTER SMALL CAPITAL J
  {0x1D0C, {0x4C}},                          // LATIN LETTER SMALL CAPITAL L WITH STROKE
  {0x1D0D, {0x4D}},                          // LATIN LETTER SMALL CAPITAL M
  {0x1D0E, {0x4E}},                          // LATIN LETTER SMALL CAPITAL REVERSED N
  {0x1D0F, {0x6F}},                          // LATIN LETTER SMALL CAPITAL O
  {0x1D11, {0x6F}},                          // LATIN SMALL LETTER SIDEWAYS O
  {0x1D13, {0x6F}},                          // LATIN SMALL LETTER SIDEWAYS O WITH STROKE
  {0x1D18, {0x50}},                          // LATIN LETTER SMALL CAPITAL P
  {0x1D19, {0x52}},                          // LATIN LETTER SMALL CAPITAL REVERSED R
  {0x1D1A, {0x52}},                          // LATIN LETTER SMALL CAPITAL TURNED R
  {0x1D1B, {0x54}},                          // LATIN LETTER SMALL CAPITAL T
  {0x1D1C, {0x55}},                          // LATIN LETTER SMALL CAPITAL U
  {0x1D1F, {0x6D}},                          // LATIN SMALL LETTER SIDEWAYS TURNED M
  {0x1D20, {0x56}},                          // LATIN LETTER SMALL CAPITAL V
  {0x1D21, {0x57}},                          // LATIN LETTER SMALL CAPITAL W
  {0x1D22, {0x5A}},                          // LATIN LETTER SMALL CAPITAL Z
  {0x1D2C, {0x41}},                          // MODIFIER LETTER CAPITAL A
  {0x1D2E, {0x42}},                          // MODIFIER LETTER CAPITAL B
  {0x1D2F, {0x42}},                          // MODIFIER LETTER CAPITAL BARRED B
  {0x1D30, {0x44}},                          // MODIFIER LETTER CAPITAL D
  {0x1D31, {0x45}},                          // MODIFIER LETTER CAPITAL E
  {0x1D32, {0x45}},                          // MODIFIER LETTER CAPITAL REVERSED E
  {0x1D33, {0x47}},                          // MODIFIER LETTER CAPITAL G
  {0x1D34, {0x48}},                          // MODIFIER LETTER CAPITAL H
  {0x1D35, {0x49}},                          // MODIFIER LETTER CAPITAL I
  {0x1D36, {0x4A}},                          // MODIFIER LETTER CAPITAL J
  {0x1D37, {0x4B}},                          // MODIFIER LETTER CAPITAL K
  {0x1D38, {0x4C}},                          // MODIFIER LETTER CAPITAL L
  {0x1D39, {0x4D}},                          // MODIFIER LETTER CAPITAL M
  {0x1D3A, {0x4E}},                          // MODIFIER LETTER CAPITAL N
  {0x1D3B, {0x4E}},                          // MODIFIER LETTER CAPITAL REVERSED N
  {0x1D3C, {0x6F}},                          // MODIFIER LETTER CAPITAL O
  {0x1D3E, {0x50}},                          // MODIFIER LETTER CAPITAL P
  {0x1D3F, {0x52}},                          // MODIFIER LETTER CAPITAL R
  {0x1D40, {0x74}},                          // MODIFIER LETTER CAPITAL T
  {0x1D41, {0x55}},                          // MODIFIER LETTER CAPITAL U
  {0x1D42, {0x77}},                          // MODIFIER LETTER CAPITAL W
  {0x1D43, {0x61}},                          // MODIFIER LETTER SMALL A
  {0x1D44, {0x61}},                          // MODIFIER LETTER SMALL TURNED A
  {0x1D47, {0x62}},                          // MODIFIER LETTER SMALL B
  {0x1D48, {0x64}},                          // MODIFIER LETTER SMALL D
  {0x1D49, {0x65}},                          // MODIFIER LETTER SMALL E
  {0x1D4B, {0x45}},                          // MODIFIER LETTER SMALL OPEN E
  {0x1D4C, {0x45}},                          // MODIFIER LETTER SMALL TURNED OPEN E
  {0x1D4D, {0x67}},                          // MODIFIER LETTER SMALL G
  {0x1D4E, {0x69}},                          // MODIFIER LETTER SMALL TURNED I
  {0x1D4F, {0x6B}},                          // MODIFIER LETTER SMALL K
  {0x1D50, {0x6D}},                          // MODIFIER LETTER SMALL M
  {0x1D52, {0x6F}},                          // MODIFIER LETTER SMALL O
  {0x1D56, {0x70}},                          // MODIFIER LETTER SMALL P
  {0x1D57, {0x74}},                          // MODIFIER LETTER SMALL T
  {0x1D58, {0x75}},                          // MODIFIER LETTER SMALL U
  {0x1D5A, {0x6D}},                          // MODIFIER LETTER SMALL TURNED M
  {0x1D5B, {0x76}},                          // MODIFIER LETTER SMALL V
  {0x1D62, {0x69}},                          // LATIN SUBSCRIPT SMALL LETTER I
  {0x1D63, {0x72}},                          // LATIN SUBSCRIPT SMALL LETTER R
  {0x1D64, {0x75}},                          // LATIN SUBSCRIPT SMALL LETTER U
  {0x1D65, {0x76}},                          // LATIN SUBSCRIPT SMALL LETTER V
  {0x1D6C, {0x62}},                          // LATIN SMALL LETTER B WITH MIDDLE TILDE
  {0x1D6D, {0x64}},                          // LATIN SMALL LETTER D WITH MIDDLE TILDE
  {0x1D6E, {0x66}},                          // LATIN SMALL LETTER F WITH MIDDLE TILDE
  {0x1D6F, {0x6D}},                          // LATIN SMALL LETTER M WITH MIDDLE TILDE
  {0x1D70, {0x6E}},                          // LATIN SMALL LETTER N WITH MIDDLE TILDE
  {0x1D71, {0x70}},                          // LATIN SMALL LETTER P WITH MIDDLE TILDE
  {0x1D72, {0x72}},                          // LATIN SMALL LETTER R WITH MIDDLE TILDE
  {0x1D74, {0x53}},                          // LATIN SMALL LETTER S WITH MIDDLE TILDE
  {0x1D75, {0x74}},                          // LATIN SMALL LETTER T WITH MIDDLE TILDE
  {0x1D76, {0x5A}},                          // LATIN SMALL LETTER Z WITH MIDDLE TILDE
  {0x1D77, {0x67}},                          // LATIN SMALL LETTER TURNED G
  {0x1D79, {0x67}},                          // LATIN SMALL LETTER INSULAR G
  {0x1D7B, {0x49}},                          // LATIN SMALL CAPITAL LETTER I WITH STROKE
  {0x1D7D, {0x70}},                          // LATIN SMALL LETTER P WITH STROKE
  {0x1D7E, {0x55}},                          // LATIN SMALL CAPITAL LETTER U WITH STROKE
  {0x1D80, {0x62}},                          // LATIN SMALL LETTER B WITH PALATAL HOOK
  {0x1D81, {0x64}},                          // LATIN SMALL LETTER D WITH PALATAL HOOK
  {0x1D82, {0x66}},                          // LATIN SMALL LETTER F WITH PALATAL HOOK
  {0x1D83, {0x67}},                          // LATIN SMALL LETTER G WITH PALATAL HOOK
  {0x1D84, {0x6B}},                          // LATIN SMALL LETTER K WITH PALATAL HOOK
  {0x1D85, {0x6C}},                          // LATIN SMALL LETTER L WITH PALATAL HOOK
  {0x1D86, {0x6D}},                          // LATIN SMALL LETTER M WITH PALATAL HOOK
  {0x1D87, {0x6E}},                          // LATIN SMALL LETTER N WITH PALATAL HOOK
  {0x1D88, {0x70}},                          // LATIN SMALL LETTER P WITH PALATAL HOOK
  {0x1D89, {0x72}},                          // LATIN SMALL LETTER R WITH PALATAL HOOK
  {0x1D8A, {0x73}},                          // LATIN SMALL LETTER S WITH PALATAL HOOK
  {0x1D8C, {0x56}},                          // LATIN SMALL LETTER V WITH PALATAL HOOK
  {0x1D8D, {0x78}},                          // LATIN SMALL LETTER X WITH PALATAL HOOK
  {0x1D8F, {0x61}},                          // LATIN SMALL LETTER A WITH RETROFLEX HOOK
  {0x1D91, {0x64}},                          // LATIN SMALL LETTER D WITH HOOK AND TAIL
  {0x1D92, {0x65}},                          // LATIN SMALL LETTER E WITH RETROFLEX HOOK
  {0x1D93, {0x45}},                          // LATIN SMALL LETTER OPEN E WITH RETROFLEX HOOK
  {0x1D94, {0x45}},                          // LATIN SMALL LETTER REVERSED OPEN E WITH RETROFLEX HOOK
  {0x1D96, {0x69}},                          // LATIN SMALL LETTER I WITH RETROFLEX HOOK
  {0x1D9C, {0x63}},                          // MODIFIER LETTER SMALL C
  {0x1D9F, {0x45}},                          // MODIFIER LETTER SMALL REVERSED OPEN E
  {0x1DA0, {0x66}},                          // MODIFIER LETTER SMALL F
  {0x1DA1, {0x6A}},                          // MODIFIER LETTER SMALL DOTLESS J WITH STROKE
  {0x1DA2, {0x67}},                          // MODIFIER LETTER SMALL SCRIPT G
  {0x1DA3, {0x68}},                          // MODIFIER LETTER SMALL TURNED H
  {0x1DA4, {0x69}},                          // MODIFIER LETTER SMALL I WITH STROKE
  {0x1DA6, {0x49}},                          // MODIFIER LETTER SMALL CAPITAL I
  {0x1DA7, {0x49}},                          // MODIFIER LETTER SMALL CAPITAL I WITH STROKE
  {0x1DA8, {0x6A}},                          // MODIFIER LETTER SMALL J WITH CROSSED-TAIL
  {0x1DA9, {0x6C}},                          // MODIFIER LETTER SMALL L WITH RETROFLEX HOOK
  {0x1DAA, {0x6C}},                          // MODIFIER LETTER SMALL L WITH PALATAL HOOK
  {0x1DAB, {0x4C}},                          // MODIFIER LETTER SMALL CAPITAL L
  {0x1DAC, {0x6D}},                          // MODIFIER LETTER SMALL M WITH HOOK
  {0x1DAD, {0x6D}},                          // MODIFIER LETTER SMALL TURNED M WITH LONG LEG
  {0x1DAE, {0x6E}},                          // MODIFIER LETTER SMALL N WITH LEFT HOOK
  {0x1DAF, {0x6E}},                          // MODIFIER LETTER SMALL N WITH RETROFLEX HOOK
  {0x1DB0, {0x4E}},                          // MODIFIER LETTER SMALL CAPITAL N
  {0x1DB1, {0x6F}},                          // MODIFIER LETTER SMALL BARRED O
  {0x1DB5, {0x74}},                          // MODIFIER LETTER SMALL T WITH PALATAL HOOK
  {0x1DB9, {0x76}},                          // MODIFIER LETTER SMALL V WITH HOOK
  {0x1DBB, {0x7A}},                          // MODIFIER LETTER SMALL Z
  {0x1DBC, {0x7A}},                          // MODIFIER LETTER SMALL Z WITH RETROFLEX HOOK
  {0x1DBD, {0x7A}},                          // MODIFIER LETTER SMALL Z WITH CURL
  {0x1E00, {0x41}},                          // LATIN CAPITAL LETTER A WITH RING BELOW
  {0x1E01, {0x61}},                          // LATIN SMALL LETTER A WITH RING BELOW
  {0x1E02, {0x42}},                          // LATIN CAPITAL LETTER B WITH DOT ABOVE
  {0x1E03, {0x62}},                          // LATIN SMALL LETTER B WITH DOT ABOVE
  {0x1E04, {0x42}},                          // LATIN CAPITAL LETTER B WITH DOT BELOW
  {0x1E05, {0x62}},                          // LATIN SMALL LETTER B WITH DOT BELOW
  {0x1E06, {0x42}},                          // LATIN CAPITAL LETTER B WITH LINE BELOW
  {0x1E07, {0x62}},                          // LATIN SMALL LETTER B WITH LINE BELOW
  {0x1E08, {0x43}},                          // LATIN CAPITAL LETTER C WITH CEDILLA AND ACUTE
  {0x1E09, {0x63}},                          // LATIN SMALL LETTER C WITH CEDILLA AND ACUTE
  {0x1E0A, {0x44}},                          // LATIN CAPITAL LETTER D WITH DOT ABOVE
  {0x1E0B, {0x64}},                          // LATIN SMALL LETTER D WITH DOT ABOVE
  {0x1E0C, {0x44}},                          // LATIN CAPITAL LETTER D WITH DOT BELOW
  {0x1E0D, {0x64}},                          // LATIN SMALL LETTER D WITH DOT BELOW
  {0x1E0E, {0x44}},                          // LATIN CAPITAL LETTER D WITH LINE BELOW
  {0x1E0F, {0x64}},                          // LATIN SMALL LETTER D WITH LINE BELOW
  {0x1E10, {0x44}},                          // LATIN CAPITAL LETTER D WITH CEDILLA
  {0x1E11, {0x64}},                          // LATIN SMALL LETTER D WITH CEDILLA
  {0x1E12, {0x44}},                          // LATIN CAPITAL LETTER D WITH CIRCUMFLEX BELOW
  {0x1E13, {0x64}},                          // LATIN SMALL LETTER D WITH CIRCUMFLEX BELOW
  {0x1E14, {0x45}},                          // LATIN CAPITAL LETTER E WITH MACRON AND GRAVE
  {0x1E15, {0x65}},                          // LATIN SMALL LETTER E WITH MACRON AND GRAVE
  {0x1E16, {0x45}},                          // LATIN CAPITAL LETTER E WITH MACRON AND ACUTE
  {0x1E17, {0x65}},                          // LATIN SMALL LETTER E WITH MACRON AND ACUTE
  {0x1E18, {0x45}},                          // LATIN CAPITAL LETTER E WITH CIRCUMFLEX BELOW
  {0x1E19, {0x65}},                          // LATIN SMALL LETTER E WITH CIRCUMFLEX BELOW
  {0x1E1A, {0x45}},                          // LATIN CAPITAL LETTER E WITH TILDE BELOW
  {0x1E1B, {0x65}},                          // LATIN SMALL LETTER E WITH TILDE BELOW
  {0x1E1C, {0x45}},                          // LATIN CAPITAL LETTER E WITH CEDILLA AND BREVE
  {0x1E1D, {0x65}},                          // LATIN SMALL LETTER E WITH CEDILLA AND BREVE
  {0x1E1E, {0x46}},                          // LATIN CAPITAL LETTER F WITH DOT ABOVE
  {0x1E1F, {0x66}},                          // LATIN SMALL LETTER F WITH DOT ABOVE
  {0x1E20, {0x47}},                          // LATIN CAPITAL LETTER G WITH MACRON
  {0x1E21, {0x67}},                          // LATIN SMALL LETTER G WITH MACRON
  {0x1E22, {0x48}},                          // LATIN CAPITAL LETTER H WITH DOT ABOVE
  {0x1E23, {0x68}},                          // LATIN SMALL LETTER H WITH DOT ABOVE
  {0x1E24, {0x48}},                          // LATIN CAPITAL LETTER H WITH DOT BELOW
  {0x1E25, {0x68}},                          // LATIN SMALL LETTER H WITH DOT BELOW
  {0x1E26, {0x48}},                          // LATIN CAPITAL LETTER H WITH DIAERESIS
  {0x1E27, {0x68}},                          // LATIN SMALL LETTER H WITH DIAERESIS
  {0x1E28, {0x48}},                          // LATIN CAPITAL LETTER H WITH CEDILLA
  {0x1E29, {0x68}},                          // LATIN SMALL LETTER H WITH CEDILLA
  {0x1E2A, {0x48}},                          // LATIN CAPITAL LETTER H WITH BREVE BELOW
  {0x1E2B, {0x68}},                          // LATIN SMALL LETTER H WITH BREVE BELOW
  {0x1E2C, {0x49}},                          // LATIN CAPITAL LETTER I WITH TILDE BELOW
  {0x1E2D, {0x69}},                          // LATIN SMALL LETTER I WITH TILDE BELOW
  {0x1E2E, {0x49}},                          // LATIN CAPITAL LETTER I WITH DIAERESIS AND ACUTE
  {0x1E2F, {0x69}},                          // LATIN SMALL LETTER I WITH DIAERESIS AND ACUTE
  {0x1E30, {0x4B}},                          // LATIN CAPITAL LETTER K WITH ACUTE
  {0x1E31, {0x6B}},                          // LATIN SMALL LETTER K WITH ACUTE
  {0x1E32, {0x4B}},                          // LATIN CAPITAL LETTER K WITH DOT BELOW
  {0x1E33, {0x6B}},                          // LATIN SMALL LETTER K WITH DOT BELOW
  {0x1E34, {0x4B}},                          // LATIN CAPITAL LETTER K WITH LINE BELOW
  {0x1E35, {0x6B}},                          // LATIN SMALL LETTER K WITH LINE BELOW
  {0x1E36, {0x4C}},                          // LATIN CAPITAL LETTER L WITH DOT BELOW
  {0x1E37, {0x6C}},                          // LATIN SMALL LETTER L WITH DOT BELOW
  {0x1E38, {0x4C}},                          // LATIN CAPITAL LETTER L WITH DOT BELOW AND MACRON
  {0x1E39, {0x6C}},                          // LATIN SMALL LETTER L WITH DOT BELOW AND MACRON
  {0x1E3A, {0x4C}},                          // LATIN CAPITAL LETTER L WITH LINE BELOW
  {0x1E3B, {0x6C}},                          // LATIN SMALL LETTER L WITH LINE BELOW
  {0x1E3C, {0x4C}},                          // LATIN CAPITAL LETTER L WITH CIRCUMFLEX BELOW
  {0x1E3D, {0x6C}},                          // LATIN SMALL LETTER L WITH CIRCUMFLEX BELOW
  {0x1E3E, {0x4D}},                          // LATIN CAPITAL LETTER M WITH ACUTE
  {0x1E3F, {0x6D}},                          // LATIN SMALL LETTER M WITH ACUTE
  {0x1E40, {0x4D}},                          // LATIN CAPITAL LETTER M WITH DOT ABOVE
  {0x1E41, {0x6D}},                          // LATIN SMALL LETTER M WITH DOT ABOVE
  {0x1E42, {0x4D}},                          // LATIN CAPITAL LETTER M WITH DOT BELOW
  {0x1E43, {0x6D}},                          // LATIN SMALL LETTER M WITH DOT BELOW
  {0x1E44, {0x4E}},                          // LATIN CAPITAL LETTER N WITH DOT ABOVE
  {0x1E45, {0x6E}},                          // LATIN SMALL LETTER N WITH DOT ABOVE
  {0x1E46, {0x4E}},                          // LATIN CAPITAL LETTER N WITH DOT BELOW
  {0x1E47, {0x6E}},                          // LATIN SMALL LETTER N WITH DOT BELOW
  {0x1E48, {0x4E}},                          // LATIN CAPITAL LETTER N WITH LINE BELOW
  {0x1E49, {0x6E}},                          // LATIN SMALL LETTER N WITH LINE BELOW
  {0x1E4A, {0x4E}},                          // LATIN CAPITAL LETTER N WITH CIRCUMFLEX BELOW
  {0x1E4B, {0x6E}},                          // LATIN SMALL LETTER N WITH CIRCUMFLEX BELOW
  {0x1E4C, {0x4F}},                          // LATIN CAPITAL LETTER O WITH TILDE AND ACUTE
  {0x1E4D, {0x6F}},                          // LATIN SMALL LETTER O WITH TILDE AND ACUTE
  {0x1E4E, {0x4F}},                          // LATIN CAPITAL LETTER O WITH TILDE AND DIAERESIS
  {0x1E4F, {0x6F}},                          // LATIN SMALL LETTER O WITH TILDE AND DIAERESIS
  {0x1E50, {0x4F}},                          // LATIN CAPITAL LETTER O WITH MACRON AND GRAVE
  {0x1E51, {0x6F}},                          // LATIN SMALL LETTER O WITH MACRON AND GRAVE
  {0x1E52, {0x4F}},                          // LATIN CAPITAL LETTER O WITH MACRON AND ACUTE
  {0x1E53, {0x6F}},                          // LATIN SMALL LETTER O WITH MACRON AND ACUTE
  {0x1E54, {0x50}},                          // LATIN CAPITAL LETTER P WITH ACUTE
  {0x1E55, {0x70}},                          // LATIN SMALL LETTER P WITH ACUTE
  {0x1E56, {0x50}},                          // LATIN CAPITAL LETTER P WITH DOT ABOVE
  {0x1E57, {0x70}},                          // LATIN SMALL LETTER P WITH DOT ABOVE
  {0x1E58, {0x52}},                          // LATIN CAPITAL LETTER R WITH DOT ABOVE
  {0x1E59, {0x72}},                          // LATIN SMALL LETTER R WITH DOT ABOVE
  {0x1E5A, {0x52}},                          // LATIN CAPITAL LETTER R WITH DOT BELOW
  {0x1E5B, {0x72}},                          // LATIN SMALL LETTER R WITH DOT BELOW
  {0x1E5C, {0x52}},                          // LATIN CAPITAL LETTER R WITH DOT BELOW AND MACRON
  {0x1E5D, {0x72}},                          // LATIN SMALL LETTER R WITH DOT BELOW AND MACRON
  {0x1E5E, {0x52}},                          // LATIN CAPITAL LETTER R WITH LINE BELOW
  {0x1E5F, {0x72}},                          // LATIN SMALL LETTER R WITH LINE BELOW
  {0x1E60, {0x53}},                          // LATIN CAPITAL LETTER S WITH DOT ABOVE
  {0x1E61, {0x73}},                          // LATIN SMALL LETTER S WITH DOT ABOVE
  {0x1E62, {0x53}},                          // LATIN CAPITAL LETTER S WITH DOT BELOW
  {0x1E63, {0x73}},                          // LATIN SMALL LETTER S WITH DOT BELOW
  {0x1E64, {0x53}},                          // LATIN CAPITAL LETTER S WITH ACUTE AND DOT ABOVE
  {0x1E65, {0x73}},                          // LATIN SMALL LETTER S WITH ACUTE AND DOT ABOVE
  {0x1E66, {0x53}},                          // LATIN CAPITAL LETTER S WITH CARON AND DOT ABOVE
  {0x1E67, {0x73}},                          // LATIN SMALL LETTER S WITH CARON AND DOT ABOVE
  {0x1E68, {0x53}},                          // LATIN CAPITAL LETTER S WITH DOT BELOW AND DOT ABOVE
  {0x1E69, {0x73}},                          // LATIN SMALL LETTER S WITH DOT BELOW AND DOT ABOVE
  {0x1E6A, {0x54}},                          // LATIN CAPITAL LETTER T WITH DOT ABOVE
  {0x1E6B, {0x74}},                          // LATIN SMALL LETTER T WITH DOT ABOVE
  {0x1E6C, {0x54}},                          // LATIN CAPITAL LETTER T WITH DOT BELOW
  {0x1E6D, {0x74}},                          // LATIN SMALL LETTER T WITH DOT BELOW
  {0x1E6E, {0x54}},                          // LATIN CAPITAL LETTER T WITH LINE BELOW
  {0x1E6F, {0x74}},                          // LATIN SMALL LETTER T WITH LINE BELOW
  {0x1E70, {0x54}},                          // LATIN CAPITAL LETTER T WITH CIRCUMFLEX BELOW
  {0x1E71, {0x74}},                          // LATIN SMALL LETTER T WITH CIRCUMFLEX BELOW
  {0x1E72, {0x55}},                          // LATIN CAPITAL LETTER U WITH DIAERESIS BELOW
  {0x1E73, {0x75}},                          // LATIN SMALL LETTER U WITH DIAERESIS BELOW
  {0x1E74, {0x55}},                          // LATIN CAPITAL LETTER U WITH TILDE BELOW
  {0x1E75, {0x75}},                          // LATIN SMALL LETTER U WITH TILDE BELOW
  {0x1E76, {0x55}},                          // LATIN CAPITAL LETTER U WITH CIRCUMFLEX BELOW
  {0x1E77, {0x75}},                          // LATIN SMALL LETTER U WITH CIRCUMFLEX BELOW
  {0x1E78, {0x55}},                          // LATIN CAPITAL LETTER U WITH TILDE AND ACUTE
  {0x1E79, {0x75}},                          // LATIN SMALL LETTER U WITH TILDE AND ACUTE
  {0x1E7A, {0x55}},                          // LATIN CAPITAL LETTER U WITH MACRON AND DIAERESIS
  {0x1E7B, {0x75}},                          // LATIN SMALL LETTER U WITH MACRON AND DIAERESIS
  {0x1E7C, {0x56}},                          // LATIN CAPITAL LETTER V WITH TILDE
  {0x1E7D, {0x76}},                          // LATIN SMALL LETTER V WITH TILDE
  {0x1E7E, {0x56}},                          // LATIN CAPITAL LETTER V WITH DOT BELOW
  {0x1E7F, {0x76}},                          // LATIN SMALL LETTER V WITH DOT BELOW
  {0x1E80, {0x57}},                          // LATIN CAPITAL LETTER W WITH GRAVE
  {0x1E81, {0x77}},                          // LATIN SMALL LETTER W WITH GRAVE
  {0x1E82, {0x57}},                          // LATIN CAPITAL LETTER W WITH ACUTE
  {0x1E83, {0x77}},                          // LATIN SMALL LETTER W WITH ACUTE
  {0x1E84, {0x57}},                          // LATIN CAPITAL LETTER W WITH DIAERESIS
  {0x1E85, {0x77}},                          // LATIN SMALL LETTER W WITH DIAERESIS
  {0x1E86, {0x57}},                          // LATIN CAPITAL LETTER W WITH DOT ABOVE
  {0x1E87, {0x77}},                          // LATIN SMALL LETTER W WITH DOT ABOVE
  {0x1E88, {0x57}},                          // LATIN CAPITAL LETTER W WITH DOT BELOW
  {0x1E89, {0x77}},                          // LATIN SMALL LETTER W WITH DOT BELOW
  {0x1E8A, {0x58}},                          // LATIN CAPITAL LETTER X WITH DOT ABOVE
  {0x1E8B, {0x78}},                          // LATIN SMALL LETTER X WITH DOT ABOVE
  {0x1E8C, {0x58}},                          // LATIN CAPITAL LETTER X WITH DIAERESIS
  {0x1E8D, {0x78}},                          // LATIN SMALL LETTER X WITH DIAERESIS
  {0x1E8E, {0x59}},                          // LATIN CAPITAL LETTER Y WITH DOT ABOVE
  {0x1E8F, {0x79}},                          // LATIN SMALL LETTER Y WITH DOT ABOVE
  {0x1E90, {0x5A}},                          // LATIN CAPITAL LETTER Z WITH CIRCUMFLEX
  {0x1E91, {0x7A}},                          // LATIN SMALL LETTER Z WITH CIRCUMFLEX
  {0x1E92, {0x5A}},                          // LATIN CAPITAL LETTER Z WITH DOT BELOW
  {0x1E93, {0x7A}},                          // LATIN SMALL LETTER Z WITH DOT BELOW
  {0x1E94, {0x5A}},                          // LATIN CAPITAL LETTER Z WITH LINE BELOW
  {0x1E95, {0x7A}},                          // LATIN SMALL LETTER Z WITH LINE BELOW
  {0x1E96, {0x68}},                          // LATIN SMALL LETTER H WITH LINE BELOW
  {0x1E97, {0x74}},                          // LATIN SMALL LETTER T WITH DIAERESIS
  {0x1E98, {0x77}},                          // LATIN SMALL LETTER W WITH RING ABOVE
  {0x1E99, {0x79}},                          // LATIN SMALL LETTER Y WITH RING ABOVE
  {0x1E9A, {0x61}},                          // LATIN SMALL LETTER A WITH RIGHT HALF RING
  {0x1E9B, {0x73}},                          // LATIN SMALL LETTER LONG S WITH DOT ABOVE
  {0x1E9E, {0x73, 0x73}},                    // LATIN CAPITAL LETTER SHARP S
  {0x1EA0, {0x41}},                          // LATIN CAPITAL LETTER A WITH DOT BELOW
  {0x1EA1, {0x61}},                          // LATIN SMALL LETTER A WITH DOT BELOW
  {0x1EA2, {0x41}},                          // LATIN CAPITAL LETTER A WITH HOOK ABOVE
  {0x1EA3, {0x61}},                          // LATIN SMALL LETTER A WITH HOOK ABOVE
  {0x1EA4, {0x41}},                          // LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND ACUTE
  {0x1EA5, {0x61}},                          // LATIN SMALL LETTER A WITH CIRCUMFLEX AND ACUTE
  {0x1EA6, {0x41}},                          // LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND GRAVE
  {0x1EA7, {0x61}},                          // LATIN SMALL LETTER A WITH CIRCUMFLEX AND GRAVE
  {0x1EA8, {0x41}},                          // LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE
  {0x1EA9, {0x61}},                          // LATIN SMALL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE
  {0x1EAA, {0x41}},                          // LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND TILDE
  {0x1EAB, {0x61}},                          // LATIN SMALL LETTER A WITH CIRCUMFLEX AND TILDE
  {0x1EAC, {0x41}},                          // LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND DOT BELOW
  {0x1EAD, {0x61}},                          // LATIN SMALL LETTER A WITH CIRCUMFLEX AND DOT BELOW
  {0x1EAE, {0x41}},                          // LATIN CAPITAL LETTER A WITH BREVE AND ACUTE
  {0x1EAF, {0x61}},                          // LATIN SMALL LETTER A WITH BREVE AND ACUTE
  {0x1EB0, {0x41}},                          // LATIN CAPITAL LETTER A WITH BREVE AND GRAVE
  {0x1EB1, {0x61}},                          // LATIN SMALL LETTER A WITH BREVE AND GRAVE
  {0x1EB2, {0x41}},                          // LATIN CAPITAL LETTER A WITH BREVE AND HOOK ABOVE
  {0x1EB3, {0x61}},                          // LATIN SMALL LETTER A WITH BREVE AND HOOK ABOVE
  {0x1EB4, {0x41}},                          // LATIN CAPITAL LETTER A WITH BREVE AND TILDE
  {0x1EB5, {0x61}},                          // LATIN SMALL LETTER A WITH BREVE AND TILDE
  {0x1EB6, {0x41}},                          // LATIN CAPITAL LETTER A WITH BREVE AND DOT BELOW
  {0x1EB7, {0x61}},                          // LATIN SMALL LETTER A WITH BREVE AND DOT BELOW
  {0x1EB8, {0x45}},                          // LATIN CAPITAL LETTER E WITH DOT BELOW
  {0x1EB9, {0x65}},                          // LATIN SMALL LETTER E WITH DOT BELOW
  {0x1EBA, {0x45}},                          // LATIN CAPITAL LETTER E WITH HOOK ABOVE
  {0x1EBB, {0x65}},                          // LATIN SMALL LETTER E WITH HOOK ABOVE
  {0x1EBC, {0x45}},                          // LATIN CAPITAL LETTER E WITH TILDE
  {0x1EBD, {0x65}},                          // LATIN SMALL LETTER E WITH TILDE
  {0x1EBE, {0x45}},                          // LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND ACUTE
  {0x1EBF, {0x65}},                          // LATIN SMALL LETTER E WITH CIRCUMFLEX AND ACUTE
  {0x1EC0, {0x45}},                          // LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND GRAVE
  {0x1EC1, {0x65}},                          // LATIN SMALL LETTER E WITH CIRCUMFLEX AND GRAVE
  {0x1EC2, {0x45}},                          // LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE
  {0x1EC3, {0x65}},                          // LATIN SMALL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE
  {0x1EC4, {0x45}},                          // LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND TILDE
  {0x1EC5, {0x65}},                          // LATIN SMALL LETTER E WITH CIRCUMFLEX AND TILDE
  {0x1EC6, {0x45}},                          // LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND DOT BELOW
  {0x1EC7, {0x65}},                          // LATIN SMALL LETTER E WITH CIRCUMFLEX AND DOT BELOW
  {0x1EC8, {0x49}},                          // LATIN CAPITAL LETTER I WITH HOOK ABOVE
  {0x1EC9, {0x69}},                          // LATIN SMALL LETTER I WITH HOOK ABOVE
  {0x1ECA, {0x49}},                          // LATIN CAPITAL LETTER I WITH DOT BELOW
  {0x1ECB, {0x69}},                          // LATIN SMALL LETTER I WITH DOT BELOW
  {0x1ECC, {0x4F}},                          // LATIN CAPITAL LETTER O WITH DOT BELOW
  {0x1ECD, {0x6F}},                          // LATIN SMALL LETTER O WITH DOT BELOW
  {0x1ECE, {0x4F}},                          // LATIN CAPITAL LETTER O WITH HOOK ABOVE
  {0x1ECF, {0x6F}},                          // LATIN SMALL LETTER O WITH HOOK ABOVE
  {0x1ED0, {0x4F}},                          // LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND ACUTE
  {0x1ED1, {0x6F}},                          // LATIN SMALL LETTER O WITH CIRCUMFLEX AND ACUTE
  {0x1ED2, {0x4F}},                          // LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND GRAVE
  {0x1ED3, {0x6F}},                          // LATIN SMALL LETTER O WITH CIRCUMFLEX AND GRAVE
  {0x1ED4, {0x4F}},                          // LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE
  {0x1ED5, {0x6F}},                          // LATIN SMALL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE
  {0x1ED6, {0x4F}},                          // LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND TILDE
  {0x1ED7, {0x6F}},                          // LATIN SMALL LETTER O WITH CIRCUMFLEX AND TILDE
  {0x1ED8, {0x4F}},                          // LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND DOT BELOW
  {0x1ED9, {0x6F}},                          // LATIN SMALL LETTER O WITH CIRCUMFLEX AND DOT BELOW
  {0x1EDA, {0x4F}},                          // LATIN CAPITAL LETTER O WITH HORN AND ACUTE
  {0x1EDB, {0x6F}},                          // LATIN SMALL LETTER O WITH HORN AND ACUTE
  {0x1EDC, {0x4F}},                          // LATIN CAPITAL LETTER O WITH HORN AND GRAVE
  {0x1EDD, {0x6F}},                          // LATIN SMALL LETTER O WITH HORN AND GRAVE
  {0x1EDE, {0x4F}},                          // LATIN CAPITAL LETTER O WITH HORN AND HOOK ABOVE
  {0x1EDF, {0x6F}},                          // LATIN SMALL LETTER O WITH HORN AND HOOK ABOVE
  {0x1EE0, {0x4F}},                          // LATIN CAPITAL LETTER O WITH HORN AND TILDE
  {0x1EE1, {0x6F}},                          // LATIN SMALL LETTER O WITH HORN AND TILDE
  {0x1EE2, {0x4F}},                          // LATIN CAPITAL LETTER O WITH HORN AND DOT BELOW
  {0x1EE3, {0x6F}},                          // LATIN SMALL LETTER O WITH HORN AND DOT BELOW
  {0x1EE4, {0x55}},                          // LATIN CAPITAL LETTER U WITH DOT BELOW
  {0x1EE5, {0x75}},                          // LATIN SMALL LETTER U WITH DOT BELOW
  {0x1EE6, {0x55}},                          // LATIN CAPITAL LETTER U WITH HOOK ABOVE
  {0x1EE7, {0x75}},                          // LATIN SMALL LETTER U WITH HOOK ABOVE
  {0x1EE8, {0x55}},                          // LATIN CAPITAL LETTER U WITH HORN AND ACUTE
  {0x1EE9, {0x75}},                          // LATIN SMALL LETTER U WITH HORN AND ACUTE
  {0x1EEA, {0x55}},                          // LATIN CAPITAL LETTER U WITH HORN AND GRAVE
  {0x1EEB, {0x75}},                          // LATIN SMALL LETTER U WITH HORN AND GRAVE
  {0x1EEC, {0x55}},                          // LATIN CAPITAL LETTER U WITH HORN AND HOOK ABOVE
  {0x1EED, {0x75}},                          // LATIN SMALL LETTER U WITH HORN AND HOOK ABOVE
  {0x1EEE, {0x55}},                          // LATIN CAPITAL LETTER U WITH HORN AND TILDE
  {0x1EEF, {0x75}},                          // LATIN SMALL LETTER U WITH HORN AND TILDE
  {0x1EF0, {0x55}},                          // LATIN CAPITAL LETTER U WITH HORN AND DOT BELOW
  {0x1EF1, {0x75}},                          // LATIN SMALL LETTER U WITH HORN AND DOT BELOW
  {0x1EF2, {0x59}},                          // LATIN CAPITAL LETTER Y WITH GRAVE
  {0x1EF3, {0x79}},                          // LATIN SMALL LETTER Y WITH GRAVE
  {0x1EF4, {0x59}},                          // LATIN CAPITAL LETTER Y WITH DOT BELOW
  {0x1EF5, {0x79}},                          // LATIN SMALL LETTER Y WITH DOT BELOW
  {0x1EF6, {0x59}},                          // LATIN CAPITAL LETTER Y WITH HOOK ABOVE
  {0x1EF7, {0x79}},                          // LATIN SMALL LETTER Y WITH HOOK ABOVE
  {0x1EF8, {0x59}},                          // LATIN CAPITAL LETTER Y WITH TILDE
  {0x1EF9, {0x79}},                          // LATIN SMALL LETTER Y WITH TILDE
  {0x1EFE, {0x59}},                          // LATIN CAPITAL LETTER Y WITH LOOP
  {0x1EFF, {0x79}},                          // LATIN SMALL LETTER Y WITH LOOP
  {0x2000, {0x20}},                          // EN QUAD
  {0x2001, {0x20, 0x20}},                    // EM QUAD
  {0x2002, {0x20}},                          // EN SPACE
  {0x2003, {0x20, 0x20}},                    // EM SPACE
  {0x2004, {0x20}},                          // THREE-PER-EM SPACE
  {0x2005, {0x20}},                          // FOUR-PER-EM SPACE
  {0x2006, {0x20}},                          // SIX-PER-EM SPACE
  {0x2007, {0x20}},                          // FIGURE SPACE
  {0x2008, {0x20}},                          // PUNCTUATION SPACE
  {0x2009, {0x20}},                          // THIN SPACE
  {0x200A, {0x00}},                          // HAIR SPACE
  {0x200B, {0x00}},                          // ZERO WIDTH SPACE
  {0x200C, {0x00}},                          // ZERO WIDTH NON-JOINER
  {0x200D, {0x00}},                          // ZERO WIDTH JOINER
  {0x200E, {0x00}},                          // LEFT-TO-RIGHT MARK
  {0x200F, {0x00}},                          // RIGHT-TO-LEFT MARK
  {0x2010, {0x2D}},                          // HYPHEN
  {0x2011, {0x2D}},                          // NON-BREAKING HYPHEN
  {0x2012, {0x2D}},                          // FIGURE DASH
  {0x2013, {0x2D}},                          // EN DASH
  {0x2014, {0x2D, 0x2D}},                    // EM DASH
  {0x2015, {0x2D, 0x2D}},                    // HORIZONTAL BAR
  {0x2016, {0x7C, 0x7C}},                    // DOUBLE VERTICAL LINE
  {0x2017, {0x5F}},                          // DOUBLE LOW LINE
  {0x2018, {0x27}},                          // LEFT SINGLE QUOTATION MARK
  {0x2019, {0x27}},                          // RIGHT SINGLE QUOTATION MARK
  {0x201A, {0x27}},                          // SINGLE LOW-9 QUOTATION MARK
  {0x201B, {0x27}},                          // SINGLE HIGH-REVERSED-9 QUOTATION MARK
  {0x201C, {0x22}},                          // LEFT DOUBLE QUOTATION MARK
  {0x201D, {0x22}},                          // RIGHT DOUBLE QUOTATION MARK
  {0x201E, {0x22}},                          // DOUBLE LOW-9 QUOTATION MARK
  {0x201F, {0x22}},                          // DOUBLE HIGH-REVERSED-9 QUOTATION MARK
  {0x2020, {0x2B}},                          // DAGGER
  {0x2021, {0x2B, 0x2B}},                    // DOUBLE DAGGER
  {0x2022, {0x6F}},                          // BULLET
  {0x2023, {0x3E}},                          // TRIANGULAR BULLET
  {0x2024, {0x2E}},                          // ONE DOT LEADER
  {0x2025, {0x2E, 0x2E}},                    // TWO DOT LEADER
  {0x2026, {0x2E, 0x2E, 0x2E}},              // HORIZONTAL ELLIPSIS
  {0x2027, {0x2D}},                          // HYPHENATION POINT
  {0x202A, {0x00}},                          // LEFT-TO-RIGHT EMBEDDING
  {0x202B, {0x00}},                          // RIGHT-TO-LEFT EMBEDDING
  {0x202C, {0x00}},                          // POP DIRECTIONAL FORMATTING
  {0x202D, {0x00}},                          // LEFT-TO-RIGHT OVERRIDE
  {0x202E, {0x00}},                          // RIGHT-TO-LEFT OVERRIDE
  {0x202F, {0x20}},                          // NARROW NO-BREAK SPACE
  {0x2030, {0x20, 0x30, 0x2F, 0x30, 0x30}},  // PER MILLE SIGN
  {0x2032, {0x27}},                          // PRIME
  {0x2033, {0x22}},                          // DOUBLE PRIME
  {0x2034, {0x27, 0x27, 0x27}},              // TRIPLE PRIME
  {0x2035, {0x60}},                          // REVERSED PRIME
  {0x2036, {0x60, 0x60}},                    // REVERSED DOUBLE PRIME
  {0x2037, {0x60, 0x60, 0x60}},              // REVERSED TRIPLE PRIME
  {0x2039, {0x3C}},                          // SINGLE LEFT-POINTING ANGLE QUOTATION MARK
  {0x203A, {0x3E}},                          // SINGLE RIGHT-POINTING ANGLE QUOTATION MARK
  {0x203C, {0x21, 0x21}},                    // DOUBLE EXCLAMATION MARK
  {0x203E, {0x2D}},                          // OVERLINE
  {0x2043, {0x2D}},                          // HYPHEN BULLET
  {0x2044, {0x2F}},                          // FRACTION SLASH
  {0x2048, {0x3F, 0x21}},                    // QUESTION EXCLAMATION MARK
  {0x2049, {0x21, 0x3F}},                    // EXCLAMATION QUESTION MARK
  {0x204A, {0x37}},                          // TIRONIAN SIGN ET
  {0x2070, {0x30}},                          // SUPERSCRIPT ZERO
  {0x2074, {0x34}},                          // SUPERSCRIPT FOUR
  {0x2075, {0x35}},                          // SUPERSCRIPT FIVE
  {0x2076, {0x36}},                          // SUPERSCRIPT SIX
  {0x2077, {0x37}},                          // SUPERSCRIPT SEVEN
  {0x2078, {0x38}},                          // SUPERSCRIPT EIGHT
  {0x2079, {0x39}},                          // SUPERSCRIPT NINE
  {0x207A, {0x5E, 0x2B}},                    // SUPERSCRIPT PLUS SIGN
  {0x207B, {0x2D}},                          // SUPERSCRIPT MINUS
  {0x207C, {0x5E, 0x3D}},                    // SUPERSCRIPT EQUALS SIGN
  {0x207D, {0x28}},                          // SUPERSCRIPT LEFT PARENTHESIS
  {0x207E, {0x29}},                          // SUPERSCRIPT RIGHT PARENTHESIS
  {0x207F, {0x6E}},                          // SUPERSCRIPT LATIN SMALL LETTER N
  {0x2080, {0x30}},                          // SUBSCRIPT ZERO
  {0x2081, {0x31}},                          // SUBSCRIPT ONE
  {0x2082, {0x32}},                          // SUBSCRIPT TWO
  {0x2083, {0x33}},                          // SUBSCRIPT THREE
  {0x2084, {0x34}},                          // SUBSCRIPT FOUR
  {0x2085, {0x35}},                          // SUBSCRIPT FIVE
  {0x2086, {0x36}},                          // SUBSCRIPT SIX
  {0x2087, {0x37}},                          // SUBSCRIPT SEVEN
  {0x2088, {0x38}},                          // SUBSCRIPT EIGHT
  {0x2089, {0x39}},                          // SUBSCRIPT NINE
  {0x208A, {0x5F, 0x2B}},                    // SUBSCRIPT PLUS SIGN
  {0x208B, {0x2D}},                          // SUBSCRIPT MINUS
  {0x208C, {0x5F, 0x3D}},                    // SUBSCRIPT EQUALS SIGN
  {0x208D, {0x28}},                          // SUBSCRIPT LEFT PARENTHESIS
  {0x208E, {0x29}},                          // SUBSCRIPT RIGHT PARENTHESIS
  {0x2090, {0x61}},                          // LATIN SUBSCRIPT SMALL LETTER A
  {0x2091, {0x65}},                          // LATIN SUBSCRIPT SMALL LETTER E
  {0x2092, {0x6F}},                          // LATIN SUBSCRIPT SMALL LETTER O
  {0x2093, {0x78}},                          // LATIN SUBSCRIPT SMALL LETTER X
  {0x20AC, {0x45, 0x55, 0x52}},              // EURO SIGN
  {0x2100, {0x61, 0x2F, 0x63}},              // ACCOUNT OF
  {0x2101, {0x61, 0x2F, 0x73}},              // ADDRESSED TO THE SUBJECT
  {0x2103, {0x43}},                          // DEGREE CELSIUS
  {0x2105, {0x63, 0x2F, 0x6F}},              // CARE OF
  {0x2106, {0x63, 0x2F, 0x75}},              // CADA UNA
  {0x2109, {0x46}},                          // DEGREE FAHRENHEIT
  {0x2113, {0x6C}},                          // SCRIPT SMALL L
  {0x2116, {0x4E, 0x6F}},                    // NUMERO SIGN
  {0x2117, {0x28, 0x50, 0x29}},              // SOUND RECORDING COPYRIGHT
  {0x2120, {0x5B, 0x53, 0x4D, 0x5D}},        // SERVICE MARK
  {0x2121, {0x54, 0x45, 0x4C}},              // TELEPHONE SIGN
  {0x2122, {0x5B, 0x54, 0x4D, 0x5D}},        // TRADE MARK SIGN
  {0x2126, {0x6F, 0x68, 0x6D}},              // OHM SIGN
  {0x212A, {0x4B}},                          // KELVIN SIGN
  {0x212E, {0x65}},                          // ESTIMATED SYMBOL
  {0x214E, {0x46}},                          // TURNED SMALL F
  {0x2153, {0x20, 0x31, 0x2F, 0x33}},        // VULGAR FRACTION ONE THIRD
  {0x2154, {0x20, 0x32, 0x2F, 0x33}},        // VULGAR FRACTION TWO THIRDS
  {0x2155, {0x20, 0x31, 0x2F, 0x35}},        // VULGAR FRACTION ONE FIFTH
  {0x2156, {0x20, 0x32, 0x2F, 0x35}},        // VULGAR FRACTION TWO FIFTHS
  {0x2157, {0x20, 0x33, 0x2F, 0x35}},        // VULGAR FRACTION THREE FIFTHS
  {0x2158, {0x20, 0x34, 0x2F, 0x35}},        // VULGAR FRACTION FOUR FIFTHS
  {0x2159, {0x20, 0x31, 0x2F, 0x36}},        // VULGAR FRACTION ONE SIXTH
  {0x215A, {0x20, 0x35, 0x2F, 0x36}},        // VULGAR FRACTION FIVE SIXTHS
  {0x215B, {0x20, 0x31, 0x2F, 0x38}},        // VULGAR FRACTION ONE EIGHTH
  {0x215C, {0x20, 0x33, 0x2F, 0x38}},        // VULGAR FRACTION THREE EIGHTHS
  {0x215D, {0x20, 0x35, 0x2F, 0x38}},        // VULGAR FRACTION FIVE EIGHTHS
  {0x215E, {0x20, 0x37, 0x2F, 0x38}},        // VULGAR FRACTION SEVEN EIGHTHS
  {0x215F, {0x20, 0x31, 0x2F}},              // FRACTION NUMERATOR ONE
  {0x2160, {0x49}},                          // ROMAN NUMERAL ONE
  {0x2161, {0x49, 0x49}},                    // ROMAN NUMERAL TWO
  {0x2162, {0x49, 0x49, 0x49}},              // ROMAN NUMERAL THREE
  {0x2163, {0x49, 0x56}},                    // ROMAN NUMERAL FOUR
  {0x2164, {0x56}},                          // ROMAN NUMERAL FIVE
  {0x2165, {0x56, 0x49}},                    // ROMAN NUMERAL SIX
  {0x2166, {0x56, 0x49, 0x49}},              // ROMAN NUMERAL SEVEN
  {0x2167, {0x56, 0x49, 0x49, 0x49}},        // ROMAN NUMERAL EIGHT
  {0x2168, {0x49, 0x58}},                    // ROMAN NUMERAL NINE
  {0x2169, {0x58}},                          // ROMAN NUMERAL TEN
  {0x216A, {0x58, 0x49}},                    // ROMAN NUMERAL ELEVEN
  {0x216B, {0x58, 0x49, 0x49}},              // ROMAN NUMERAL TWELVE
  {0x216C, {0x4C}},                          // ROMAN NUMERAL FIFTY
  {0x216D, {0x43}},                          // ROMAN NUMERAL ONE HUNDRED
  {0x216E, {0x44}},                          // ROMAN NUMERAL FIVE HUNDRED
  {0x216F, {0x4D}},                          // ROMAN NUMERAL ONE THOUSAND
  {0x2170, {0x69}},                          // SMALL ROMAN NUMERAL ONE
  {0x2171, {0x69, 0x69}},                    // SMALL ROMAN NUMERAL TWO
  {0x2172, {0x69, 0x69, 0x69}},              // SMALL ROMAN NUMERAL THREE
  {0x2173, {0x69, 0x76}},                    // SMALL ROMAN NUMERAL FOUR
  {0x2174, {0x76}},                          // SMALL ROMAN NUMERAL FIVE
  {0x2175, {0x76, 0x69}},                    // SMALL ROMAN NUMERAL SIX
  {0x2176, {0x76, 0x69, 0x69}},              // SMALL ROMAN NUMERAL SEVEN
  {0x2177, {0x76, 0x69, 0x69, 0x69}},        // SMALL ROMAN NUMERAL EIGHT
  {0x2178, {0x69, 0x78}},                    // SMALL ROMAN NUMERAL NINE
  {0x2179, {0x78}},                          // SMALL ROMAN NUMERAL TEN
  {0x217A, {0x78, 0x69}},                    // SMALL ROMAN NUMERAL ELEVEN
  {0x217B, {0x78, 0x69, 0x69}},              // SMALL ROMAN NUMERAL TWELVE
  {0x217C, {0x6C}},                          // SMALL ROMAN NUMERAL FIFTY
  {0x217D, {0x63}},                          // SMALL ROMAN NUMERAL ONE HUNDRED
  {0x217E, {0x64}},                          // SMALL ROMAN NUMERAL FIVE HUNDRED
  {0x217F, {0x6D}},                          // SMALL ROMAN NUMERAL ONE THOUSAND
  {0x2184, {0x63}},                          // LATIN SMALL LETTER REVERSED C
  {0x2190, {0x3C, 0x2D}},                    // LEFTWARDS ARROW
  {0x2191, {0x5E}},                          // UPWARDS ARROW
  {0x2192, {0x2D, 0x3E}},                    // RIGHTWARDS ARROW
  {0x2193, {0x76}},                          // DOWNWARDS ARROW
  {0x2194, {0x3C, 0x2D, 0x3E}},              // LEFT RIGHT ARROW
  {0x21D0, {0x3C, 0x3D}},                    // LEFTWARDS DOUBLE ARROW
  {0x21D2, {0x3D, 0x3E}},                    // RIGHTWARDS DOUBLE ARROW
  {0x21D4, {0x3C, 0x3D, 0x3E}},              // LEFT RIGHT DOUBLE ARROW
  {0x2212, {0x2D}},                          // MINUS SIGN
  {0x2215, {0x2F}},                          // DIVISION SLASH
  {0x2216, {0x5C}},                          // SET MINUS
  {0x2217, {0x2A}},                          // ASTERISK OPERATOR
  {0x2218, {0x6F}},                          // RING OPERATOR
  {0x221E, {0x69, 0x6E, 0x66}},              // INFINITY
  {0x2223, {0x7C}},                          // DIVIDES
  {0x2225, {0x7C, 0x7C}},                    // PARALLEL TO
  {0x2236, {0x3A}},                          // RATIO
  {0x223C, {0x7E}},                          // TILDE OPERATOR
  {0x2260, {0x2F, 0x3D}},                    // NOT EQUAL TO
  {0x2261, {0x3D}},                          // IDENTICAL TO
  {0x2264, {0x3C, 0x3D}},                    // LESS-THAN OR EQUAL TO
  {0x2265, {0x3E, 0x3D}},                    // GREATER-THAN OR EQUAL TO
  {0x226A, {0x3C, 0x3C}},                    // MUCH LESS-THAN
  {0x226B, {0x3E, 0x3E}},                    // MUCH GREATER-THAN
  {0x2295, {0x28, 0x2B, 0x29}},              // CIRCLED PLUS
  {0x2296, {0x28, 0x2D, 0x29}},              // CIRCLED MINUS
  {0x2297, {0x28, 0x78, 0x29}},              // CIRCLED TIMES
  {0x2298, {0x28, 0x2F, 0x29}},              // CIRCLED DIVISION SLASH
  {0x22A2, {0x7C, 0x2D}},                    // RIGHT TACK
  {0x22A3, {0x2D, 0x7C}},                    // LEFT TACK
  {0x22A6, {0x7C, 0x2D}},                    // ASSERTION
  {0x22A7, {0x7C, 0x3D}},                    // MODELS
  {0x22A8, {0x7C, 0x3D}},                    // TRUE
  {0x22A9, {0x7C, 0x7C, 0x2D}},              // FORCES
  {0x22C6, {0x2A}},                          // STAR OPERATOR
  {0x22D5, {0x23}},                          // EQUAL AND PARALLEL TO
  {0x22D8, {0x3C, 0x3C, 0x3C}},              // VERY MUCH LESS-THAN
  {0x22D9, {0x3E, 0x3E, 0x3E}},              // VERY MUCH GREATER-THAN
  {0x22EF, {0x2E, 0x2E, 0x2E}},              // MIDLINE HORIZONTAL ELLIPSIS
  {0x2329, {0x3C}},                          // LEFT-POINTING ANGLE BRACKET
  {0x232A, {0x3E}},                          // RIGHT-POINTING ANGLE BRACKET
  {0x2400, {0x4E, 0x55, 0x4C}},              // SYMBOL FOR NULL
  {0x2401, {0x53, 0x4F, 0x48}},              // SYMBOL FOR START OF HEADING
  {0x2402, {0x53, 0x54, 0x58}},              // SYMBOL FOR START OF TEXT
  {0x2403, {0x45, 0x54, 0x58}},              // SYMBOL FOR END OF TEXT
  {0x2404, {0x45, 0x4F, 0x54}},              // SYMBOL FOR END OF TRANSMISSION
  {0x2405, {0x45, 0x4E, 0x51}},              // SYMBOL FOR ENQUIRY
  {0x2406, {0x41, 0x43, 0x4B}},              // SYMBOL FOR ACKNOWLEDGE
  {0x2407, {0x42, 0x45, 0x4C}},              // SYMBOL FOR BELL
  {0x2408, {0x42, 0x53}},                    // SYMBOL FOR BACKSPACE
  {0x2409, {0x48, 0x54}},                    // SYMBOL FOR HORIZONTAL TABULATION
  {0x240A, {0x4C, 0x46}},                    // SYMBOL FOR LINE FEED
  {0x240B, {0x56, 0x54}},                    // SYMBOL FOR VERTICAL TABULATION
  {0x240C, {0x46, 0x46}},                    // SYMBOL FOR FORM FEED
  {0x240D, {0x43, 0x52}},                    // SYMBOL FOR CARRIAGE RETURN
  {0x240E, {0x53, 0x4F}},                    // SYMBOL FOR SHIFT OUT
  {0x240F, {0x53, 0x49}},                    // SYMBOL FOR SHIFT IN
  {0x2410, {0x44, 0x4C, 0x45}},              // SYMBOL FOR DATA LINK ESCAPE
  {0x2411, {0x44, 0x43, 0x31}},              // SYMBOL FOR DEVICE CONTROL ONE
  {0x2412, {0x44, 0x43, 0x32}},              // SYMBOL FOR DEVICE CONTROL TWO
  {0x2413, {0x44, 0x43, 0x33}},              // SYMBOL FOR DEVICE CONTROL THREE
  {0x2414, {0x44, 0x43, 0x34}},              // SYMBOL FOR DEVICE CONTROL FOUR
  {0x2415, {0x4E, 0x41, 0x4B}},              // SYMBOL FOR NEGATIVE ACKNOWLEDGE
  {0x2416, {0x53, 0x59, 0x4E}},              // SYMBOL FOR SYNCHRONOUS IDLE
  {0x2417, {0x45, 0x54, 0x42}},              // SYMBOL FOR END OF TRANSMISSION BLOCK
  {0x2418, {0x43, 0x41, 0x4E}},              // SYMBOL FOR CANCEL
  {0x2419, {0x45, 0x4D}},                    // SYMBOL FOR END OF MEDIUM
  {0x241A, {0x53, 0x55, 0x42}},              // SYMBOL FOR SUBSTITUTE
  {0x241B, {0x45, 0x53, 0x43}},              // SYMBOL FOR ESCAPE
  {0x241C, {0x46, 0x53}},                    // SYMBOL FOR FILE SEPARATOR
  {0x241D, {0x47, 0x53}},                    // SYMBOL FOR GROUP SEPARATOR
  {0x241E, {0x52, 0x53}},                    // SYMBOL FOR RECORD SEPARATOR
  {0x241F, {0x55, 0x53}},                    // SYMBOL FOR UNIT SEPARATOR
  {0x2420, {0x53, 0x50}},                    // SYMBOL FOR SPACE
  {0x2421, {0x44, 0x45, 0x4C}},              // SYMBOL FOR DELETE
  {0x2423, {0x5F}},                          // OPEN BOX
  {0x2424, {0x4E, 0x4C}},                    // SYMBOL FOR NEWLINE
  {0x2425, {0x2F, 0x2F, 0x2F}},              // SYMBOL FOR DELETE FORM TWO
  {0x2426, {0x3F}},                          // SYMBOL FOR SUBSTITUTE FORM TWO
  {0x2460, {0x31}},                          // CIRCLED DIGIT ONE
  {0x2461, {0x32}},                          // CIRCLED DIGIT TWO
  {0x2462, {0x33}},                          // CIRCLED DIGIT THREE
  {0x2463, {0x34}},                          // CIRCLED DIGIT FOUR
  {0x2464, {0x35}},                          // CIRCLED DIGIT FIVE
  {0x2465, {0x36}},                          // CIRCLED DIGIT SIX
  {0x2466, {0x37}},                          // CIRCLED DIGIT SEVEN
  {0x2467, {0x38}},                          // CIRCLED DIGIT EIGHT
  {0x2468, {0x39}},                          // CIRCLED DIGIT NINE
  {0x2469, {0x28, 0x31, 0x30, 0x29}},        // CIRCLED NUMBER TEN
  {0x246A, {0x28, 0x31, 0x31, 0x29}},        // CIRCLED NUMBER ELEVEN
  {0x246B, {0x28, 0x31, 0x32, 0x29}},        // CIRCLED NUMBER TWELVE
  {0x246C, {0x28, 0x31, 0x33, 0x29}},        // CIRCLED NUMBER THIRTEEN
  {0x246D, {0x28, 0x31, 0x34, 0x29}},        // CIRCLED NUMBER FOURTEEN
  {0x246E, {0x28, 0x31, 0x35, 0x29}},        // CIRCLED NUMBER FIFTEEN
  {0x246F, {0x28, 0x31, 0x36, 0x29}},        // CIRCLED NUMBER SIXTEEN
  {0x2470, {0x28, 0x31, 0x37, 0x29}},        // CIRCLED NUMBER SEVENTEEN
  {0x2471, {0x28, 0x31, 0x38, 0x29}},        // CIRCLED NUMBER EIGHTEEN
  {0x2472, {0x28, 0x31, 0x39, 0x29}},        // CIRCLED NUMBER NINETEEN
  {0x2473, {0x28, 0x32, 0x30, 0x29}},        // CIRCLED NUMBER TWENTY
  {0x2474, {0x31}},                          // PARENTHESIZED DIGIT ONE
  {0x2475, {0x32}},                          // PARENTHESIZED DIGIT TWO
  {0x2476, {0x33}},                          // PARENTHESIZED DIGIT THREE
  {0x2477, {0x34}},                          // PARENTHESIZED DIGIT FOUR
  {0x2478, {0x35}},                          // PARENTHESIZED DIGIT FIVE
  {0x2479, {0x36}},                          // PARENTHESIZED DIGIT SIX
  {0x247A, {0x37}},                          // PARENTHESIZED DIGIT SEVEN
  {0x247B, {0x38}},                          // PARENTHESIZED DIGIT EIGHT
  {0x247C, {0x39}},                          // PARENTHESIZED DIGIT NINE
  {0x247D, {0x28, 0x31, 0x30, 0x29}},        // PARENTHESIZED NUMBER TEN
  {0x247E, {0x28, 0x31, 0x31, 0x29}},        // PARENTHESIZED NUMBER ELEVEN
  {0x247F, {0x28, 0x31, 0x32, 0x29}},        // PARENTHESIZED NUMBER TWELVE
  {0x2480, {0x28, 0x31, 0x33, 0x29}},        // PARENTHESIZED NUMBER THIRTEEN
  {0x2481, {0x28, 0x31, 0x34, 0x29}},        // PARENTHESIZED NUMBER FOURTEEN
  {0x2482, {0x28, 0x31, 0x35, 0x29}},        // PARENTHESIZED NUMBER FIFTEEN
  {0x2483, {0x28, 0x31, 0x36, 0x29}},        // PARENTHESIZED NUMBER SIXTEEN
  {0x2484, {0x28, 0x31, 0x37, 0x29}},        // PARENTHESIZED NUMBER SEVENTEEN
  {0x2485, {0x28, 0x31, 0x38, 0x29}},        // PARENTHESIZED NUMBER EIGHTEEN
  {0x2486, {0x28, 0x31, 0x39, 0x29}},        // PARENTHESIZED NUMBER NINETEEN
  {0x2487, {0x28, 0x32, 0x30, 0x29}},        // PARENTHESIZED NUMBER TWENTY
  {0x2488, {0x31}},                          // DIGIT ONE FULL STOP
  {0x2489, {0x32}},                          // DIGIT TWO FULL STOP
  {0x248A, {0x33}},                          // DIGIT THREE FULL STOP
  {0x248B, {0x34}},                          // DIGIT FOUR FULL STOP
  {0x248C, {0x35}},                          // DIGIT FIVE FULL STOP
  {0x248D, {0x36}},                          // DIGIT SIX FULL STOP
  {0x248E, {0x37}},                          // DIGIT SEVEN FULL STOP
  {0x248F, {0x38}},                          // DIGIT EIGHT FULL STOP
  {0x2490, {0x39}},                          // DIGIT NINE FULL STOP
  {0x2491, {0x31, 0x30, 0x2E}},              // NUMBER TEN FULL STOP
  {0x2492, {0x31, 0x31, 0x2E}},              // NUMBER ELEVEN FULL STOP
  {0x2493, {0x31, 0x32, 0x2E}},              // NUMBER TWELVE FULL STOP
  {0x2494, {0x31, 0x33, 0x2E}},              // NUMBER THIRTEEN FULL STOP
  {0x2495, {0x31, 0x34, 0x2E}},              // NUMBER FOURTEEN FULL STOP
  {0x2496, {0x31, 0x35, 0x2E}},              // NUMBER FIFTEEN FULL STOP
  {0x2497, {0x31, 0x36, 0x2E}},              // NUMBER SIXTEEN FULL STOP
  {0x2498, {0x31, 0x37, 0x2E}},              // NUMBER SEVENTEEN FULL STOP
  {0x2499, {0x31, 0x38, 0x2E}},              // NUMBER EIGHTEEN FULL STOP
  {0x249A, {0x31, 0x39, 0x2E}},              // NUMBER NINETEEN FULL STOP
  {0x249B, {0x32, 0x30, 0x2E}},              // NUMBER TWENTY FULL STOP
  {0x249C, {0x61}},                          // PARENTHESIZED LATIN SMALL LETTER A
  {0x249D, {0x62}},                          // PARENTHESIZED LATIN SMALL LETTER B
  {0x249E, {0x63}},                          // PARENTHESIZED LATIN SMALL LETTER C
  {0x249F, {0x64}},                          // PARENTHESIZED LATIN SMALL LETTER D
  {0x24A0, {0x65}},                          // PARENTHESIZED LATIN SMALL LETTER E
  {0x24A1, {0x66}},                          // PARENTHESIZED LATIN SMALL LETTER F
  {0x24A2, {0x67}},                          // PARENTHESIZED LATIN SMALL LETTER G
  {0x24A3, {0x68}},                          // PARENTHESIZED LATIN SMALL LETTER H
  {0x24A4, {0x69}},                          // PARENTHESIZED LATIN SMALL LETTER I
  {0x24A5, {0x6A}},                          // PARENTHESIZED LATIN SMALL LETTER J
  {0x24A6, {0x6B}},                          // PARENTHESIZED LATIN SMALL LETTER K
  {0x24A7, {0x6C}},                          // PARENTHESIZED LATIN SMALL LETTER L
  {0x24A8, {0x6D}},                          // PARENTHESIZED LATIN SMALL LETTER M
  {0x24A9, {0x6E}},                          // PARENTHESIZED LATIN SMALL LETTER N
  {0x24AA, {0x6F}},                          // PARENTHESIZED LATIN SMALL LETTER O
  {0x24AB, {0x70}},                          // PARENTHESIZED LATIN SMALL LETTER P
  {0x24AC, {0x71}},                          // PARENTHESIZED LATIN SMALL LETTER Q
  {0x24AD, {0x72}},                          // PARENTHESIZED LATIN SMALL LETTER R
  {0x24AE, {0x73}},                          // PARENTHESIZED LATIN SMALL LETTER S
  {0x24AF, {0x74}},                          // PARENTHESIZED LATIN SMALL LETTER T
  {0x24B0, {0x75}},                          // PARENTHESIZED LATIN SMALL LETTER U
  {0x24B1, {0x76}},                          // PARENTHESIZED LATIN SMALL LETTER V
  {0x24B2, {0x77}},                          // PARENTHESIZED LATIN SMALL LETTER W
  {0x24B3, {0x78}},                          // PARENTHESIZED LATIN SMALL LETTER X
  {0x24B4, {0x79}},                          // PARENTHESIZED LATIN SMALL LETTER Y
  {0x24B5, {0x7A}},                          // PARENTHESIZED LATIN SMALL LETTER Z
  {0x24B6, {0x41}},                          // CIRCLED LATIN CAPITAL LETTER A
  {0x24B7, {0x42}},                          // CIRCLED LATIN CAPITAL LETTER B
  {0x24B8, {0x43}},                          // CIRCLED LATIN CAPITAL LETTER C
  {0x24B9, {0x44}},                          // CIRCLED LATIN CAPITAL LETTER D
  {0x24BA, {0x45}},                          // CIRCLED LATIN CAPITAL LETTER E
  {0x24BB, {0x46}},                          // CIRCLED LATIN CAPITAL LETTER F
  {0x24BC, {0x47}},                          // CIRCLED LATIN CAPITAL LETTER G
  {0x24BD, {0x48}},                          // CIRCLED LATIN CAPITAL LETTER H
  {0x24BE, {0x49}},                          // CIRCLED LATIN CAPITAL LETTER I
  {0x24BF, {0x4A}},                          // CIRCLED LATIN CAPITAL LETTER J
  {0x24C0, {0x4B}},                          // CIRCLED LATIN CAPITAL LETTER K
  {0x24C1, {0x4C}},                          // CIRCLED LATIN CAPITAL LETTER L
  {0x24C2, {0x4D}},                          // CIRCLED LATIN CAPITAL LETTER M
  {0x24C3, {0x4E}},                          // CIRCLED LATIN CAPITAL LETTER N
  {0x24C4, {0x4F}},                          // CIRCLED LATIN CAPITAL LETTER O
  {0x24C5, {0x50}},                          // CIRCLED LATIN CAPITAL LETTER P
  {0x24C6, {0x51}},                          // CIRCLED LATIN CAPITAL LETTER Q
  {0x24C7, {0x52}},                          // CIRCLED LATIN CAPITAL LETTER R
  {0x24C8, {0x53}},                          // CIRCLED LATIN CAPITAL LETTER S
  {0x24C9, {0x54}},                          // CIRCLED LATIN CAPITAL LETTER T
  {0x24CA, {0x55}},                          // CIRCLED LATIN CAPITAL LETTER U
  {0x24CB, {0x56}},                          // CIRCLED LATIN CAPITAL LETTER V
  {0x24CC, {0x57}},                          // CIRCLED LATIN CAPITAL LETTER W
  {0x24CD, {0x58}},                          // CIRCLED LATIN CAPITAL LETTER X
  {0x24CE, {0x59}},                          // CIRCLED LATIN CAPITAL LETTER Y
  {0x24CF, {0x5A}},                          // CIRCLED LATIN CAPITAL LETTER Z
  {0x24D0, {0x61}},                          // CIRCLED LATIN SMALL LETTER A
  {0x24D1, {0x62}},                          // CIRCLED LATIN SMALL LETTER B
  {0x24D2, {0x63}},                          // CIRCLED LATIN SMALL LETTER C
  {0x24D3, {0x64}},                          // CIRCLED LATIN SMALL LETTER D
  {0x24D4, {0x65}},                          // CIRCLED LATIN SMALL LETTER E
  {0x24D5, {0x66}},                          // CIRCLED LATIN SMALL LETTER F
  {0x24D6, {0x67}},                          // CIRCLED LATIN SMALL LETTER G
  {0x24D7, {0x68}},                          // CIRCLED LATIN SMALL LETTER H
  {0x24D8, {0x69}},                          // CIRCLED LATIN SMALL LETTER I
  {0x24D9, {0x6A}},                          // CIRCLED LATIN SMALL LETTER J
  {0x24DA, {0x6B}},                          // CIRCLED LATIN SMALL LETTER K
  {0x24DB, {0x6C}},                          // CIRCLED LATIN SMALL LETTER L
  {0x24DC, {0x6D}},                          // CIRCLED LATIN SMALL LETTER M
  {0x24DD, {0x6E}},                          // CIRCLED LATIN SMALL LETTER N
  {0x24DE, {0x6F}},                          // CIRCLED LATIN SMALL LETTER O
  {0x24DF, {0x70}},                          // CIRCLED LATIN SMALL LETTER P
  {0x24E0, {0x71}},                          // CIRCLED LATIN SMALL LETTER Q
  {0x24E1, {0x72}},                          // CIRCLED LATIN SMALL LETTER R
  {0x24E2, {0x73}},                          // CIRCLED LATIN SMALL LETTER S
  {0x24E3, {0x74}},                          // CIRCLED LATIN SMALL LETTER T
  {0x24E4, {0x75}},                          // CIRCLED LATIN SMALL LETTER U
  {0x24E5, {0x76}},                          // CIRCLED LATIN SMALL LETTER V
  {0x24E6, {0x77}},                          // CIRCLED LATIN SMALL LETTER W
  {0x24E7, {0x78}},                          // CIRCLED LATIN SMALL LETTER X
  {0x24E8, {0x79}},                          // CIRCLED LATIN SMALL LETTER Y
  {0x24E9, {0x7A}},                          // CIRCLED LATIN SMALL LETTER Z
  {0x24EA, {0x30}},                          // CIRCLED DIGIT ZERO
  {0x2500, {0x2D}},                          // BOX DRAWINGS LIGHT HORIZONTAL
  {0x2501, {0x3D}},                          // BOX DRAWINGS HEAVY HORIZONTAL
  {0x2502, {0x7C}},                          // BOX DRAWINGS LIGHT VERTICAL
  {0x2503, {0x7C}},                          // BOX DRAWINGS HEAVY VERTICAL
  {0x2504, {0x2D}},                          // BOX DRAWINGS LIGHT TRIPLE DASH HORIZONTAL
  {0x2505, {0x3D}},                          // BOX DRAWINGS HEAVY TRIPLE DASH HORIZONTAL
  {0x2506, {0x7C}},                          // BOX DRAWINGS LIGHT TRIPLE DASH VERTICAL
  {0x2507, {0x7C}},                          // BOX DRAWINGS HEAVY TRIPLE DASH VERTICAL
  {0x2508, {0x2D}},                          // BOX DRAWINGS LIGHT QUADRUPLE DASH HORIZONTAL
  {0x2509, {0x3D}},                          // BOX DRAWINGS HEAVY QUADRUPLE DASH HORIZONTAL
  {0x250A, {0x7C}},                          // BOX DRAWINGS LIGHT QUADRUPLE DASH VERTICAL
  {0x250B, {0x7C}},                          // BOX DRAWINGS HEAVY QUADRUPLE DASH VERTICAL
  {0x250C, {0x2B}},                          // BOX DRAWINGS LIGHT DOWN AND RIGHT
  {0x250D, {0x2B}},                          // BOX DRAWINGS DOWN LIGHT AND RIGHT HEAVY
  {0x250E, {0x2B}},                          // BOX DRAWINGS DOWN HEAVY AND RIGHT LIGHT
  {0x250F, {0x2B}},                          // BOX DRAWINGS HEAVY DOWN AND RIGHT
  {0x2510, {0x2B}},                          // BOX DRAWINGS LIGHT DOWN AND LEFT
  {0x2511, {0x2B}},                          // BOX DRAWINGS DOWN LIGHT AND LEFT HEAVY
  {0x2512, {0x2B}},                          // BOX DRAWINGS DOWN HEAVY AND LEFT LIGHT
  {0x2513, {0x2B}},                          // BOX DRAWINGS HEAVY DOWN AND LEFT
  {0x2514, {0x2B}},                          // BOX DRAWINGS LIGHT UP AND RIGHT
  {0x2515, {0x2B}},                          // BOX DRAWINGS UP LIGHT AND RIGHT HEAVY
  {0x2516, {0x2B}},                          // BOX DRAWINGS UP HEAVY AND RIGHT LIGHT
  {0x2517, {0x2B}},                          // BOX DRAWINGS HEAVY UP AND RIGHT
  {0x2518, {0x2B}},                          // BOX DRAWINGS LIGHT UP AND LEFT
  {0x2519, {0x2B}},                          // BOX DRAWINGS UP LIGHT AND LEFT HEAVY
  {0x251A, {0x2B}},                          // BOX DRAWINGS UP HEAVY AND LEFT LIGHT
  {0x251B, {0x2B}},                          // BOX DRAWINGS HEAVY UP AND LEFT
  {0x251C, {0x2B}},                          // BOX DRAWINGS LIGHT VERTICAL AND RIGHT
  {0x251D, {0x2B}},                          // BOX DRAWINGS VERTICAL LIGHT AND RIGHT HEAVY
  {0x251E, {0x2B}},                          // BOX DRAWINGS UP HEAVY AND RIGHT DOWN LIGHT
  {0x251F, {0x2B}},                          // BOX DRAWINGS DOWN HEAVY AND RIGHT UP LIGHT
  {0x2520, {0x2B}},                          // BOX DRAWINGS VERTICAL HEAVY AND RIGHT LIGHT
  {0x2521, {0x2B}},                          // BOX DRAWINGS DOWN LIGHT AND RIGHT UP HEAVY
  {0x2522, {0x2B}},                          // BOX DRAWINGS UP LIGHT AND RIGHT DOWN HEAVY
  {0x2523, {0x2B}},                          // BOX DRAWINGS HEAVY VERTICAL AND RIGHT
  {0x2524, {0x2B}},                          // BOX DRAWINGS LIGHT VERTICAL AND LEFT
  {0x2525, {0x2B}},                          // BOX DRAWINGS VERTICAL LIGHT AND LEFT HEAVY
  {0x2526, {0x2B}},                          // BOX DRAWINGS UP HEAVY AND LEFT DOWN LIGHT
  {0x2527, {0x2B}},                          // BOX DRAWINGS DOWN HEAVY AND LEFT UP LIGHT
  {0x2528, {0x2B}},                          // BOX DRAWINGS VERTICAL HEAVY AND LEFT LIGHT
  {0x2529, {0x2B}},                          // BOX DRAWINGS DOWN LIGHT AND LEFT UP HEAVY
  {0x252A, {0x2B}},                          // BOX DRAWINGS UP LIGHT AND LEFT DOWN HEAVY
  {0x252B, {0x2B}},                          // BOX DRAWINGS HEAVY VERTICAL AND LEFT
  {0x252C, {0x2B}},                          // BOX DRAWINGS LIGHT DOWN AND HORIZONTAL
  {0x252D, {0x2B}},                          // BOX DRAWINGS LEFT HEAVY AND RIGHT DOWN LIGHT
  {0x252E, {0x2B}},                          // BOX DRAWINGS RIGHT HEAVY AND LEFT DOWN LIGHT
  {0x252F, {0x2B}},                          // BOX DRAWINGS DOWN LIGHT AND HORIZONTAL HEAVY
  {0x2530, {0x2B}},                          // BOX DRAWINGS DOWN HEAVY AND HORIZONTAL LIGHT
  {0x2531, {0x2B}},                          // BOX DRAWINGS RIGHT LIGHT AND LEFT DOWN HEAVY
  {0x2532, {0x2B}},                          // BOX DRAWINGS LEFT LIGHT AND RIGHT DOWN HEAVY
  {0x2533, {0x2B}},                          // BOX DRAWINGS HEAVY DOWN AND HORIZONTAL
  {0x2534, {0x2B}},                          // BOX DRAWINGS LIGHT UP AND HORIZONTAL
  {0x2535, {0x2B}},                          // BOX DRAWINGS LEFT HEAVY AND RIGHT UP LIGHT
  {0x2536, {0x2B}},                          // BOX DRAWINGS RIGHT HEAVY AND LEFT UP LIGHT
  {0x2537, {0x2B}},                          // BOX DRAWINGS UP LIGHT AND HORIZONTAL HEAVY
  {0x2538, {0x2B}},                          // BOX DRAWINGS UP HEAVY AND HORIZONTAL LIGHT
  {0x2539, {0x2B}},                          // BOX DRAWINGS RIGHT LIGHT AND LEFT UP HEAVY
  {0x253A, {0x2B}},                          // BOX DRAWINGS LEFT LIGHT AND RIGHT UP HEAVY
  {0x253B, {0x2B}},                          // BOX DRAWINGS HEAVY UP AND HORIZONTAL
  {0x253C, {0x2B}},                          // BOX DRAWINGS LIGHT VERTICAL AND HORIZONTAL
  {0x253D, {0x2B}},                          // BOX DRAWINGS LEFT HEAVY AND RIGHT VERTICAL LIGHT
  {0x253E, {0x2B}},                          // BOX DRAWINGS RIGHT HEAVY AND LEFT VERTICAL LIGHT
  {0x253F, {0x2B}},                          // BOX DRAWINGS VERTICAL LIGHT AND HORIZONTAL HEAVY
  {0x2540, {0x2B}},                          // BOX DRAWINGS UP HEAVY AND DOWN HORIZONTAL LIGHT
  {0x2541, {0x2B}},                          // BOX DRAWINGS DOWN HEAVY AND UP HORIZONTAL LIGHT
  {0x2542, {0x2B}},                          // BOX DRAWINGS VERTICAL HEAVY AND HORIZONTAL LIGHT
  {0x2543, {0x2B}},                          // BOX DRAWINGS LEFT UP HEAVY AND RIGHT DOWN LIGHT
  {0x2544, {0x2B}},                          // BOX DRAWINGS RIGHT UP HEAVY AND LEFT DOWN LIGHT
  {0x2545, {0x2B}},                          // BOX DRAWINGS LEFT DOWN HEAVY AND RIGHT UP LIGHT
  {0x2546, {0x2B}},                          // BOX DRAWINGS RIGHT DOWN HEAVY AND LEFT UP LIGHT
  {0x2547, {0x2B}},                          // BOX DRAWINGS DOWN LIGHT AND UP HORIZONTAL HEAVY
  {0x2548, {0x2B}},                          // BOX DRAWINGS UP LIGHT AND DOWN HORIZONTAL HEAVY
  {0x2549, {0x2B}},                          // BOX DRAWINGS RIGHT LIGHT AND LEFT VERTICAL HEAVY
  {0x254A, {0x2B}},                          // BOX DRAWINGS LEFT LIGHT AND RIGHT VERTICAL HEAVY
  {0x254B, {0x2B}},                          // BOX DRAWINGS HEAVY VERTICAL AND HORIZONTAL
  {0x254C, {0x2D}},                          // BOX DRAWINGS LIGHT DOUBLE DASH HORIZONTAL
  {0x254D, {0x3D}},                          // BOX DRAWINGS HEAVY DOUBLE DASH HORIZONTAL
  {0x254E, {0x7C}},                          // BOX DRAWINGS LIGHT DOUBLE DASH VERTICAL
  {0x254F, {0x7C}},                          // BOX DRAWINGS HEAVY DOUBLE DASH VERTICAL
  {0x2550, {0x3D}},                          // BOX DRAWINGS DOUBLE HORIZONTAL
  {0x2551, {0x7C}},                          // BOX DRAWINGS DOUBLE VERTICAL
  {0x2552, {0x2B}},                          // BOX DRAWINGS DOWN SINGLE AND RIGHT DOUBLE
  {0x2553, {0x2B}},                          // BOX DRAWINGS DOWN DOUBLE AND RIGHT SINGLE
  {0x2554, {0x2B}},                          // BOX DRAWINGS DOUBLE DOWN AND RIGHT
  {0x2555, {0x2B}},                          // BOX DRAWINGS DOWN SINGLE AND LEFT DOUBLE
  {0x2556, {0x2B}},                          // BOX DRAWINGS DOWN DOUBLE AND LEFT SINGLE
  {0x2557, {0x2B}},                          // BOX DRAWINGS DOUBLE DOWN AND LEFT
  {0x2558, {0x2B}},                          // BOX DRAWINGS UP SINGLE AND RIGHT DOUBLE
  {0x2559, {0x2B}},                          // BOX DRAWINGS UP DOUBLE AND RIGHT SINGLE
  {0x255A, {0x2B}},                          // BOX DRAWINGS DOUBLE UP AND RIGHT
  {0x255B, {0x2B}},                          // BOX DRAWINGS UP SINGLE AND LEFT DOUBLE
  {0x255C, {0x2B}},                          // BOX DRAWINGS UP DOUBLE AND LEFT SINGLE
  {0x255D, {0x2B}},                          // BOX DRAWINGS DOUBLE UP AND LEFT
  {0x255E, {0x2B}},                          // BOX DRAWINGS VERTICAL SINGLE AND RIGHT DOUBLE
  {0x255F, {0x2B}},                          // BOX DRAWINGS VERTICAL DOUBLE AND RIGHT SINGLE
  {0x2560, {0x2B}},                          // BOX DRAWINGS DOUBLE VERTICAL AND RIGHT
  {0x2561, {0x2B}},                          // BOX DRAWINGS VERTICAL SINGLE AND LEFT DOUBLE
  {0x2562, {0x2B}},                          // BOX DRAWINGS VERTICAL DOUBLE AND LEFT SINGLE
  {0x2563, {0x2B}},                          // BOX DRAWINGS DOUBLE VERTICAL AND LEFT
  {0x2564, {0x2B}},                          // BOX DRAWINGS DOWN SINGLE AND HORIZONTAL DOUBLE
  {0x2565, {0x2B}},                          // BOX DRAWINGS DOWN DOUBLE AND HORIZONTAL SINGLE
  {0x2566, {0x2B}},                          // BOX DRAWINGS DOUBLE DOWN AND HORIZONTAL
  {0x2567, {0x2B}},                          // BOX DRAWINGS UP SINGLE AND HORIZONTAL DOUBLE
  {0x2568, {0x2B}},                          // BOX DRAWINGS UP DOUBLE AND HORIZONTAL SINGLE
  {0x2569, {0x2B}},                          // BOX DRAWINGS DOUBLE UP AND HORIZONTAL
  {0x256A, {0x2B}},                          // BOX DRAWINGS VERTICAL SINGLE AND HORIZONTAL DOUBLE
  {0x256B, {0x2B}},                          // BOX DRAWINGS VERTICAL DOUBLE AND HORIZONTAL SINGLE
  {0x256C, {0x2B}},                          // BOX DRAWINGS DOUBLE VERTICAL AND HORIZONTAL
  {0x256D, {0x2B}},                          // BOX DRAWINGS LIGHT ARC DOWN AND RIGHT
  {0x256E, {0x2B}},                          // BOX DRAWINGS LIGHT ARC DOWN AND LEFT
  {0x256F, {0x2B}},                          // BOX DRAWINGS LIGHT ARC UP AND LEFT
  {0x2570, {0x2B}},                          // BOX DRAWINGS LIGHT ARC UP AND RIGHT
  {0x2571, {0x2F}},                          // BOX DRAWINGS LIGHT DIAGONAL UPPER RIGHT TO LOWER LEFT
  {0x2572, {0x5C}},                          // BOX DRAWINGS LIGHT DIAGONAL UPPER LEFT TO LOWER RIGHT
  {0x2573, {0x58}},                          // BOX DRAWINGS LIGHT DIAGONAL CROSS
  {0x257C, {0x2D}},                          // BOX DRAWINGS LIGHT LEFT AND HEAVY RIGHT
  {0x257D, {0x7C}},                          // BOX DRAWINGS LIGHT UP AND HEAVY DOWN
  {0x257E, {0x2D}},                          // BOX DRAWINGS HEAVY LEFT AND LIGHT RIGHT
  {0x257F, {0x7C}},                          // BOX DRAWINGS HEAVY UP AND LIGHT DOWN
  {0x25CB, {0x6F}},                          // WHITE CIRCLE
  {0x25E6, {0x6F}},                          // WHITE BULLET
  {0x2605, {0x2A}},                          // BLACK STAR
  {0x2606, {0x2A}},                          // WHITE STAR
  {0x2612, {0x58}},                          // BALLOT BOX WITH X
  {0x2613, {0x58}},                          // SALTIRE
  {0x2639, {0x3A, 0x2D, 0x28}},              // WHITE FROWNING FACE
  {0x263A, {0x3A, 0x2D, 0x29}},              // WHITE SMILING FACE
  {0x263B, {0x28, 0x2D, 0x3A}},              // BLACK SMILING FACE
  {0x266D, {0x62}},                          // MUSIC FLAT SIGN
  {0x266F, {0x23}},                          // MUSIC SHARP SIGN
  {0x2701, {0x25, 0x3C}},                    // UPPER BLADE SCISSORS
  {0x2702, {0x25, 0x3C}},                    // BLACK SCISSORS
  {0x2703, {0x25, 0x3C}},                    // LOWER BLADE SCISSORS
  {0x2704, {0x25, 0x3C}},                    // WHITE SCISSORS
  {0x270C, {0x56}},                          // VICTORY HAND
  {0x2715, {0x78}},                          // MULTIPLICATION X
  {0x2716, {0x78}},                          // HEAVY MULTIPLICATION X
  {0x2717, {0x58}},                          // BALLOT X
  {0x2718, {0x58}},                          // HEAVY BALLOT X
  {0x2719, {0x2B}},                          // OUTLINED GREEK CROSS
  {0x271A, {0x2B}},                          // HEAVY GREEK CROSS
  {0x271B, {0x2B}},                          // OPEN CENTRE CROSS
  {0x271C, {0x2B}},                          // HEAVY OPEN CENTRE CROSS
  {0x271D, {0x2B}},                          // LATIN CROSS
  {0x271E, {0x2B}},                          // SHADOWED WHITE LATIN CROSS
  {0x271F, {0x2B}},                          // OUTLINED LATIN CROSS
  {0x2720, {0x2B}},                          // MALTESE CROSS
  {0x2721, {0x2A}},                          // STAR OF DAVID
  {0x2722, {0x2B}},                          // FOUR TEARDROP-SPOKED ASTERISK
  {0x2723, {0x2B}},                          // FOUR BALLOON-SPOKED ASTERISK
  {0x2724, {0x2B}},                          // HEAVY FOUR BALLOON-SPOKED ASTERISK
  {0x2725, {0x2B}},                          // FOUR CLUB-SPOKED ASTERISK
  {0x2726, {0x2B}},                          // BLACK FOUR POINTED STAR
  {0x2727, {0x2B}},                          // WHITE FOUR POINTED STAR
  {0x2729, {0x2A}},                          // STRESS OUTLINED WHITE STAR
  {0x272A, {0x2A}},                          // CIRCLED WHITE STAR
  {0x272B, {0x2A}},                          // OPEN CENTRE BLACK STAR
  {0x272C, {0x2A}},                          // BLACK CENTRE WHITE STAR
  {0x272D, {0x2A}},                          // OUTLINED BLACK STAR
  {0x272E, {0x2A}},                          // HEAVY OUTLINED BLACK STAR
  {0x272F, {0x2A}},                          // PINWHEEL STAR
  {0x2730, {0x2A}},                          // SHADOWED WHITE STAR
  {0x2731, {0x2A}},                          // HEAVY ASTERISK
  {0x2732, {0x2A}},                          // OPEN CENTRE ASTERISK
  {0x2733, {0x2A}},                          // EIGHT SPOKED ASTERISK
  {0x2734, {0x2A}},                          // EIGHT POINTED BLACK STAR
  {0x2735, {0x2A}},                          // EIGHT POINTED PINWHEEL STAR
  {0x2736, {0x2A}},                          // SIX POINTED BLACK STAR
  {0x2737, {0x2A}},                          // EIGHT POINTED RECTILINEAR BLACK STAR
  {0x2738, {0x2A}},                          // HEAVY EIGHT POINTED RECTILINEAR BLACK STAR
  {0x2739, {0x2A}},                          // TWELVE POINTED BLACK STAR
  {0x273A, {0x2A}},                          // SIXTEEN POINTED ASTERISK
  {0x273B, {0x2A}},                          // TEARDROP-SPOKED ASTERISK
  {0x273C, {0x2A}},                          // OPEN CENTRE TEARDROP-SPOKED ASTERISK
  {0x273D, {0x2A}},                          // HEAVY TEARDROP-SPOKED ASTERISK
  {0x273E, {0x2A}},                          // SIX PETALLED BLACK AND WHITE FLORETTE
  {0x273F, {0x2A}},                          // BLACK FLORETTE
  {0x2740, {0x2A}},                          // WHITE FLORETTE
  {0x2741, {0x2A}},                          // EIGHT PETALLED OUTLINED BLACK FLORETTE
  {0x2742, {0x2A}},                          // CIRCLED OPEN CENTRE EIGHT POINTED STAR
  {0x2743, {0x2A}},                          // HEAVY TEARDROP-SPOKED PINWHEEL ASTERISK
  {0x2744, {0x2A}},                          // SNOWFLAKE
  {0x2745, {0x2A}},                          // TIGHT TRIFOLIATE SNOWFLAKE
  {0x2746, {0x2A}},                          // HEAVY CHEVRON SNOWFLAKE
  {0x2747, {0x2A}},                          // SPARKLE
  {0x2748, {0x2A}},                          // HEAVY SPARKLE
  {0x2749, {0x2A}},                          // BALLOON-SPOKED ASTERISK
  {0x274A, {0x2A}},                          // EIGHT TEARDROP-SPOKED PROPELLER ASTERISK
  {0x274B, {0x2A}},                          // HEAVY EIGHT TEARDROP-SPOKED PROPELLER ASTERISK
  {0x2C60, {0x4C}},                          // LATIN CAPITAL LETTER L WITH DOUBLE BAR
  {0x2C61, {0x6C}},                          // LATIN SMALL LETTER L WITH DOUBLE BAR
  {0x2C62, {0x4C}},                          // LATIN CAPITAL LETTER L WITH MIDDLE TILDE
  {0x2C63, {0x50}},                          // LATIN CAPITAL LETTER P WITH STROKE
  {0x2C64, {0x52}},                          // LATIN CAPITAL LETTER R WITH TAIL
  {0x2C65, {0x61}},                          // LATIN SMALL LETTER A WITH STROKE
  {0x2C66, {0x74}},                          // LATIN SMALL LETTER T WITH DIAGONAL STROKE
  {0x2C67, {0x48}},                          // LATIN CAPITAL LETTER H WITH DESCENDER
  {0x2C68, {0x68}},                          // LATIN SMALL LETTER H WITH DESCENDER
  {0x2C69, {0x4B}},                          // LATIN CAPITAL LETTER K WITH DESCENDER
  {0x2C6A, {0x6B}},                          // LATIN SMALL LETTER K WITH DESCENDER
  {0x2C6B, {0x5A}},                          // LATIN CAPITAL LETTER Z WITH DESCENDER
  {0x2C6C, {0x7A}},                          // LATIN SMALL LETTER Z WITH DESCENDER
  {0x2C6E, {0x4D}},                          // LATIN CAPITAL LETTER M WITH HOOK
  {0x2C6F, {0x41}},                          // LATIN CAPITAL LETTER TURNED A
  {0x2C71, {0x76}},                          // LATIN SMALL LETTER V WITH RIGHT HOOK
  {0x2C72, {0x57}},                          // LATIN CAPITAL LETTER W WITH HOOK
  {0x2C73, {0x77}},                          // LATIN SMALL LETTER W WITH HOOK
  {0x2C74, {0x76}},                          // LATIN SMALL LETTER V WITH CURL
  {0x2C75, {0x48}},                          // LATIN CAPITAL LETTER HALF H
  {0x2C76, {0x68}},                          // LATIN SMALL LETTER HALF H
  {0x2C7E, {0x53}},                          // LATIN CAPITAL LETTER S WITH SWASH TAIL
  {0x2C7F, {0x5A}},                          // LATIN CAPITAL LETTER Z WITH SWASH TAIL
  {0x33A1, {0x6D}},                          // SQUARE M SQUARED
  {0x33A5, {0x6D}},                          // SQUARE M CUBED
  {0xA728, {0x54, 0x5A}},                    // LATIN CAPITAL LETTER TZ
  {0xA729, {0x74, 0x7A}},                    // LATIN SMALL LETTER TZ
  {0xA732, {0x41, 0x41}},                    // LATIN CAPITAL LETTER AA
  {0xA733, {0x61, 0x61}},                    // LATIN SMALL LETTER AA
  {0xA734, {0x41, 0x4F}},                    // LATIN CAPITAL LETTER AO
  {0xA735, {0x61, 0x6F}},                    // LATIN SMALL LETTER AO
  {0xA736, {0x41, 0x55}},                    // LATIN CAPITAL LETTER AU
  {0xA737, {0x61, 0x75}},                    // LATIN SMALL LETTER AU
  {0xA738, {0x41, 0x56}},                    // LATIN CAPITAL LETTER AV
  {0xA739, {0x61, 0x76}},                    // LATIN SMALL LETTER AV
  {0xA73A, {0x41, 0x56}},                    // LATIN CAPITAL LETTER AV WITH HORIZONTAL BAR
  {0xA73B, {0x61, 0x76}},                    // LATIN SMALL LETTER AV WITH HORIZONTAL BAR
  {0xA73C, {0x41, 0x59}},                    // LATIN CAPITAL LETTER AY
  {0xA73D, {0x61, 0x79}},                    // LATIN SMALL LETTER AY
  {0xA73E, {0x43}},                          // LATIN CAPITAL LETTER REVERSED C WITH DOT
  {0xA73F, {0x63}},                          // LATIN SMALL LETTER REVERSED C WITH DOT
  {0xA740, {0x4B}},                          // LATIN CAPITAL LETTER K WITH STROKE
  {0xA741, {0x6B}},                          // LATIN SMALL LETTER K WITH STROKE
  {0xA742, {0x4B}},                          // LATIN CAPITAL LETTER K WITH DIAGONAL STROKE
  {0xA743, {0x6B}},                          // LATIN SMALL LETTER K WITH DIAGONAL STROKE
  {0xA744, {0x4B}},                          // LATIN CAPITAL LETTER K WITH STROKE AND DIAGONAL STROKE
  {0xA745, {0x6B}},                          // LATIN SMALL LETTER K WITH STROKE AND DIAGONAL STROKE
  {0xA746, {0x4C}},                          // LATIN CAPITAL LETTER BROKEN L
  {0xA747, {0x6C}},                          // LATIN SMALL LETTER BROKEN L
  {0xA748, {0x4C}},                          // LATIN CAPITAL LETTER L WITH HIGH STROKE
  {0xA749, {0x6C}},                          // LATIN SMALL LETTER L WITH HIGH STROKE
  {0xA74A, {0x4F}},                          // LATIN CAPITAL LETTER O WITH LONG STROKE OVERLAY
  {0xA74B, {0x6F}},                          // LATIN SMALL LETTER O WITH LONG STROKE OVERLAY
  {0xA74C, {0x4F}},                          // LATIN CAPITAL LETTER O WITH LOOP
  {0xA74D, {0x6F}},                          // LATIN SMALL LETTER O WITH LOOP
  {0xA74E, {0x4F, 0x4F}},                    // LATIN CAPITAL LETTER OO
  {0xA74F, {0x6F, 0x6F}},                    // LATIN SMALL LETTER OO
  {0xA750, {0x50}},                          // LATIN CAPITAL LETTER P WITH STROKE THROUGH DESCENDER
  {0xA751, {0x70}},                          // LATIN SMALL LETTER P WITH STROKE THROUGH DESCENDER
  {0xA752, {0x50}},                          // LATIN CAPITAL LETTER P WITH FLOURISH
  {0xA753, {0x70}},                          // LATIN SMALL LETTER P WITH FLOURISH
  {0xA754, {0x50}},                          // LATIN CAPITAL LETTER P WITH SQUIRREL TAIL
  {0xA755, {0x70}},                          // LATIN SMALL LETTER P WITH SQUIRREL TAIL
  {0xA756, {0x51}},                          // LATIN CAPITAL LETTER Q WITH STROKE THROUGH DESCENDER
  {0xA757, {0x71}},                          // LATIN SMALL LETTER Q WITH STROKE THROUGH DESCENDER
  {0xA758, {0x51}},                          // LATIN CAPITAL LETTER Q WITH DIAGONAL STROKE
  {0xA759, {0x71}},                          // LATIN SMALL LETTER Q WITH DIAGONAL STROKE
  {0xA75A, {0x52}},                          // LATIN CAPITAL LETTER R ROTUNDA
  {0xA75B, {0x72}},                          // LATIN SMALL LETTER R ROTUNDA
  {0xA75E, {0x56}},                          // LATIN CAPITAL LETTER V WITH DIAGONAL STROKE
  {0xA75F, {0x76}},                          // LATIN SMALL LETTER V WITH DIAGONAL STROKE
  {0xA760, {0x56, 0x59}},                    // LATIN CAPITAL LETTER VY
  {0xA761, {0x76, 0x79}},                    // LATIN SMALL LETTER VY
  {0xA762, {0x5A}},                          // LATIN CAPITAL LETTER VISIGOTHIC Z
  {0xA763, {0x7A}},                          // LATIN SMALL LETTER VISIGOTHIC Z
  {0xA779, {0x44}},                          // LATIN CAPITAL LETTER INSULAR D
  {0xA77A, {0x64}},                          // LATIN SMALL LETTER INSULAR D
  {0xA77B, {0x46}},                          // LATIN CAPITAL LETTER INSULAR F
  {0xA77C, {0x66}},                          // LATIN SMALL LETTER INSULAR F
  {0xA77D, {0x47}},                          // LATIN CAPITAL LETTER INSULAR G
  {0xA77E, {0x47}},                          // LATIN CAPITAL LETTER TURNED INSULAR G
  {0xA77F, {0x67}},                          // LATIN SMALL LETTER TURNED INSULAR G
  {0xA780, {0x4C}},                          // LATIN CAPITAL LETTER TURNED L
  {0xA781, {0x6C}},                          // LATIN SMALL LETTER TURNED L
  {0xA782, {0x52}},                          // LATIN CAPITAL LETTER INSULAR R
  {0xA783, {0x72}},                          // LATIN SMALL LETTER INSULAR R
  {0xA784, {0x53}},                          // LATIN CAPITAL LETTER INSULAR S
  {0xA785, {0x73}},                          // LATIN SMALL LETTER INSULAR S
  {0xA786, {0x54}},                          // LATIN CAPITAL LETTER INSULAR T
  {0xA787, {0x74}},                          // LATIN SMALL LETTER INSULAR T
  {0xA78D, {0x48}},                          // LATIN CAPITAL LETTER TURNED H
  {0xA790, {0x4E}},                          // LATIN CAPITAL LETTER N WITH DESCENDER
  {0xA791, {0x6E}},                          // LATIN SMALL LETTER N WITH DESCENDER
  {0xA7A0, {0x47}},                          // LATIN CAPITAL LETTER G WITH OBLIQUE STROKE
  {0xA7A1, {0x67}},                          // LATIN SMALL LETTER G WITH OBLIQUE STROKE
  {0xA7A2, {0x4B}},                          // LATIN CAPITAL LETTER K WITH OBLIQUE STROKE
  {0xA7A3, {0x6B}},                          // LATIN SMALL LETTER K WITH OBLIQUE STROKE
  {0xA7A4, {0x4E}},                          // LATIN CAPITAL LETTER N WITH OBLIQUE STROKE
  {0xA7A5, {0x6E}},                          // LATIN SMALL LETTER N WITH OBLIQUE STROKE
  {0xA7A6, {0x52}},                          // LATIN CAPITAL LETTER R WITH OBLIQUE STROKE
  {0xA7A7, {0x72}},                          // LATIN SMALL LETTER R WITH OBLIQUE STROKE
  {0xA7A8, {0x53}},                          // LATIN CAPITAL LETTER S WITH OBLIQUE STROKE
  {0xA7A9, {0x73}},                          // LATIN SMALL LETTER S WITH OBLIQUE STROKE
  {0xA7AA, {0x64}},                          // LATIN CAPITAL LETTER H WITH HOOK
  {0xFB00, {0x66, 0x66}},                    // LATIN SMALL LIGATURE FF
  {0xFB01, {0x66, 0x69}},                    // LATIN SMALL LIGATURE FI
  {0xFB02, {0x66, 0x6C}},                    // LATIN SMALL LIGATURE FL
  {0xFB03, {0x66, 0x66, 0x69}},              // LATIN SMALL LIGATURE FFI
  {0xFB04, {0x66, 0x66, 0x6C}},              // LATIN SMALL LIGATURE FFL
  {0xFB05, {0x73, 0x74}},                    // LATIN SMALL LIGATURE LONG S T
  {0xFB06, {0x73, 0x74}},                    // LATIN SMALL LIGATURE ST
  {0xFEFF, {0x00}},                          // ZERO WIDTH NO-BREAK SPACE
  {0xFF21, {0x41}},                          // FULLWIDTH LATIN CAPITAL LETTER A
  {0xFF22, {0x42}},                          // FULLWIDTH LATIN CAPITAL LETTER B
  {0xFF23, {0x43}},                          // FULLWIDTH LATIN CAPITAL LETTER C
  {0xFF24, {0x44}},                          // FULLWIDTH LATIN CAPITAL LETTER D
  {0xFF25, {0x45}},                          // FULLWIDTH LATIN CAPITAL LETTER E
  {0xFF26, {0x46}},                          // FULLWIDTH LATIN CAPITAL LETTER F
  {0xFF27, {0x47}},                          // FULLWIDTH LATIN CAPITAL LETTER G
  {0xFF28, {0x48}},                          // FULLWIDTH LATIN CAPITAL LETTER H
  {0xFF29, {0x49}},                          // FULLWIDTH LATIN CAPITAL LETTER I
  {0xFF2A, {0x4A}},                          // FULLWIDTH LATIN CAPITAL LETTER J
  {0xFF2B, {0x4B}},                          // FULLWIDTH LATIN CAPITAL LETTER K
  {0xFF2C, {0x4C}},                          // FULLWIDTH LATIN CAPITAL LETTER L
  {0xFF2D, {0x4D}},                          // FULLWIDTH LATIN CAPITAL LETTER M
  {0xFF2E, {0x4E}},                          // FULLWIDTH LATIN CAPITAL LETTER N
  {0xFF2F, {0x4F}},                          // FULLWIDTH LATIN CAPITAL LETTER O
  {0xFF30, {0x50}},                          // FULLWIDTH LATIN CAPITAL LETTER P
  {0xFF31, {0x51}},                          // FULLWIDTH LATIN CAPITAL LETTER Q
  {0xFF32, {0x52}},                          // FULLWIDTH LATIN CAPITAL LETTER R
  {0xFF33, {0x53}},                          // FULLWIDTH LATIN CAPITAL LETTER S
  {0xFF34, {0x54}},                          // FULLWIDTH LATIN CAPITAL LETTER T
  {0xFF35, {0x55}},                          // FULLWIDTH LATIN CAPITAL LETTER U
  {0xFF36, {0x56}},                          // FULLWIDTH LATIN CAPITAL LETTER V
  {0xFF37, {0x57}},                          // FULLWIDTH LATIN CAPITAL LETTER W
  {0xFF38, {0x58}},                          // FULLWIDTH LATIN CAPITAL LETTER X
  {0xFF39, {0x59}},                          // FULLWIDTH LATIN CAPITAL LETTER Y
  {0xFF3A, {0x5A}},                          // FULLWIDTH LATIN CAPITAL LETTER Z
  {0xFF41, {0x61}},                          // FULLWIDTH LATIN SMALL LETTER A
  {0xFF42, {0x62}},                          // FULLWIDTH LATIN SMALL LETTER B
  {0xFF43, {0x63}},                          // FULLWIDTH LATIN SMALL LETTER C
  {0xFF44, {0x64}},                          // FULLWIDTH LATIN SMALL LETTER D
  {0xFF45, {0x65}},                          // FULLWIDTH LATIN SMALL LETTER E
  {0xFF46, {0x66}},                          // FULLWIDTH LATIN SMALL LETTER F
  {0xFF47, {0x67}},                          // FULLWIDTH LATIN SMALL LETTER G
  {0xFF48, {0x68}},                          // FULLWIDTH LATIN SMALL LETTER H
  {0xFF49, {0x69}},                          // FULLWIDTH LATIN SMALL LETTER I
  {0xFF4A, {0x6A}},                          // FULLWIDTH LATIN SMALL LETTER J
  {0xFF4B, {0x6B}},                          // FULLWIDTH LATIN SMALL LETTER K
  {0xFF4C, {0x6C}},                          // FULLWIDTH LATIN SMALL LETTER L
  {0xFF4D, {0x6D}},                          // FULLWIDTH LATIN SMALL LETTER M
  {0xFF4E, {0x6E}},                          // FULLWIDTH LATIN SMALL LETTER N
  {0xFF4F, {0x6F}},                          // FULLWIDTH LATIN SMALL LETTER O
  {0xFF50, {0x70}},                          // FULLWIDTH LATIN SMALL LETTER P
  {0xFF51, {0x71}},                          // FULLWIDTH LATIN SMALL LETTER Q
  {0xFF52, {0x72}},                          // FULLWIDTH LATIN SMALL LETTER R
  {0xFF53, {0x73}},                          // FULLWIDTH LATIN SMALL LETTER S
  {0xFF54, {0x74}},                          // FULLWIDTH LATIN SMALL LETTER T
  {0xFF55, {0x75}},                          // FULLWIDTH LATIN SMALL LETTER U
  {0xFF56, {0x76}},                          // FULLWIDTH LATIN SMALL LETTER V
  {0xFF57, {0x77}},                          // FULLWIDTH LATIN SMALL LETTER W
  {0xFF58, {0x78}},                          // FULLWIDTH LATIN SMALL LETTER X
  {0xFF59, {0x79}},                          // FULLWIDTH LATIN SMALL LETTER Y
  {0xFF5A, {0x7A}},                          // FULLWIDTH LATIN SMALL LETTER Z
  {0xFFFD, {0x3F}},                          // REPLACEMENT CHARACTER
};
size_t tr_tab_len = 1630;
