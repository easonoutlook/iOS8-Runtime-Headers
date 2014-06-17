/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSDate, NSString, NSNumber;

@interface TSTFormulaPredicate : NSObject <NSCopying> {
    struct TSCEFormula { 
        struct TSCEASTNodeArray {} *mASTNodeArray; 
        struct TSCEFormulaTranslationFlags { 
            unsigned int mExcelImportTranslation : 1; 
            unsigned int mNumberToDateCoercionRemovalTranslation : 1; 
        } mTranslationFlags; 
    } mFormula;
    int mPredicateType;
    int mQualifier1;
    int mQualifier2;
    int mArgIndex0;
    int mArgIndex1;
    int mArgIndex2;
    BOOL mParamsAreDone;
    int mNodeTag0;
    int mNodeTag1;
    int mNodeTag2;
    double mNumberParam1;
    double mNumberParam2;
    NSString *mStringParam1;
    NSDate *mDateTimeParam1;
    NSDate *mDateTimeParam2;
    struct TSCENumberValue { int (**x1)(); double x2; int x3[1]; struct TSUFormat { int (**x_4_1_1)(); int x_4_1_2; boolx_4_1_3; union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 8; unsigned int x_1_3_3 : 3; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 1; } x_4_2_1; struct { unsigned int x_2_3_1 : 8; } x_4_2_2; struct { unsigned int x_3_3_1 : 8; unsigned int x_3_3_2 : 8; unsigned int x_3_3_3 : 1; } x_4_2_3; struct { unsigned int x_4_3_1 : 1; unsigned int x_4_3_2 : 1; id x_4_3_3; } x_4_2_4; struct { unsigned int x_5_3_1 : 1; int x_5_3_2; int x_5_3_3; int x_5_3_4; } x_4_2_5; struct { unsigned int x_6_3_1; struct { /* ? */ } *x_6_3_2; } x_4_2_6; struct { double x_7_3_1; double x_7_3_2; double x_7_3_3; int x_7_3_4; unsigned int x_7_3_5 : 2; unsigned int x_7_3_6 : 2; } x_4_2_7; struct { int x_8_3_1; unsigned int x_8_3_2; id x_8_3_3; } x_4_2_8; } x_4_1_4; struct TSUCustomFormat {} *x_4_1_5; } x4; BOOL x5; } *mDurationParam1;
    struct TSCENumberValue { int (**x1)(); double x2; int x3[1]; struct TSUFormat { int (**x_4_1_1)(); int x_4_1_2; boolx_4_1_3; union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 8; unsigned int x_1_3_3 : 3; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 1; } x_4_2_1; struct { unsigned int x_2_3_1 : 8; } x_4_2_2; struct { unsigned int x_3_3_1 : 8; unsigned int x_3_3_2 : 8; unsigned int x_3_3_3 : 1; } x_4_2_3; struct { unsigned int x_4_3_1 : 1; unsigned int x_4_3_2 : 1; id x_4_3_3; } x_4_2_4; struct { unsigned int x_5_3_1 : 1; int x_5_3_2; int x_5_3_3; int x_5_3_4; } x_4_2_5; struct { unsigned int x_6_3_1; struct { /* ? */ } *x_6_3_2; } x_4_2_6; struct { double x_7_3_1; double x_7_3_2; double x_7_3_3; int x_7_3_4; unsigned int x_7_3_5 : 2; unsigned int x_7_3_6 : 2; } x_4_2_7; struct { int x_8_3_1; unsigned int x_8_3_2; id x_8_3_3; } x_4_2_8; } x_4_1_4; struct TSUCustomFormat {} *x_4_1_5; } x4; BOOL x5; } *mDurationParam2;
    struct { 
        unsigned int row : 21; 
        unsigned int column : 15; 
        unsigned int rowIsAbsolute : 1; 
        unsigned int columnIsAbsolute : 1; 
        struct { 
            unsigned char byte0; 
            unsigned char byte1; 
            unsigned char byte2; 
            unsigned char byte3; 
            unsigned char byte4; 
            unsigned char byte5; 
            unsigned char byte6; 
            unsigned char byte7; 
            unsigned char byte8; 
            unsigned char byte9; 
            unsigned char byte10; 
            unsigned char byte11; 
            unsigned char byte12; 
            unsigned char byte13; 
            unsigned char byte14; 
            unsigned char byte15; 
        } tableID; 
    } mCrossTableRefParam0;
    struct { 
        unsigned int row : 21; 
        unsigned int column : 15; 
        unsigned int rowIsAbsolute : 1; 
        unsigned int columnIsAbsolute : 1; 
        struct { 
            unsigned char byte0; 
            unsigned char byte1; 
            unsigned char byte2; 
            unsigned char byte3; 
            unsigned char byte4; 
            unsigned char byte5; 
            unsigned char byte6; 
            unsigned char byte7; 
            unsigned char byte8; 
            unsigned char byte9; 
            unsigned char byte10; 
            unsigned char byte11; 
            unsigned char byte12; 
            unsigned char byte13; 
            unsigned char byte14; 
            unsigned char byte15; 
        } tableID; 
    } mCrossTableRefParam1;
    struct { 
        unsigned int row : 21; 
        unsigned int column : 15; 
        unsigned int rowIsAbsolute : 1; 
        unsigned int columnIsAbsolute : 1; 
        struct { 
            unsigned char byte0; 
            unsigned char byte1; 
            unsigned char byte2; 
            unsigned char byte3; 
            unsigned char byte4; 
            unsigned char byte5; 
            unsigned char byte6; 
            unsigned char byte7; 
            unsigned char byte8; 
            unsigned char byte9; 
            unsigned char byte10; 
            unsigned char byte11; 
            unsigned char byte12; 
            unsigned char byte13; 
            unsigned char byte14; 
            unsigned char byte15; 
        } tableID; 
    } mCrossTableRefParam2;
    struct { 
        unsigned int row : 21; 
        unsigned int rowIsAbsolute : 1; 
        struct { 
            unsigned char byte0; 
            unsigned char byte1; 
            unsigned char byte2; 
            unsigned char byte3; 
            unsigned char byte4; 
            unsigned char byte5; 
            unsigned char byte6; 
            unsigned char byte7; 
            unsigned char byte8; 
            unsigned char byte9; 
            unsigned char byte10; 
            unsigned char byte11; 
            unsigned char byte12; 
            unsigned char byte13; 
            unsigned char byte14; 
            unsigned char byte15; 
        } tableID; 
    } mCrossTableRowRefParam0;
    struct { 
        unsigned int row : 21; 
        unsigned int rowIsAbsolute : 1; 
        struct { 
            unsigned char byte0; 
            unsigned char byte1; 
            unsigned char byte2; 
            unsigned char byte3; 
            unsigned char byte4; 
            unsigned char byte5; 
            unsigned char byte6; 
            unsigned char byte7; 
            unsigned char byte8; 
            unsigned char byte9; 
            unsigned char byte10; 
            unsigned char byte11; 
            unsigned char byte12; 
            unsigned char byte13; 
            unsigned char byte14; 
            unsigned char byte15; 
        } tableID; 
    } mCrossTableRowRefParam1;
    struct { 
        unsigned int row : 21; 
        unsigned int rowIsAbsolute : 1; 
        struct { 
            unsigned char byte0; 
            unsigned char byte1; 
            unsigned char byte2; 
            unsigned char byte3; 
            unsigned char byte4; 
            unsigned char byte5; 
            unsigned char byte6; 
            unsigned char byte7; 
            unsigned char byte8; 
            unsigned char byte9; 
            unsigned char byte10; 
            unsigned char byte11; 
            unsigned char byte12; 
            unsigned char byte13; 
            unsigned char byte14; 
            unsigned char byte15; 
        } tableID; 
    } mCrossTableRowRefParam2;
    struct { 
        unsigned int column : 15; 
        unsigned int columnIsAbsolute : 1; 
        struct { 
            unsigned char byte0; 
            unsigned char byte1; 
            unsigned char byte2; 
            unsigned char byte3; 
            unsigned char byte4; 
            unsigned char byte5; 
            unsigned char byte6; 
            unsigned char byte7; 
            unsigned char byte8; 
            unsigned char byte9; 
            unsigned char byte10; 
            unsigned char byte11; 
            unsigned char byte12; 
            unsigned char byte13; 
            unsigned char byte14; 
            unsigned char byte15; 
        } tableID; 
    } mCrossTableColumnRefParam0;
    struct { 
        unsigned int column : 15; 
        unsigned int columnIsAbsolute : 1; 
        struct { 
            unsigned char byte0; 
            unsigned char byte1; 
            unsigned char byte2; 
            unsigned char byte3; 
            unsigned char byte4; 
            unsigned char byte5; 
            unsigned char byte6; 
            unsigned char byte7; 
            unsigned char byte8; 
            unsigned char byte9; 
            unsigned char byte10; 
            unsigned char byte11; 
            unsigned char byte12; 
            unsigned char byte13; 
            unsigned char byte14; 
            unsigned char byte15; 
        } tableID; 
    } mCrossTableColumnRefParam1;
    struct { 
        unsigned int column : 15; 
        unsigned int columnIsAbsolute : 1; 
        struct { 
            unsigned char byte0; 
            unsigned char byte1; 
            unsigned char byte2; 
            unsigned char byte3; 
            unsigned char byte4; 
            unsigned char byte5; 
            unsigned char byte6; 
            unsigned char byte7; 
            unsigned char byte8; 
            unsigned char byte9; 
            unsigned char byte10; 
            unsigned char byte11; 
            unsigned char byte12; 
            unsigned char byte13; 
            unsigned char byte14; 
            unsigned char byte15; 
        } tableID; 
    } mCrossTableColumnRefParam2;
    struct { 
        int type; 
        union { 
            NSNumber *number; 
            NSDate *date; 
            NSString *string; 
            struct { 
                unsigned char column; 
                unsigned short row; 
                struct __CFUUID {} *tableID; 
                BOOL columnIsAbsolute; 
                BOOL rowIsAbsolute; 
            } reference; 
            struct { 
                double value; 
                int units; 
            } duration; 
        } ; 
    } mPredicateArgs[2];
}

+ (BOOL)isThresholdNeededForType:(int)arg1;

- (void)setFormula:(const struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; } x2; }*)arg1;
- (struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; } x2; }*)formula;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)copyByOffsettingRelativeReferencesWithColumnOffset:(short)arg1 rowOffset:(int)arg2;
- (id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3;
- (const struct { unsigned int x1 : 21; unsigned int x2 : 1; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; unsigned char x_3_1_8; unsigned char x_3_1_9; unsigned char x_3_1_10; unsigned char x_3_1_11; unsigned char x_3_1_12; unsigned char x_3_1_13; unsigned char x_3_1_14; unsigned char x_3_1_15; unsigned char x_3_1_16; } x3; }*)crossTableRowRefParam2;
- (const struct { unsigned int x1 : 21; unsigned int x2 : 1; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; unsigned char x_3_1_8; unsigned char x_3_1_9; unsigned char x_3_1_10; unsigned char x_3_1_11; unsigned char x_3_1_12; unsigned char x_3_1_13; unsigned char x_3_1_14; unsigned char x_3_1_15; unsigned char x_3_1_16; } x3; }*)crossTableRowRefParam1;
- (const struct { unsigned int x1 : 21; unsigned int x2 : 1; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; unsigned char x_3_1_8; unsigned char x_3_1_9; unsigned char x_3_1_10; unsigned char x_3_1_11; unsigned char x_3_1_12; unsigned char x_3_1_13; unsigned char x_3_1_14; unsigned char x_3_1_15; unsigned char x_3_1_16; } x3; }*)crossTableRowRefParam0;
- (const struct { unsigned int x1 : 15; unsigned int x2 : 1; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; unsigned char x_3_1_8; unsigned char x_3_1_9; unsigned char x_3_1_10; unsigned char x_3_1_11; unsigned char x_3_1_12; unsigned char x_3_1_13; unsigned char x_3_1_14; unsigned char x_3_1_15; unsigned char x_3_1_16; } x3; }*)crossTableColumnRefParam2;
- (const struct { unsigned int x1 : 15; unsigned int x2 : 1; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; unsigned char x_3_1_8; unsigned char x_3_1_9; unsigned char x_3_1_10; unsigned char x_3_1_11; unsigned char x_3_1_12; unsigned char x_3_1_13; unsigned char x_3_1_14; unsigned char x_3_1_15; unsigned char x_3_1_16; } x3; }*)crossTableColumnRefParam1;
- (const struct { unsigned int x1 : 15; unsigned int x2 : 1; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; unsigned char x_3_1_8; unsigned char x_3_1_9; unsigned char x_3_1_10; unsigned char x_3_1_11; unsigned char x_3_1_12; unsigned char x_3_1_13; unsigned char x_3_1_14; unsigned char x_3_1_15; unsigned char x_3_1_16; } x3; }*)crossTableColumnRefParam0;
- (id)initWithLiteralCellType:(int)arg1 argumentCellReference:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })arg2 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3;
- (BOOL)isEqualForInspector:(id)arg1 atHostCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (void)p_populateMembersFromFormula;
- (BOOL)p_testDataTypesForArg0:(int)arg1 arg1:(int)arg2 arg2:(int)arg3 predShouldReturn:(BOOL*)arg4;
- (int)nodeTag2;
- (int)nodeTag1;
- (int)p_argTypeForNodeTag:(int)arg1 argNum:(unsigned int)arg2 calculationEngine:(id)arg3 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg4;
- (int)nodeTag0;
- (const struct { unsigned int x1 : 21; unsigned int x2 : 15; unsigned int x3 : 1; unsigned int x4 : 1; struct { unsigned char x_5_1_1; unsigned char x_5_1_2; unsigned char x_5_1_3; unsigned char x_5_1_4; unsigned char x_5_1_5; unsigned char x_5_1_6; unsigned char x_5_1_7; unsigned char x_5_1_8; unsigned char x_5_1_9; unsigned char x_5_1_10; unsigned char x_5_1_11; unsigned char x_5_1_12; unsigned char x_5_1_13; unsigned char x_5_1_14; unsigned char x_5_1_15; unsigned char x_5_1_16; } x5; }*)crossTableRefParam2;
- (const struct { unsigned int x1 : 21; unsigned int x2 : 15; unsigned int x3 : 1; unsigned int x4 : 1; struct { unsigned char x_5_1_1; unsigned char x_5_1_2; unsigned char x_5_1_3; unsigned char x_5_1_4; unsigned char x_5_1_5; unsigned char x_5_1_6; unsigned char x_5_1_7; unsigned char x_5_1_8; unsigned char x_5_1_9; unsigned char x_5_1_10; unsigned char x_5_1_11; unsigned char x_5_1_12; unsigned char x_5_1_13; unsigned char x_5_1_14; unsigned char x_5_1_15; unsigned char x_5_1_16; } x5; }*)crossTableRefParam1;
- (const struct { unsigned int x1 : 21; unsigned int x2 : 15; unsigned int x3 : 1; unsigned int x4 : 1; struct { unsigned char x_5_1_1; unsigned char x_5_1_2; unsigned char x_5_1_3; unsigned char x_5_1_4; unsigned char x_5_1_5; unsigned char x_5_1_6; unsigned char x_5_1_7; unsigned char x_5_1_8; unsigned char x_5_1_9; unsigned char x_5_1_10; unsigned char x_5_1_11; unsigned char x_5_1_12; unsigned char x_5_1_13; unsigned char x_5_1_14; unsigned char x_5_1_15; unsigned char x_5_1_16; } x5; }*)crossTableRefParam0;
- (void)p_setParamIndex2:(int)arg1;
- (void)p_setParamIndex1:(int)arg1;
- (void)p_setParamIndex0:(int)arg1;
- (void)p_setQualifier2:(int)arg1;
- (void)p_setQualifier1:(int)arg1;
- (void)p_setPredicateType:(int)arg1;
- (id)initWithPredicateType:(int)arg1 arg1:(struct { int x1; union { id x_2_1_1; id x_2_1_2; id x_2_1_3; struct { unsigned char x_4_2_1; unsigned short x_4_2_2; struct __CFUUID {} *x_4_2_3; BOOL x_4_2_4; BOOL x_4_2_5; } x_2_1_4; struct { double x_5_2_1; int x_5_2_2; } x_2_1_5; } x2; })arg2 arg2:(struct { int x1; union { id x_2_1_1; id x_2_1_2; id x_2_1_3; struct { unsigned char x_4_2_1; unsigned short x_4_2_2; struct __CFUUID {} *x_4_2_3; BOOL x_4_2_4; BOOL x_4_2_5; } x_2_1_4; struct { double x_5_2_1; int x_5_2_2; } x_2_1_5; } x2; })arg3 qualifier1:(int)arg4 qualifier2:(int)arg5 argumentCellReference:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })arg6 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg7;
- (void)p_appendASTForPeriodBoundary:(struct TSCEASTNodeArray { char *x1; unsigned int x2; unsigned int x3; id x4; }*)arg1 scale:(int)arg2 direction:(int)arg3 offset:(struct { int x1; union { id x_2_1_1; id x_2_1_2; id x_2_1_3; struct { unsigned char x_4_2_1; unsigned short x_4_2_2; struct __CFUUID {} *x_4_2_3; BOOL x_4_2_4; BOOL x_4_2_5; } x_2_1_4; struct { double x_5_2_1; int x_5_2_2; } x_2_1_5; } x2; })arg4 offsetParamIndex:(int*)arg5 numNodes:(int*)arg6 earlierBound:(BOOL)arg7 isCalPers:(BOOL)arg8 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg9;
- (struct { int x1; union { id x_2_1_1; id x_2_1_2; id x_2_1_3; struct { unsigned char x_4_2_1; unsigned short x_4_2_2; struct __CFUUID {} *x_4_2_3; BOOL x_4_2_4; BOOL x_4_2_5; } x_2_1_4; struct { double x_5_2_1; int x_5_2_2; } x_2_1_5; } x2; }*)predicateArg2atHostCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)p_predicateArg:(struct { int x1; union { id x_2_1_1; id x_2_1_2; id x_2_1_3; struct { unsigned char x_4_2_1; unsigned short x_4_2_2; struct __CFUUID {} *x_4_2_3; BOOL x_4_2_4; BOOL x_4_2_5; } x_2_1_4; struct { double x_5_2_1; int x_5_2_2; } x_2_1_5; } x2; }*)arg1 isEqual:(struct { int x1; union { id x_2_1_1; id x_2_1_2; id x_2_1_3; struct { unsigned char x_4_2_1; unsigned short x_4_2_2; struct __CFUUID {} *x_4_2_3; BOOL x_4_2_4; BOOL x_4_2_5; } x_2_1_4; struct { double x_5_2_1; int x_5_2_2; } x_2_1_5; } x2; }*)arg2;
- (struct { int x1; union { id x_2_1_1; id x_2_1_2; id x_2_1_3; struct { unsigned char x_4_2_1; unsigned short x_4_2_2; struct __CFUUID {} *x_4_2_3; BOOL x_4_2_4; BOOL x_4_2_5; } x_2_1_4; struct { double x_5_2_1; int x_5_2_2; } x_2_1_5; } x2; }*)predicateArg1atHostCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)p_isEqualForNonFormulaItems:(id)arg1;
- (void)p_clearDerivedVariables;
- (struct TSCENumberValue { int (**x1)(); double x2; int x3[1]; struct TSUFormat { int (**x_4_1_1)(); int x_4_1_2; boolx_4_1_3; union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 8; unsigned int x_1_3_3 : 3; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 1; } x_4_2_1; struct { unsigned int x_2_3_1 : 8; } x_4_2_2; struct { unsigned int x_3_3_1 : 8; unsigned int x_3_3_2 : 8; unsigned int x_3_3_3 : 1; } x_4_2_3; struct { unsigned int x_4_3_1 : 1; unsigned int x_4_3_2 : 1; id x_4_3_3; } x_4_2_4; struct { unsigned int x_5_3_1 : 1; int x_5_3_2; int x_5_3_3; int x_5_3_4; } x_4_2_5; struct { unsigned int x_6_3_1; struct { /* ? */ } *x_6_3_2; } x_4_2_6; struct { double x_7_3_1; double x_7_3_2; double x_7_3_3; int x_7_3_4; unsigned int x_7_3_5 : 2; unsigned int x_7_3_6 : 2; } x_4_2_7; struct { int x_8_3_1; unsigned int x_8_3_2; id x_8_3_3; } x_4_2_8; } x_4_1_4; struct TSUCustomFormat {} *x_4_1_5; } x4; BOOL x5; }*)durationParam2;
- (int)qualifier2;
- (id)dateTimeParam2;
- (double)numberParam2;
- (struct TSCENumberValue { int (**x1)(); double x2; int x3[1]; struct TSUFormat { int (**x_4_1_1)(); int x_4_1_2; boolx_4_1_3; union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 8; unsigned int x_1_3_3 : 3; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 1; } x_4_2_1; struct { unsigned int x_2_3_1 : 8; } x_4_2_2; struct { unsigned int x_3_3_1 : 8; unsigned int x_3_3_2 : 8; unsigned int x_3_3_3 : 1; } x_4_2_3; struct { unsigned int x_4_3_1 : 1; unsigned int x_4_3_2 : 1; id x_4_3_3; } x_4_2_4; struct { unsigned int x_5_3_1 : 1; int x_5_3_2; int x_5_3_3; int x_5_3_4; } x_4_2_5; struct { unsigned int x_6_3_1; struct { /* ? */ } *x_6_3_2; } x_4_2_6; struct { double x_7_3_1; double x_7_3_2; double x_7_3_3; int x_7_3_4; unsigned int x_7_3_5 : 2; unsigned int x_7_3_6 : 2; } x_4_2_7; struct { int x_8_3_1; unsigned int x_8_3_2; id x_8_3_3; } x_4_2_8; } x_4_1_4; struct TSUCustomFormat {} *x_4_1_5; } x4; BOOL x5; }*)durationParam1;
- (id)dateTimeParam1;
- (id)stringParam1;
- (BOOL)evaluateAtCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 inFormulaOwner:(struct __CFUUID { }*)arg2 calculationEngine:(id)arg3;
- (id)initWithLiteralNumberType:(int)arg1 number1:(double)arg2 number2:(double)arg3 qualifier:(int)arg4 argumentCellReference:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })arg5 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg6;
- (id)initWithLiteralDurationType:(int)arg1 duration1:(struct TSTDurationWrapper { double x1; struct { unsigned int x_2_1_1 : 1; int x_2_1_2; int x_2_1_3; int x_2_1_4; } x2; })arg2 duration2:(struct TSTDurationWrapper { double x1; struct { unsigned int x_2_1_1 : 1; int x_2_1_2; int x_2_1_3; int x_2_1_4; } x2; })arg3 qualifier:(int)arg4 argumentCellReference:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })arg5 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg6;
- (id)initWithLiteralDateType:(int)arg1 date1:(id)arg2 date2:(id)arg3 number1:(double)arg4 number2:(double)arg5 qualifier1:(int)arg6 qualifier2:(int)arg7 argumentCellReference:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })arg8 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg9;
- (id)initWithLiteralTextType:(int)arg1 string:(id)arg2 argumentCellReference:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })arg3 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg4;
- (int)qualifier1;
- (int)predicateType;
- (double)numberParam1;
- (id)copyByRemappingFormulaIDsWithMap:(struct __CFDictionary { }*)arg1 calcEngine:(id)arg2 error:(BOOL*)arg3;
- (id)initFromArchive:(const struct FormulaPredicateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct FormulaArchive {} *x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; unsigned int x11[1]; }*)arg1;
- (void)encodeToArchive:(struct FormulaPredicateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct FormulaArchive {} *x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; unsigned int x11[1]; }*)arg1 archiver:(id)arg2;

@end
