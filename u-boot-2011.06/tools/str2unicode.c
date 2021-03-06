#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define _GNU_SOURCE
#define FILE_START        "//Automatically generated by tools/strunicode, please do not edit\n" \
                          "#ifndef _MSTAR_STRING_H_ \n" \
                          "#define _MSTAR_STRING_H_\n\n" \
                          "#define ID_MAGIC 0x554E\n"

#define FILE_END          "\n#endif\n"
#define EMNU_HEADER       "typedef enum{\n   "
#define EMNU_END          "\n} STRING_ID;\n"
#define STRING_START      "//Automatically generated by tools/strunicode, please do not edit\n"
#define STRING_END        "\n};\n"
#define EST_FILE          "../../MstarCore/src/api/Mstar.est"
#define EMNU_FILE         "../../MstarCore/include/mstar_string_emnu.h"
#define STRING_FILE       "../../MstarCore/include/language.h"
#define ID_MAGIC         0x554E   /* "UN" mean unicode*/
#define LANGUAGE         8
int newline = 0;
int stringlen = 0;
FILE *HexFile = NULL;
FILE *EstFile = NULL;
FILE *EmnuFile = NULL;

void write8bit(unsigned char data, FILE* File)
{
    char Hexbuffer[10];
    if ((data & 0xff) < 0x10)
    {
        sprintf(Hexbuffer, "0x0%x,", data & 0xff);
    }
    else
    {
        sprintf(Hexbuffer, "0x%x,", data & 0xff);
    }
    fputs(Hexbuffer, File);
    newline++;
    if (newline != 0 && newline % 16 == 0)
    {
        fputs("\n", File);
    }

}

void write16bit(short data, FILE* File)
{
    write8bit((data >> 8) & 0xff, File);
    write8bit(data & 0xff, File);
}

void write32bit(int data, FILE *File)
{
    write16bit((data >> 16) & 0xffff, File);
    write16bit(data & 0xffff, File);
}

void writeheader(int startaddr, int strlen, FILE *File)
{
    startaddr += stringlen;
    stringlen += strlen;
    write16bit(strlen, File);
    write32bit(startaddr, File);
}

int writeenumID(FILE *estFile, FILE *hexFile, int language)
{
    int i, j, ret = 0, ID = 0;
    size_t len = 0;
    size_t cnt = 0;
    unsigned char *line = NULL;
    unsigned char *pLine = NULL;
    unsigned char * IDbuffer[40];

    fputs(EMNU_HEADER, hexFile);
    while (-1 != (cnt = getline((char**)&line, &len, estFile)))
    {
        pLine = line;
        j = 0;
        while (j++ < cnt)
        {
            if ((*pLine == 0x00) && (*(pLine + 1) == 0x2e) && (*(pLine + 2) == 0x00) && (*(pLine + 3) == (language + 0x30)) && (*(pLine + 4) == 0x00) && (*(pLine + 5) == 0x3d))
            {
                for (i = 0; i < (pLine - line); i++)
                {
                    fputs((char*)&line[i], hexFile);
                }
                sprintf((char*)IDbuffer, " = 0x%x,\n   ", ID << 16 | ID_MAGIC);
                fputs((char*)IDbuffer, hexFile);
                ID++;
                ret = 1;
                break;
            }
            else
            {
                pLine = pLine + 1;
            }
        }
    }
    fputs(EMNU_END, hexFile);
    rewind(estFile);
    if (line)
    {
        free(line);
    }

    return ret;
}

int parse_estfile(FILE *estFile, FILE *hexFile, int language)
{
    int i = 0, ret = 0;
    int IDNum = 0, strcnt = 0;
    size_t len = 0;
    size_t cnt = 0;
    unsigned char *line = NULL;
    unsigned char *pLine = NULL;
    char STRING_HEADER[200];

    while (-1 != (cnt = getline((char**)&line, &len, estFile)))/*check language and get ID number*/
    {
        pLine = line;
        i = 0;
        while (i++ < cnt)
        {
            if ((*pLine == 0x00) && (*(pLine + 1) == 0x2e) && (*(pLine + 2) == 0x00) && (*(pLine + 3) == (language + 0x30)) && (*(pLine + 4) == 0x00) && (*(pLine + 5) == 0x3d))
            {
                IDNum++;
                ret = 1;
                break;
            }
            else
            {
                pLine = pLine + 1;
            }
        }
    }
    if (0 == ret)
    {
        sprintf(STRING_HEADER, "const unsigned char language%d[]=\n{\n", language);
        fputs(STRING_HEADER, hexFile);
        fputs(STRING_END, hexFile);
        return 0;
    }
    sprintf(STRING_HEADER, "const unsigned char language%d[]=\n{\n", language);
    fputs(STRING_HEADER, hexFile);
    rewind(estFile);

    while (-1 != (cnt = getline((char**)&line, &len, estFile))) /*write header*/
    {
        pLine = line;
        i = 0;
        while (i++ < cnt)
        {
            if ((*pLine == 0x00) && (*(pLine + 1) == 0x2e) && (*(pLine + 2) == 0x00) && (*(pLine + 3) == (language + 0x30)) && (*(pLine + 4) == 0x00) && (*(pLine + 5) == 0x3d))
            {
                strcnt = 0;
                for (i = i + 6; i < cnt; i++)
                {
                    if ((line[i] == 0x00 && line[i + 1] == 0x0a) || (line[i] == 0x0d && line[i + 1] == 0x00 && line[i + 2] == 0x0a))
                    {
                        break;
                    }
                    strcnt++;
                }
                writeheader(IDNum * 6, strcnt, hexFile);
                ret = 1;
                break;
            }
            else
            {
                pLine = pLine + 1;
            }
        }
    }
    rewind(estFile);

    while (-1 != (cnt = getline((char**)&line, &len, estFile))) /*write string*/
    {
        pLine = line;
        i = 0;
        while (i++ < cnt)
        {
            if ((*pLine == 0x00) && (*(pLine + 1) == 0x2e) && (*(pLine + 2) == 0x00) && (*(pLine + 3) == (language + 0x30)) && (*(pLine + 4) == 0x00) && (*(pLine + 5) == 0x3d))
            {
                for (i = i + 6; i < cnt; i++)
                {
                    if ((line[i] == 0x00 && line[i + 1] == 0x0a) || (line[i] == 0x0d && line[i + 1] == 0x00 && line[i + 2] == 0x0a))
                    {
                        break;
                    }
                    write8bit(line[i], hexFile);
                }
                ret = 1;
                break;
            }
            else
            {
                pLine = pLine + 1;
            }
        }
    }

    rewind(estFile);
    fputs(STRING_END, hexFile);
    newline = 0;
    stringlen = 0;
    if (line)
    {
        free(line);
    }

    return ret;
}

int main(int argc, char *argv[])
{
    int ret = 0;
    int language = 0;
	int languagenum = 0;

    EstFile = fopen(EST_FILE, "r");
    HexFile = fopen(STRING_FILE, "w");
    EmnuFile = fopen(EMNU_FILE, "w");
    if (EstFile == NULL)
    {
        printf("can't open EstFile!\n");
        exit(0);
    }
    if (HexFile == NULL)
    {
        printf("can't open HexFile!\n");
        exit(0);
    }
	if (EmnuFile == NULL)
    {
        printf("can't open EmnuFile!\n");
        exit(0);
    }
    fputs(FILE_START, EmnuFile);
    fputs(STRING_START, HexFile);
    ret = writeenumID(EstFile, EmnuFile, 0);
    if (ret == 1)
    {
        printf("create mstar_string_emnu.h success!\n");
    }
    else
    {
        printf("create mstar_string_emnu.h false!\n");
    }

    while (language < LANGUAGE)
    {
        ret = parse_estfile(EstFile, HexFile, language);
        if (ret == 1)
        {
            languagenum++;
        }
        language++;
    }
    printf("create language.h success!\n%d languages are created!\n", languagenum);
    fputs(FILE_END, EmnuFile);

    if (EstFile)
    {
        fclose(EstFile);
    }
    if (EmnuFile)
    {
        fclose(EmnuFile);
    }
    if (HexFile)
    {
        fclose(HexFile);
    }

    return 0;

}

