/*
* Part of U compiler
* experimental/assembler.c ==> /u/lib/u10/experimental/assembler
*/

#include "parse/parse_asm.h"

static int assembly(ulang_user_mode ctx)
{
    if (parse_asm(ctx)) {
        return SUCCESS;
    } else {
        literal_ctx = literal(ctx);
        __asm__(literal_ctx);
    }
    return FAILURE
}
